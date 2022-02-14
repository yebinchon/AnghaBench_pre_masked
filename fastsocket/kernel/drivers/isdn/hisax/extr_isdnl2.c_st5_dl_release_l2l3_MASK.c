
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l2l3 ) (struct PStack*,int,int *) ;int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct PStack *VAR_4)
{
  int VAR_5;

  if(FUNC_1(VAR_2, &VAR_4->l2.flag))
   VAR_5 = VAR_1 | VAR_0;
  else
   VAR_5 = VAR_1 | VAR_3;

  VAR_4->l2.l2l3(VAR_4, VAR_5, ((void*)0));
}
