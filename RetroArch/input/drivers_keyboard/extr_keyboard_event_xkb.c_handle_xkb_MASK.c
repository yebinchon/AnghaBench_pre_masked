
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xkb_mod_index_t ;
typedef int xkb_keysym_t ;
typedef int uint16_t ;
typedef enum xkb_state_component { ____Placeholder_xkb_state_component } xkb_state_component ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int const) ;
 int VAR_9 ;
 unsigned int FUNC_3 (int ,int,int const**) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,int,int ) ;

int FUNC_6(int VAR_10, int VAR_11)
{
   unsigned VAR_12;
   const xkb_keysym_t *VAR_13 = ((void*)0);
   unsigned VAR_14 = 0;
   uint16_t VAR_15 = 0;

   int VAR_16 = VAR_10 + 8;

   if (!VAR_9)
      return -1;

   if (VAR_11 == 2)
      FUNC_5(VAR_9, VAR_16, VAR_4);

   if (VAR_11)
      VAR_14 = FUNC_3(VAR_9, VAR_16, &VAR_13);

   if (VAR_11 > 0)
      FUNC_5(VAR_9, VAR_16, VAR_3);
   else
      FUNC_5(VAR_9, VAR_16, VAR_4);

   if (!VAR_13)
      return -1;


   for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   {
      xkb_mod_index_t *VAR_17 = (xkb_mod_index_t*)&VAR_8[VAR_12];
      uint16_t *VAR_18 = (uint16_t *)&VAR_7[VAR_12];

      if (*VAR_17 != VAR_5)
         VAR_15 |= FUNC_4(
               VAR_9, *VAR_17,
               (enum xkb_state_component)
               ((VAR_6) > 0)) ? *VAR_18 : 0;
   }

   FUNC_0(VAR_11, FUNC_1(VAR_10),
         VAR_14 ? FUNC_2(VAR_13[0]) : 0, VAR_15, VAR_2);

   for (VAR_12 = 1; VAR_12 < VAR_14; VAR_12++)
      FUNC_0(VAR_11, VAR_1,
            FUNC_2(VAR_13[VAR_12]), VAR_15, VAR_2);

   return 0;
}
