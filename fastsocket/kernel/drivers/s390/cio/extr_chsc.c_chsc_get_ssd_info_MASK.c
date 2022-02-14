
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel_id {int sch_no; int ssid; } ;
struct chsc_ssd_info {int path_mask; int fla_valid_mask; int * fla; TYPE_3__* chpid; } ;
struct TYPE_5__ {int code; } ;
struct TYPE_4__ {int length; int code; } ;
struct chsc_ssd_area {scalar_t__ st; int path_mask; int fla_valid_mask; int * fla; int * chpid; int sch_valid; TYPE_2__ response; int l_sch; int f_sch; int ssid; TYPE_1__ request; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct chsc_ssd_area*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (struct chsc_ssd_info*,int ,int) ;

int FUNC_7(struct subchannel_id VAR_7, struct chsc_ssd_info *VAR_8)
{
 unsigned long VAR_9;
 struct chsc_ssd_area *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_5(VAR_4 | VAR_3);
 if (!VAR_9)
  return -VAR_2;
 VAR_10 = (struct chsc_ssd_area *) VAR_9;
 VAR_10->request.length = 0x0010;
 VAR_10->request.code = 0x0004;
 VAR_10->ssid = VAR_7.ssid;
 VAR_10->f_sch = VAR_7.sch_no;
 VAR_10->l_sch = VAR_7.sch_no;

 VAR_11 = FUNC_2(VAR_10);

 if (VAR_11 > 0) {
  VAR_12 = (VAR_11 == 3) ? -VAR_1 : -VAR_0;
  goto out_free;
 }
 VAR_12 = FUNC_3(VAR_10->response.code);
 if (VAR_12 != 0) {
  FUNC_0(2, "chsc: ssd failed for 0.%x.%04x (rc=%04x)\n",
         VAR_7.ssid, VAR_7.sch_no,
         VAR_10->response.code);
  goto out_free;
 }
 if (!VAR_10->sch_valid) {
  VAR_12 = -VAR_1;
  goto out_free;
 }

 VAR_12 = 0;
 FUNC_6(VAR_8, 0, sizeof(struct chsc_ssd_info));
 if ((VAR_10->st != VAR_5) &&
     (VAR_10->st != VAR_6))
  goto out_free;
 VAR_8->path_mask = VAR_10->path_mask;
 VAR_8->fla_valid_mask = VAR_10->fla_valid_mask;
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
  VAR_14 = 0x80 >> VAR_13;
  if (VAR_10->path_mask & VAR_14) {
   FUNC_1(&VAR_8->chpid[VAR_13]);
   VAR_8->chpid[VAR_13].id = VAR_10->chpid[VAR_13];
  }
  if (VAR_10->fla_valid_mask & VAR_14)
   VAR_8->fla[VAR_13] = VAR_10->fla[VAR_13];
 }
out_free:
 FUNC_4(VAR_9);
 return VAR_12;
}
