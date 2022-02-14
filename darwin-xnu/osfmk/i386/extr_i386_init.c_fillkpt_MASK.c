
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t pt_entry_t ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(pt_entry_t *VAR_2, int VAR_3, uintptr_t VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 for (VAR_7=0; VAR_7<VAR_6; VAR_7++) {
  VAR_2[VAR_5] = VAR_4 | VAR_3 | VAR_0;
  VAR_4 += VAR_1;
  VAR_5++;
 }
}
