
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,scalar_t__*) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static unsigned long FUNC_2(const char *VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 if (FUNC_1(VAR_5, " force_on : %i", &VAR_7) == 1 &&
     VAR_7 >= 0 && VAR_7 <= 1) {
  FUNC_0(VAR_2, VAR_7, &VAR_8);
  if (VAR_8 != VAR_3)
   return -VAR_0;
  else
   VAR_4 = VAR_7;
 } else {
  return -VAR_1;
 }

 return VAR_6;
}
