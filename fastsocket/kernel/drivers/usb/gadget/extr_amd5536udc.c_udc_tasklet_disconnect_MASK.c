
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct udc {int lock; TYPE_2__* regs; int * ep; int gadget; TYPE_1__* driver; } ;
struct TYPE_4__ {int cfg; } ;
struct TYPE_3__ {int (* disconnect ) (int *) ;} ;


 size_t FUNC_0 (size_t,int ,int ) ;
 int FUNC_1 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 size_t FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct udc*) ;
 int FUNC_11 (struct udc*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (size_t,int *) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_6)
{
 struct udc *VAR_7 = (struct udc *)(*((struct udc **) VAR_6));
 u32 VAR_8;

 FUNC_1(VAR_7, "Tasklet disconnect\n");
 FUNC_6(&VAR_7->lock);

 if (VAR_7->driver) {
  FUNC_7(&VAR_7->lock);
  VAR_7->driver->disconnect(&VAR_7->gadget);
  FUNC_5(&VAR_7->lock);


  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   FUNC_2(&VAR_7->ep[VAR_8]);
  }

 }


 FUNC_3(VAR_7->regs,
   &VAR_7->ep[VAR_2]);


 if (!VAR_4) {

  FUNC_11(VAR_7);
  VAR_4++;
 }


 FUNC_10(VAR_7);

 if (VAR_5) {
  VAR_8 = FUNC_4(&VAR_7->regs->cfg);
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_0);
  FUNC_12(VAR_8, &VAR_7->regs->cfg);
 }

 FUNC_8(&VAR_7->lock);
}
