
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_opt_nonce {int dummy; } ;
struct ifaddr {int dummy; } ;
struct dadq {int dad_lladdrlen; int dad_lladdr; int dad_ns_icount; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (struct dadq*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 struct dadq* FUNC_5 (struct ifaddr*,struct nd_opt_nonce*) ;

__attribute__((used)) static void
FUNC_6(struct ifaddr *VAR_2, char *VAR_3,
    int VAR_4, struct nd_opt_nonce *VAR_5)
{
 struct dadq *VAR_6;
 FUNC_3(VAR_2 != ((void*)0));


 if (VAR_1 == 0)
  VAR_5 = ((void*)0);

 VAR_6 = FUNC_5(VAR_2, VAR_5);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_0(VAR_6);
 ++VAR_6->dad_ns_icount;
 if (VAR_3 && VAR_4 >= VAR_0) {
  FUNC_4(VAR_6->dad_lladdr, VAR_3, VAR_0);
  VAR_6->dad_lladdrlen = VAR_4;
 }
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
}
