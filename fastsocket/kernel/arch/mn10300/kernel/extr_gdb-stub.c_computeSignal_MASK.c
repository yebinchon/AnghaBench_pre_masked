
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct excep_to_sig_map {int signo; int excep; } ;
typedef enum exception_code { ____Placeholder_exception_code } exception_code ;


 int VAR_0 ;
 struct excep_to_sig_map* VAR_1 ;

__attribute__((used)) static int FUNC_0(enum exception_code VAR_2)
{
 const struct excep_to_sig_map *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->signo; VAR_3++)
  if (VAR_3->excep == VAR_2)
   return VAR_3->signo;

 return VAR_0;
}
