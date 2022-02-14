
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct broadsheetfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct broadsheetfb_par *VAR_2, u16 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 <= (VAR_1 - VAR_0) ; VAR_4++)
  FUNC_0(VAR_0 + VAR_4, (VAR_3 >> VAR_4) & 0x01);
}
