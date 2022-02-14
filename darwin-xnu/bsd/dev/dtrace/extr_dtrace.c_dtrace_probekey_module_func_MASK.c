
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_probekey_f ;
struct TYPE_3__ {char* dtpr_mod; } ;
typedef TYPE_1__ dtrace_probe_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static dtrace_probekey_f *
FUNC_3(const char *VAR_5)
{
 FUNC_0(&VAR_2, VAR_0);

 dtrace_probekey_f *VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 == &VAR_4) {
  dtrace_probe_t VAR_7 = {
   .dtpr_mod = (char *)(uintptr_t)VAR_5,
  };
  if (FUNC_1(VAR_1, &VAR_7) == ((void*)0)) {
   return (&VAR_3);
  }
  return (&VAR_4);
 }
 return VAR_6;
}
