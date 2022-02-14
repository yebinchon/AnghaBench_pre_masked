
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refcount; int lock; scalar_t__ service; int waitpool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_8(void)
{
   bool VAR_6 = 0;

   FUNC_6(&VAR_4, VAR_2);

   FUNC_4(&VAR_3.lock);

   if (!VAR_3.refcount)
   {

      goto completed;
   }

   if (--VAR_3.refcount != 0)
   {

      goto completed;
   }

   FUNC_2("%s: starting deinitialisation", VAR_0);


   FUNC_7(&VAR_3.waitpool);
   FUNC_0(VAR_3.service);
   FUNC_1(VAR_5);
   FUNC_3(VAR_1);

   VAR_3.service = 0;

   VAR_6 = 1;

completed:
   FUNC_5(&VAR_3.lock);

   return VAR_6;
}
