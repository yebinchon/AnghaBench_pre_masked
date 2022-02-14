
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* rq_disk; } ;
struct hd_i_struct {int head; scalar_t__ special_op; int sect; scalar_t__ recalibrate; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hd_i_struct*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct hd_i_struct *VAR_4, struct request *VAR_5)
{
 if (VAR_4->recalibrate) {
  VAR_4->recalibrate = 0;
  FUNC_1(VAR_4, VAR_4->sect, 0, 0, 0, VAR_0, &VAR_2);
  return VAR_3;
 }
 if (VAR_4->head > 16) {
  FUNC_2("%s: cannot handle device with more than 16 heads - giving up\n", VAR_5->rq_disk->disk_name);
  FUNC_0(-VAR_1);
 }
 VAR_4->special_op = 0;
 return 1;
}
