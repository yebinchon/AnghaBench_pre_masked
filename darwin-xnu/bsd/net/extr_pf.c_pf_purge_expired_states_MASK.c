
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pf_state {scalar_t__ timeout; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pf_state* FUNC_1 (int *) ;
 struct pf_state* FUNC_2 (struct pf_state*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct pf_state*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct pf_state*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct pf_state*) ;
 int VAR_4 ;

void
FUNC_7(u_int32_t VAR_5)
{
 static struct pf_state *VAR_6 = ((void*)0);
 struct pf_state *VAR_7;

 FUNC_0(VAR_3, VAR_0);

 while (VAR_5--) {

  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_1(&VAR_4);
   if (VAR_6 == ((void*)0))
    break;
  }


  VAR_7 = FUNC_2(VAR_6, VAR_2);

  if (VAR_6->timeout == VAR_1) {
   FUNC_3(VAR_6);
  } else if (FUNC_4(VAR_6) <= FUNC_5()) {

   FUNC_6(VAR_6);
   FUNC_3(VAR_6);
  }
  VAR_6 = VAR_7;
 }
}
