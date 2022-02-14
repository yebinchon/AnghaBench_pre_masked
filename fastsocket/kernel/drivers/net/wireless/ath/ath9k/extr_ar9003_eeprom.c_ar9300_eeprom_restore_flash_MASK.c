
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct ath_hw *VAR_0, u8 *VAR_1,
           int VAR_2)
{
 u16 *VAR_3 = (u16 *) VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 / 2; VAR_4++, VAR_3++)
  FUNC_0(VAR_0, VAR_4, VAR_3);

 return 0;
}
