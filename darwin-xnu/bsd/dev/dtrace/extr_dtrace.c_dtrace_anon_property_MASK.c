
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dts_vstate; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dof_hdr_t ;
typedef int c ;
struct TYPE_7__ {int * dta_enabling; TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int ,int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *,int *,TYPE_1__**) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_14(void)
{
 int VAR_9, VAR_10;
 dtrace_state_t *VAR_11;
 dof_hdr_t *VAR_12;
 char VAR_13[32];

 FUNC_2(&VAR_8, VAR_4);
 FUNC_2(&VAR_5, VAR_4);

 for (VAR_9 = 0; ; VAR_9++) {
  (void) FUNC_13(VAR_13, sizeof (VAR_13), "dof-data-%d", VAR_9);

  VAR_7 = 1;

  if ((VAR_12 = FUNC_6(VAR_13)) == ((void*)0)) {
   VAR_7 = 0;
   break;
  }
  if ((VAR_11 = VAR_6.dta_state) == ((void*)0)) {
   VAR_10 = FUNC_10(((void*)0), ((void*)0), &VAR_11);
   VAR_6.dta_state = VAR_11;
   if (VAR_10 != 0 || VAR_11 == ((void*)0)) {
    FUNC_3(VAR_2, "failed to create "
        "anonymous state");
    FUNC_4(VAR_12);
    break;
   }
  }

  VAR_10 = FUNC_7(VAR_12, &VAR_11->dts_vstate, FUNC_1(),
      &VAR_6.dta_enabling, 0, VAR_0);

  if (VAR_10 == 0)
   VAR_10 = FUNC_5(VAR_12, VAR_11);

  VAR_7 = 0;
  FUNC_4(VAR_12);

  if (VAR_10 != 0) {




   FUNC_0(VAR_6.dta_enabling == ((void*)0));
   FUNC_11(VAR_11);
   VAR_6.dta_state = ((void*)0);
   break;
  }

  FUNC_0(VAR_6.dta_enabling != ((void*)0));
 }

 if (VAR_6.dta_enabling != ((void*)0)) {
  int VAR_14;
  VAR_14 = FUNC_9(VAR_6.dta_enabling);
  FUNC_0(VAR_14 == 0);

  FUNC_8(VAR_6.dta_enabling);
 }
}
