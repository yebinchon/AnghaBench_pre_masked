
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ level; TYPE_4__* param; } ;
typedef TYPE_3__ scope_t ;
struct TYPE_10__ {scalar_t__ level; int value; TYPE_5__* generator; struct TYPE_10__* prev; } ;
typedef TYPE_4__ param_t ;
struct TYPE_8__ {float val_dec; int val_int; } ;
struct TYPE_7__ {scalar_t__ val_int; scalar_t__ val_dec; } ;
struct TYPE_11__ {int shift; TYPE_2__ value; TYPE_1__ increment; scalar_t__ is_decimal; } ;
typedef TYPE_5__ generator_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,float) ;

void FUNC_2(scope_t *VAR_1)
{
   param_t *VAR_2;

   for (
         VAR_2 = VAR_1->param;
         VAR_2 && VAR_2->level >= VAR_1->level;
         VAR_2 = VAR_2->prev)
   {
      generator_t *VAR_3;
      if ((VAR_3 = VAR_2->generator))
      {
         char VAR_4[VAR_0];
         VAR_4[0] = '\0';

         if (VAR_3->is_decimal)
         {
            VAR_3->value.val_dec += VAR_3->increment.val_dec;
            if (VAR_3->shift > 0)
               VAR_3->value.val_dec = (float)((int)VAR_3->value.val_dec << VAR_3->shift);
            else if (VAR_3->shift < 0)
               VAR_3->value.val_dec = (float)((int)VAR_3->value.val_dec >> -VAR_3->shift);
            FUNC_1(VAR_4, "%f", VAR_3->value.val_dec);
         }
         else
         {
            VAR_3->value.val_int += VAR_3->increment.val_int;
            if(VAR_3->shift > 0)
               VAR_3->value.val_int <<= VAR_3->shift;
            else if (VAR_3->shift < 0)
               VAR_3->value.val_int >>= -VAR_3->shift;
            FUNC_1(VAR_4, "%d", VAR_3->value.val_int);
         }

         FUNC_0(&VAR_2->value, VAR_4);
      }
   }
}
