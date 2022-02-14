
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, UWORD *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0 || VAR_4 > 0xffff)
  return VAR_0;
 *VAR_3 = (UWORD) VAR_4;
 return VAR_1;
}
