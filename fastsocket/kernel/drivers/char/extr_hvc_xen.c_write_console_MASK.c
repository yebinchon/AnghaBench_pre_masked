
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3;







 while (VAR_3) {
  int VAR_5 = FUNC_1(VAR_2, VAR_3);

  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;

  if (FUNC_2(VAR_3))
   FUNC_0(VAR_0, ((void*)0));
 }

 return VAR_4;
}
