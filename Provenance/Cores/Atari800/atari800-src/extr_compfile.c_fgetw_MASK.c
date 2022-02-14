
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_1)
{
 int VAR_2;
 int VAR_3;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == VAR_0)
  return -1;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == VAR_0)
  return -1;
 return VAR_2 + (VAR_3 << 8);
}
