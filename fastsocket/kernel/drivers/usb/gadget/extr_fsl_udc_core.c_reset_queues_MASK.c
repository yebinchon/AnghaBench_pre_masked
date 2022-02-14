
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fsl_udc {scalar_t__ max_pipes; int lock; int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fsl_udc*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fsl_udc *VAR_0)
{
 u8 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_pipes; VAR_1++)
  FUNC_3(VAR_0, VAR_1);


 FUNC_1(&VAR_0->lock);
 VAR_0->driver->disconnect(&VAR_0->gadget);
 FUNC_0(&VAR_0->lock);

 return 0;
}
