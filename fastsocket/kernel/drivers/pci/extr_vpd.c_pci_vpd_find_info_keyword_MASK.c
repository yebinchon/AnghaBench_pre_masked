
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;

int FUNC_1(const u8 *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4, const char *VAR_5)
{
 int VAR_6;

 for (VAR_6 = VAR_3; VAR_6 + VAR_1 <= VAR_3 + VAR_4;) {
  if (VAR_2[VAR_6 + 0] == VAR_5[0] &&
      VAR_2[VAR_6 + 1] == VAR_5[1])
   return VAR_6;

  VAR_6 += VAR_1 +
  FUNC_0(&VAR_2[VAR_6]);
 }

 return -VAR_0;
}
