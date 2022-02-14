
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l2l3 ) (struct PStack*,int,int *) ;int (* l2l1 ) (struct PStack*,int,int *) ;int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct PStack*,int,int *) ;
 int FUNC_1 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct PStack *VAR_4, int VAR_5)
{
  if (FUNC_2(VAR_1, &VAR_4->l2.flag))
   VAR_4->l2.l2l1(VAR_4, VAR_2 | VAR_3, ((void*)0));
  VAR_4->l2.l2l3(VAR_4, VAR_0 | VAR_5, ((void*)0));
}
