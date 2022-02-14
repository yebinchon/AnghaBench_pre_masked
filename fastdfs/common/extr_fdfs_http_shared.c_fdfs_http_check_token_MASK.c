
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BufferInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,char const*,int const,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;
 int const FUNC_3 (int *) ;

int FUNC_4(const BufferInfo *VAR_3, const char *VAR_4, const int VAR_5, const char *VAR_6, const int VAR_7)

{
 char VAR_8[33];
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 != 32)
 {
  return VAR_0;
 }

 if ((VAR_5 != 0) && (FUNC_3(((void*)0)) - VAR_5 > VAR_7))
 {
  return VAR_2;
 }

 if ((VAR_9=FUNC_0(VAR_3, VAR_4, VAR_5, VAR_8)) != 0)

 {
  return VAR_9;
 }

 return (FUNC_1(VAR_6, VAR_8, 32) == 0) ? 0 : VAR_1;
}
