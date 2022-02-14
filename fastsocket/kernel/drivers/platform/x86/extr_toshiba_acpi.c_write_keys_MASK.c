
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*,int*) ;

__attribute__((used)) static unsigned long FUNC_1(const char *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2, " hotkey_ready : %i", &VAR_4) == 1 && VAR_4 == 0) {
  VAR_1 = 0;
 } else {
  return -VAR_0;
 }

 return VAR_3;
}
