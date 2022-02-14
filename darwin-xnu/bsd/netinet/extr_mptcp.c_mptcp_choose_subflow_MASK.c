
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_srtt; scalar_t__ t_rxtshift; } ;
struct mptsub {int mpts_socket; } ;


 struct tcpcb* FUNC_0 (int ) ;

__attribute__((used)) static struct mptsub *
FUNC_1(struct mptsub *VAR_0, struct mptsub *VAR_1, int *VAR_2)
{
 struct tcpcb *VAR_3 = FUNC_0(VAR_0->mpts_socket);






 if (VAR_3->t_srtt && *VAR_2 > VAR_3->t_srtt &&
     (VAR_1 == ((void*)0) || VAR_3->t_rxtshift == 0 ||
      FUNC_0(VAR_1->mpts_socket)->t_rxtshift)) {
  *VAR_2 = VAR_3->t_srtt;
  return (VAR_0);
 }




 if (VAR_1 &&
     FUNC_0(VAR_1->mpts_socket)->t_rxtshift &&
     VAR_3->t_rxtshift == 0) {
  *VAR_2 = VAR_3->t_srtt;
  return (VAR_0);
 }

 return (VAR_1 != ((void*)0) ? VAR_1 : VAR_0);
}
