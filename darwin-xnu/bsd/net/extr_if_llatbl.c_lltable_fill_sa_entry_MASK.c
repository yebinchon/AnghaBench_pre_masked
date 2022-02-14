
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct lltable {int (* llt_fill_sa_entry ) (struct llentry const*,struct sockaddr*) ;} ;
struct llentry {struct lltable* lle_tbl; } ;


 int FUNC_0 (struct llentry const*,struct sockaddr*) ;

void
FUNC_1(const struct llentry *VAR_0, struct sockaddr *VAR_1)
{
 struct lltable *VAR_2;

 VAR_2 = VAR_0->lle_tbl;
 VAR_2->llt_fill_sa_entry(VAR_0, VAR_1);
}
