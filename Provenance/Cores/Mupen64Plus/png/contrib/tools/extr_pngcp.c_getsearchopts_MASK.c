
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {int* value; } ;
typedef size_t png_byte ;
struct TYPE_2__ {int search; } ;


 int VAR_0 ;
 size_t const FUNC_0 (struct display*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct display*,size_t const,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct display*,size_t const,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (struct display*,char const*,int ) ;
 TYPE_1__* VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (struct display*,size_t const,char const*) ;
 int VAR_7 ;
 int FUNC_6 (char const*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_7(struct display *VAR_9, const char *VAR_10, int *VAR_11)

{
   png_byte VAR_12;
   const png_byte VAR_13 = FUNC_4(VAR_9, VAR_10, FUNC_6(VAR_10));
   int VAR_14 = VAR_5[VAR_13].search;
   const char *VAR_15;




   if (FUNC_3(VAR_9, VAR_13, VAR_11, VAR_14))
      return 1;

   else if (!VAR_14)
      return 0;


   VAR_12 = FUNC_0(VAR_9, VAR_7);
   VAR_15 = VAR_6;

   if (VAR_13 == VAR_12)
      (void)FUNC_1(VAR_9, VAR_13, 0 ), VAR_14=0;

   else if (VAR_13 == FUNC_0(VAR_9, VAR_3))
   {

      if (VAR_9->value[VAR_12] == VAR_2 || VAR_9->value[VAR_12] == VAR_1)
         VAR_9->value[VAR_13] = 1;

      else
         (void)FUNC_1(VAR_9, VAR_13, 1 ), VAR_14=0;
   }

   else if (VAR_13 == FUNC_0(VAR_9, VAR_8))
   {





      if (VAR_9->value[VAR_12] == VAR_1)
         VAR_9->value[VAR_13] = 8;

      else if (VAR_9->value[VAR_12] == VAR_2)
         VAR_9->value[VAR_13] = 9;

      else
         (void)FUNC_1(VAR_9, VAR_13, 1 ), VAR_14=0;
   }

   else if (VAR_13 == FUNC_0(VAR_9, VAR_4))
   {



         VAR_9->value[VAR_13] = VAR_0;

   }

   else
      FUNC_2(0=="reached");

   if (VAR_14)
      FUNC_5(VAR_9, VAR_13, VAR_15);


   *VAR_11 = VAR_9->value[VAR_13];
   return 1;
}
