
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysinfo {int freeram; } ;
struct hv_dynmem_device {TYPE_2__* dev; scalar_t__ num_pages_ballooned; } ;
struct TYPE_3__ {int size; scalar_t__ trans_id; int type; } ;
struct dm_status {TYPE_1__ hdr; scalar_t__ num_committed; int num_avail; } ;
struct TYPE_4__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct dm_status*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct sysinfo*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,struct dm_status*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct hv_dynmem_device *VAR_4)
{
 struct dm_status VAR_5;
 struct sysinfo VAR_6;

 if (VAR_2 > 0) {
  --VAR_2;
  return;
 }
 FUNC_4(&VAR_6);
 FUNC_3(&VAR_5, 0, sizeof(struct dm_status));
 VAR_5.hdr.type = VAR_0;
 VAR_5.hdr.size = sizeof(struct dm_status);
 VAR_5.hdr.trans_id = FUNC_0(&VAR_3);
 VAR_5.num_avail = VAR_6.freeram;
 VAR_5.num_committed = FUNC_5() +
    VAR_4->num_pages_ballooned +
    FUNC_2();






 if (VAR_5.hdr.trans_id != FUNC_1(&VAR_3))
  return;

 FUNC_6(VAR_4->dev->channel, &VAR_5,
    sizeof(struct dm_status),
    (unsigned long)((void*)0),
    VAR_1, 0);

}
