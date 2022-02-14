
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int type_enum; scalar_t__ str; int s; int idx; scalar_t__ spacer; int selected; } ;
typedef TYPE_1__ menu_animation_ctx_ticker_t ;


 int VAR_0 ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t,size_t,size_t,size_t,size_t,size_t,int ,int ) ;
 int FUNC_1 (int ,int,size_t*,size_t*) ;
 int FUNC_2 (int ,int,size_t,size_t,size_t*,size_t*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,scalar_t__,size_t) ;
 size_t FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,size_t) ;

bool FUNC_7(menu_animation_ctx_ticker_t *VAR_3)
{
   size_t VAR_4 = FUNC_5(VAR_3->str);

   if (!VAR_3->spacer)
      VAR_3->spacer = VAR_2;

   if ((size_t)VAR_4 <= VAR_3->len)
   {
      FUNC_4(VAR_3->s,
            VAR_0,
            VAR_3->str,
            VAR_3->len);
      return 0;
   }

   if (!VAR_3->selected)
   {
      FUNC_4(VAR_3->s,
            VAR_0, VAR_3->str, VAR_3->len - 3);
      FUNC_3(VAR_3->s, "...", VAR_3->len);
      return 0;
   }




   switch (VAR_3->type_enum)
   {
      case 128:
      {
         size_t VAR_5, VAR_6, VAR_7;
         size_t VAR_8, VAR_9, VAR_10;

         FUNC_2(
               VAR_3->idx,
               VAR_3->len,
               VAR_4, FUNC_5(VAR_3->spacer),
               &VAR_5, &VAR_8,
               &VAR_6, &VAR_9,
               &VAR_7, &VAR_10);

         FUNC_0(
               VAR_3->str, VAR_3->spacer,
               VAR_5, VAR_8,
               VAR_6, VAR_9,
               VAR_7, VAR_10,
               VAR_3->s, VAR_0);

         break;
      }
      case 129:
      default:
      {
         size_t VAR_11 = 0;

         FUNC_1(
               VAR_3->idx,
               VAR_3->len,
               &VAR_11,
               &VAR_4);

         FUNC_4(
               VAR_3->s,
               VAR_0,
               FUNC_6(VAR_3->str, VAR_11),
               VAR_4);

         break;
      }
   }

   VAR_1 = 1;

   return 1;
}
