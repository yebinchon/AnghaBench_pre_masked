
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Layer2 {unsigned int va; int vs; int flag; } ;
struct PStack {struct Layer2 l2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static unsigned int
FUNC_1(struct PStack *VAR_1, unsigned int VAR_2)
{
        struct Layer2 *VAR_3 = &VAR_1->l2;

 if(FUNC_0(VAR_0, &VAR_3->flag))
  return ((VAR_2 - VAR_3->va) % 128) <= ((VAR_3->vs - VAR_3->va) % 128);
 else
  return ((VAR_2 - VAR_3->va) % 8) <= ((VAR_3->vs - VAR_3->va) % 8);
}
