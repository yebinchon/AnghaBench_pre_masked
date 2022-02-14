
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct PStack*,int ,int ,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct PStack *VAR_5)
{
 if (FUNC_2(VAR_1, &VAR_5->l2.flag))
  FUNC_0(VAR_5, VAR_2, VAR_4, 1);
 else
  FUNC_0(VAR_5, VAR_3, VAR_4, 1);
 FUNC_1(VAR_0, &VAR_5->l2.flag);
}
