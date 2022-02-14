
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int dummy; } ;
struct dlil_threading_info {scalar_t__ input_thr; int input_waiting; int input_lck; struct ifnet* ifp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 struct dlil_threading_info* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct dlil_threading_info *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->ifp;

 FUNC_1(FUNC_2() == VAR_6->input_thr);
 FUNC_1(VAR_6 != VAR_3);

 FUNC_0(-1, &VAR_2);
 FUNC_4(&VAR_6->input_lck);
 FUNC_1((VAR_6->input_waiting & VAR_0) != 0);
 VAR_6->input_waiting |= VAR_1;
 FUNC_9((caddr_t)&VAR_6->input_waiting);
 FUNC_5(&VAR_6->input_lck);


 FUNC_7(FUNC_2());

 if (VAR_4) {
  FUNC_6("%s: input thread terminated\n",
      FUNC_3(VAR_7));
 }


 FUNC_8(FUNC_2());

}
