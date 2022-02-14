
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mca_find_adapter_info {int slot; int id; TYPE_1__* mca_dev; } ;
struct TYPE_2__ {scalar_t__ status; int slot; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,struct mca_find_adapter_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4, int VAR_5)
{
 struct mca_find_adapter_info VAR_6;

 if(VAR_4 == 0xffff)
  return VAR_1;

 VAR_6.slot = VAR_5;
 VAR_6.id = VAR_4;
 VAR_6.mca_dev = ((void*)0);

 for(;;) {
  FUNC_0(&VAR_2, ((void*)0), &VAR_6, VAR_3);

  if(VAR_6.mca_dev == ((void*)0))
   return VAR_1;

  if(VAR_6.mca_dev->status != VAR_0)
   break;




  VAR_6.slot = VAR_6.mca_dev->slot + 1;
  VAR_6.mca_dev = ((void*)0);
 }

 return VAR_6.mca_dev->slot;
}
