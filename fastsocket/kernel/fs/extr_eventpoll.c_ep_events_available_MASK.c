
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventpoll {scalar_t__ ovflist; int rdllist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct eventpoll *VAR_1)
{
 return !FUNC_0(&VAR_1->rdllist) || VAR_1->ovflist != VAR_0;
}
