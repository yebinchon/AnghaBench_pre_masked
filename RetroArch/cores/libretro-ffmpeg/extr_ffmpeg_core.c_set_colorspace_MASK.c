
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwsContext {int dummy; } ;
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct SwsContext*,int**,int*,int**,int*,int*,int*,int*) ;
 int FUNC_2 (struct SwsContext*,int const*,int,int const*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct SwsContext *VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      enum AVColorSpace VAR_9, int VAR_10)
{
   const int *VAR_11 = ((void*)0);

   if (VAR_5 == VAR_4)
   {
      if (VAR_9 != VAR_4)
         VAR_11 = FUNC_0(VAR_9);
      else if (VAR_7 >= 1280 || VAR_8 > 576)
         VAR_11 = FUNC_0(VAR_3);
      else
         VAR_11 = FUNC_0(VAR_2);
   }
   else
      VAR_11 = FUNC_0(VAR_5);

   if (VAR_11)
   {
      int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
      const int *VAR_17, *VAR_18;

      FUNC_1(VAR_6, (int**)&VAR_17, &VAR_12,
            (int**)&VAR_18, &VAR_13,
            &VAR_14, &VAR_15, &VAR_16);

      if (VAR_10 != VAR_1)
         VAR_12 = VAR_10 == VAR_0;

      VAR_17 = VAR_11;
      FUNC_2(VAR_6, VAR_17, VAR_12,
            VAR_18, VAR_13,
            VAR_14, VAR_15, VAR_16);
   }
}
