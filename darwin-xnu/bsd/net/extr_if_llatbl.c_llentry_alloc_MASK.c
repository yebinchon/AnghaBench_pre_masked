
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct lltable {int llt_af; } ;
struct llentry {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct llentry*) ;
 int VAR_1 ;
 int FUNC_5 (struct llentry*) ;
 int FUNC_6 (struct llentry*) ;
 struct llentry* FUNC_7 (struct lltable*,int ,struct sockaddr*) ;
 struct llentry* FUNC_8 (struct lltable*,int ,struct sockaddr*) ;
 int FUNC_9 (struct lltable*,struct llentry*) ;
 int FUNC_10 (struct lltable*,struct llentry*) ;

struct llentry *
FUNC_11(struct ifnet *VAR_2, struct lltable *VAR_3,
    struct sockaddr_storage *VAR_4)
{
 struct llentry *VAR_5, *VAR_6;

 FUNC_0(VAR_2, VAR_3->llt_af);
 VAR_5 = FUNC_7(VAR_3, VAR_1, (struct sockaddr *)VAR_4);
 FUNC_1(VAR_2, VAR_3->llt_af);

 if (VAR_5 != ((void*)0)) {
  FUNC_4(VAR_5);
  FUNC_6(VAR_5);
  return (VAR_5);
 }

 if ((VAR_2->if_flags & VAR_0) == 0) {
  VAR_5 = FUNC_8(VAR_3, 0, (struct sockaddr *)VAR_4);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
  FUNC_2(VAR_2, VAR_3->llt_af);
  FUNC_5(VAR_5);

  VAR_6 = FUNC_7(VAR_3, VAR_1, (struct sockaddr *)VAR_4);
  if (VAR_6 == ((void*)0))
   FUNC_10(VAR_3, VAR_5);
  FUNC_3(VAR_2, VAR_3->llt_af);
  if (VAR_6 != ((void*)0)) {
   FUNC_9(VAR_3, VAR_5);
   VAR_5 = VAR_6;
  }
  FUNC_4(VAR_5);
  FUNC_6(VAR_5);
 }

 return (VAR_5);
}
