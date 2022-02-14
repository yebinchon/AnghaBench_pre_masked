
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mca_find_adapter_info {int slot; int id; TYPE_1__* mca_dev; int member_0; } ;
struct TYPE_2__ {scalar_t__ status; int slot; int driver_loaded; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,struct mca_find_adapter_info*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(int VAR_5, int VAR_6)
{
 struct mca_find_adapter_info VAR_7 = { 0 };

 if (!VAR_2 || VAR_5 == 0xffff)
  return VAR_1;

 VAR_7.slot = VAR_6;
 VAR_7.id = VAR_5;
 VAR_7.mca_dev = ((void*)0);

 for(;;) {
  FUNC_0(&VAR_3, ((void*)0), &VAR_7, VAR_4);

  if(VAR_7.mca_dev == ((void*)0))
   return VAR_1;

  if(VAR_7.mca_dev->status != VAR_0
     && !VAR_7.mca_dev->driver_loaded)
   break;





  VAR_7.slot = VAR_7.mca_dev->slot + 1;
  VAR_7.mca_dev = ((void*)0);
 }

 return VAR_7.mca_dev->slot;
}
