
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sdram_params {int refresh; int rows; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(u_int VAR_0, struct sdram_params *VAR_1)
{
 u_int VAR_2 = (VAR_1->refresh * 1000) >> VAR_1->rows;
 u_int VAR_3 = FUNC_1(VAR_2, VAR_0 / 2) / 32;






 FUNC_3(VAR_3);
}
