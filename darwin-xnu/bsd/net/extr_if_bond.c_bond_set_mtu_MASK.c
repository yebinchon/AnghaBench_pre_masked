
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef TYPE_1__* ifbond_ref ;
struct TYPE_9__ {int ifb_altmtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*,int) ;
 int * FUNC_11 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet * VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    ifbond_ref VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;

    FUNC_1();
    VAR_7 = (ifbond_ref)FUNC_11(VAR_3);
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7)) {
 VAR_6 = (VAR_7 == ((void*)0)) ? VAR_2 : VAR_0;
 goto done;
    }
    FUNC_6(VAR_7);
    FUNC_8(VAR_7, "bond_set_mtu");


    if (FUNC_11(VAR_3) == ((void*)0) || FUNC_4(VAR_7)) {
 VAR_6 = VAR_0;
 goto signal_done;
    }
    FUNC_0(VAR_7, &VAR_8, &VAR_9);
    if (VAR_4 > VAR_9) {
 VAR_6 = VAR_1;
 goto signal_done;
    }
    if (VAR_4 < VAR_8 && (VAR_5 == 0 || VAR_4 != 0)) {

 VAR_6 = VAR_1;
 goto signal_done;
    }
    if (VAR_5) {
 VAR_10 = (VAR_4 > (int)FUNC_9(VAR_3)) ? VAR_4 : (int)FUNC_9(VAR_3);
    }
    else {
 VAR_10 = (VAR_4 > VAR_7->ifb_altmtu) ? VAR_4 : VAR_7->ifb_altmtu;
    }
    VAR_11 = ((int)FUNC_9(VAR_3) > VAR_7->ifb_altmtu)
 ? (int)FUNC_9(VAR_3) : VAR_7->ifb_altmtu;
    if (VAR_10 != VAR_11) {

 FUNC_3();
 VAR_6 = FUNC_2(VAR_7, VAR_10);
 if (VAR_6 != 0) {

     (void)FUNC_2(VAR_7, VAR_11);
 }
 FUNC_1();
    }
    if (VAR_6 == 0) {
 if (VAR_5) {
     VAR_7->ifb_altmtu = VAR_4;
 }
 else {
  FUNC_10(VAR_3, VAR_4);
 }
    }

 signal_done:
    FUNC_7(VAR_7, "bond_set_mtu");
    FUNC_5(VAR_7);

 done:
    FUNC_3();
    return (VAR_6);
}
