
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lltable {int llt_af; int llt_ifp; } ;
struct llentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct llentry*) ;
 int VAR_2 ;
 int FUNC_3 (struct llentry*) ;
 struct llentry* FUNC_4 (struct lltable*,int ) ;

__attribute__((used)) static struct llentry *
FUNC_5(struct lltable *VAR_3, u_int VAR_4, const struct sockaddr *VAR_5)
{
 const struct sockaddr_in *VAR_6 = (const struct sockaddr_in *)(const void *)VAR_5;
 struct llentry *VAR_7;

 FUNC_0(VAR_3->llt_ifp, VAR_3->llt_af);

 FUNC_1(VAR_5->sa_family == VAR_0,
   ("sin_family %d", VAR_5->sa_family));
 VAR_7 = FUNC_4(VAR_3, VAR_6->sin_addr);

 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_1((VAR_4 & (VAR_2|VAR_1)) !=
     (VAR_2|VAR_1),("wrong lle request flags: 0x%X",
         VAR_4));

 if (VAR_4 & VAR_2)
  return (VAR_7);

 if (VAR_4 & VAR_1)
  FUNC_3(VAR_7);
 else
  FUNC_2(VAR_7);

 return (VAR_7);
}
