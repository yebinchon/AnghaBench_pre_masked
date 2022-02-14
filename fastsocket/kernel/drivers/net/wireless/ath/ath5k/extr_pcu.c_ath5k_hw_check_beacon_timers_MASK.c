
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int,int,int) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;

bool
FUNC_2(struct ath5k_hw *VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_7 = FUNC_1(VAR_4, VAR_2);
 VAR_8 = FUNC_1(VAR_4, VAR_1) >> 3;





 if (FUNC_0(VAR_6, VAR_7, 1, VAR_5) &&
     FUNC_0(VAR_8, VAR_6, VAR_3,
      VAR_5))
  return 1;
 return 0;
}
