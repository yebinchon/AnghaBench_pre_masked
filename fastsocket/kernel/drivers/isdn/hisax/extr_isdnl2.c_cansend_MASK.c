
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vs; int va; unsigned int window; int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct PStack *VAR_2)
{
 unsigned int VAR_3;

 if(FUNC_0(VAR_0, &VAR_2->l2.flag))
  VAR_3 = (VAR_2->l2.vs - VAR_2->l2.va) % 128;
 else
  VAR_3 = (VAR_2->l2.vs - VAR_2->l2.va) % 8;
 return ((VAR_3 < VAR_2->l2.window) && !FUNC_0(VAR_1, &VAR_2->l2.flag));
}
