
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
typedef scalar_t__ rounding ;
typedef int hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned int,char*,unsigned int) ;
 int FUNC_1 (int const*,unsigned int,scalar_t__,int *,unsigned int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2 (const hrz_dev * VAR_5, u32 VAR_6, rounding VAR_7, unsigned int VAR_8,
         u16 * VAR_9, unsigned int * VAR_10) {
  unsigned int VAR_11;

  FUNC_0 (VAR_1|VAR_0, "make_rate_with_tolerance c=%u, %s, tol=%u",
   VAR_6, (VAR_7 == VAR_4) ? "up" : (VAR_7 == VAR_2) ? "down" : "nearest", VAR_8);

  if (!VAR_10)

    VAR_10 = &VAR_11;

  if (FUNC_1 (VAR_5, VAR_6, VAR_3, VAR_9, VAR_10))

    return -1;

  if (VAR_6 - VAR_8 <= *VAR_10 && *VAR_10 <= VAR_6 + VAR_8)

    return 0;
  else

    return FUNC_1 (VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);
}
