
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; int lock; scalar_t__ inited; int service; int waitpool; int bulk_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
   int VAR_4;

   FUNC_5(&VAR_2.lock);
   VAR_4 = --VAR_2.refcount;
   if (VAR_4 != 0)
   {

      FUNC_6(&VAR_2.lock);
      return;
   }

   FUNC_4(&VAR_2.bulk_lock);
   FUNC_0(&VAR_2.waitpool);
   FUNC_1(VAR_2.service);
   FUNC_2(VAR_3);
   FUNC_3(VAR_1);

   VAR_2.service = VAR_0;
   VAR_2.inited = 0;
   FUNC_6(&VAR_2.lock);
}
