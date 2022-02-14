
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_col_pat {int olop; int olep; int elop; int elep; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ccdc_col_pat *VAR_1,
           struct ccdc_col_pat *VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_1->olop | (VAR_1->olep << 2) | (VAR_1->elop << 4) |
  (VAR_1->elep << 6) | (VAR_2->olop << 8) | (VAR_2->olep << 10) |
  (VAR_2->elop << 12) | (VAR_2->elep << 14));
 FUNC_0(VAR_3, VAR_0);
}
