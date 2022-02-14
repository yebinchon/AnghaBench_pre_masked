
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(bool *VAR_1, void **VAR_2, GucSource VAR_3)
{





 if (*VAR_1)
 {
  FUNC_0(VAR_0);
  FUNC_1("Citus was compiled without libcurl support.");
  return 0;
 }
 else
 {
  return 1;
 }

}
