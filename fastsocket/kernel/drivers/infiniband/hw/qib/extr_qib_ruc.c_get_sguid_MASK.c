
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int guid; } ;
struct qib_ibport {int * guids; } ;
typedef int __be64 ;


 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;

__attribute__((used)) static __be64 FUNC_1(struct qib_ibport *VAR_0, unsigned VAR_1)
{
 if (!VAR_1) {
  struct qib_pportdata *VAR_2 = FUNC_0(VAR_0);

  return VAR_2->guid;
 } else
  return VAR_0->guids[VAR_1 - 1];
}
