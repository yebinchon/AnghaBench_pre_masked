
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef int * ifnet_t ;
typedef int iff_flags_t ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_3__ {int iff_flags; int * iff_peer; } ;


 struct mbuf* FUNC_0 (struct mbuf*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct mbuf*,int *,int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_7(ifnet_t VAR_0, struct mbuf * VAR_1)
{
 struct mbuf * VAR_2;
 if_fake_ref VAR_3;
 iff_flags_t VAR_4;
 ifnet_t VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0)) {
  return (0);
 }
 VAR_2 = FUNC_0(VAR_1);
 FUNC_6(VAR_1);
 VAR_1 = ((void*)0);
 if (VAR_2 == ((void*)0)) {

  FUNC_5(VAR_0, 0, 0, 1);
  return (0);
 }
 FUNC_1();
 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 != ((void*)0)) {
  VAR_5 = VAR_3->iff_peer;
  VAR_4 = VAR_3->iff_flags;
 }
 FUNC_3();
 if (VAR_5 == ((void*)0)) {
  FUNC_6(VAR_2);
  FUNC_5(VAR_0, 0, 0, 1);
  return (0);
 }
 FUNC_2(VAR_0, VAR_2, VAR_5, VAR_4);
 return (0);
}
