
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int swork; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct connection *VAR_3)
{
 if (FUNC_2(VAR_0, &VAR_3->flags))
  return;
 if (!FUNC_1(VAR_1, &VAR_3->flags))
  FUNC_0(VAR_2, &VAR_3->swork);
}
