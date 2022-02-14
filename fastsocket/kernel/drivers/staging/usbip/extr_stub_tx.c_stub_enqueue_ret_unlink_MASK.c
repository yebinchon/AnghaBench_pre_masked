
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stub_unlink {int list; void* status; void* seqnum; } ;
struct stub_device {int unlink_tx; int ud; TYPE_1__* interface; } ;
typedef void* __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct stub_unlink* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct stub_device *VAR_2, __u32 VAR_3,
        __u32 VAR_4)
{
 struct stub_unlink *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct stub_unlink), VAR_0);
 if (!VAR_5) {
  FUNC_0(&VAR_2->interface->dev, "alloc stub_unlink\n");
  FUNC_3(&VAR_2->ud, VAR_1);
  return;
 }

 VAR_5->seqnum = VAR_3;
 VAR_5->status = VAR_4;

 FUNC_2(&VAR_5->list, &VAR_2->unlink_tx);
}
