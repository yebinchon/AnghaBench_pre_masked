
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(int *VAR_11, int *VAR_12, size_t VAR_13, int VAR_14,
       int VAR_15, int VAR_16)
{
 int VAR_17;

 *VAR_11 = (80 * (24 + VAR_13) + VAR_15 - 1)
  / VAR_15;

 if (VAR_15 <= VAR_10)

  *VAR_11 += 3 * (10 +
        72 +
        24) +
        112 + 112;
 else

  *VAR_11 += 3 * (10 +
        72 +
        24) +
        56 + 56;


 if (!VAR_16)
  *VAR_11 += 3 * (144 -
        72) +
   3 * (48 -
        24);


 *VAR_12 = (80 * VAR_14) / VAR_15;
 VAR_17 = (80 * VAR_14) % VAR_15;
 if (VAR_15 == VAR_9 &&
     VAR_17 <= 30 && VAR_17 > 0)
  *VAR_12 = (*VAR_12 | 0x8000) + 1;
 else if (VAR_17)
  (*VAR_12)++;
}
