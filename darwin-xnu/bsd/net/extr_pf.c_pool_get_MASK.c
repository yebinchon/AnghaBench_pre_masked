
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ pool_count; scalar_t__ pool_limit; char* pool_name; int pool_zone; int pool_fails; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 void* FUNC_3 (int ,int) ;

void *
FUNC_4(struct pool *VAR_5, int VAR_6)
{
 void *VAR_7;

 FUNC_1(VAR_4, VAR_0);

 if (VAR_5->pool_count > VAR_5->pool_limit) {
  FUNC_0(VAR_1,
      ("pf: pool %s hard limit reached (%d)\n",
      VAR_5->pool_name != ((void*)0) ? VAR_5->pool_name : "unknown",
      VAR_5->pool_limit));
  VAR_5->pool_fails++;
  return (((void*)0));
 }

 VAR_7 = FUNC_3(VAR_5->pool_zone, (VAR_6 & (VAR_2 | VAR_3)));
 if (VAR_7 != ((void*)0)) {
  VAR_5->pool_count++;
  FUNC_2(VAR_5->pool_count != 0);
 }
 return (VAR_7);
}
