
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_cgareq_64 {int dummy; } ;
struct in6_cgareq_32 {int dummy; } ;
struct in6_cgareq {int dummy; } ;


 int FUNC_0 (void*,struct in6_cgareq*,int) ;
 int FUNC_1 (struct in6_cgareq_32*,struct in6_cgareq_64*) ;
 int FUNC_2 (struct in6_cgareq_64*,struct in6_cgareq_32*) ;

__attribute__((used)) static struct in6_cgareq *
FUNC_3(void *VAR_0, int VAR_1, struct in6_cgareq *VAR_2)
{

 if (VAR_1)
  FUNC_0(VAR_0, VAR_2, sizeof (*VAR_2));
 else
  FUNC_1((struct in6_cgareq_32 *)VAR_0,
      (struct in6_cgareq_64 *)VAR_2);







 return (VAR_2);
}
