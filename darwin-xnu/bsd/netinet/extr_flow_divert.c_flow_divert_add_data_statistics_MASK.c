
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {struct ifnet* inp_last_outifp; } ;
struct ifnet {int dummy; } ;
struct flow_divert_pcb {int so; } ;
typedef int Boolean ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct inpcb*,int,int,int,int ,int) ;
 int FUNC_4 (struct inpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inpcb* FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct flow_divert_pcb *VAR_5, int VAR_6, Boolean VAR_7)
{
 struct inpcb *VAR_8 = ((void*)0);
 struct ifnet *VAR_9 = ((void*)0);
 Boolean VAR_10 = VAR_0;
 Boolean VAR_11 = VAR_0;
 Boolean VAR_12 = VAR_0;

 VAR_8 = FUNC_5(VAR_5->so);
 if (VAR_8 == ((void*)0)) {
  return;
 }

 VAR_9 = VAR_8->inp_last_outifp;
 if (VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_0(VAR_9);
  VAR_11 = (!VAR_10 && FUNC_1(VAR_9));
  VAR_12 = (!VAR_11 && FUNC_2(VAR_9));
 }

 if (VAR_7) {
  FUNC_3(VAR_8, VAR_10, VAR_11, VAR_12, VAR_4, 1);
  FUNC_3(VAR_8, VAR_10, VAR_11, VAR_12, VAR_3, VAR_6);
 } else {
  FUNC_3(VAR_8, VAR_10, VAR_11, VAR_12, VAR_2, 1);
  FUNC_3(VAR_8, VAR_10, VAR_11, VAR_12, VAR_1, VAR_6);
 }
 FUNC_4(VAR_8);
}
