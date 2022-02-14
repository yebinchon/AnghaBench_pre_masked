
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static unsigned long FUNC_2(const char *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2, " brightness : %i", &VAR_4) == 1 &&
     VAR_4 >= 0 && VAR_4 < VAR_1) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == 0)
   VAR_5 = VAR_3;
 } else {
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
