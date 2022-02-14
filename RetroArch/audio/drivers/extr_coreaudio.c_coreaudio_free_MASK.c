
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cond; int lock; scalar_t__ buffer; int dev; scalar_t__ dev_alive; } ;
typedef TYPE_1__ coreaudio_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
   coreaudio_t *VAR_1 = (coreaudio_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->dev_alive)
   {
      FUNC_1(VAR_1->dev);



      FUNC_0(VAR_1->dev);

   }

   if (VAR_1->buffer)
      FUNC_3(VAR_1->buffer);

   FUNC_6(VAR_1->lock);
   FUNC_5(VAR_1->cond);

   FUNC_4(VAR_1);
}
