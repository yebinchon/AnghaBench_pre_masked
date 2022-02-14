
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (int *,struct mbuf*) ;
 scalar_t__ FUNC_2 (int *,int *,int *,struct mbuf*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_3(struct mbuf *VAR_2)
{
 if (VAR_1 > 0 && FUNC_2(((void*)0), ((void*)0), ((void*)0), VAR_2)) {
  return (1);
 }
 if (VAR_0 > 0 && FUNC_0(VAR_2)) {
  return (1);
 }
 if (FUNC_1(((void*)0), VAR_2)) {
  return (1);
 }
 return (0);
}
