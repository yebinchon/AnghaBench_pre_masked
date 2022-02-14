
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Rune ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(Rune *VAR_2)
{
 if(VAR_1){
  *VAR_2 = 0;
  return 1;
 }
 VAR_0 += FUNC_0(VAR_2, VAR_0);
 if(*VAR_2 == '\\'){
  VAR_0 += FUNC_0(VAR_2, VAR_0);
  return 1;
 }
 if(*VAR_2 == 0)
  VAR_1 = 1;
 return 0;
}
