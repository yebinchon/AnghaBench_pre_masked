
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {unsigned int va; int vs; int flag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static unsigned int
FUNC_1(struct layer2 *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_0, &VAR_1->flag))
  return ((VAR_2 - VAR_1->va) % 128) <= ((VAR_1->vs - VAR_1->va) % 128);
 else
  return ((VAR_2 - VAR_1->va) % 8) <= ((VAR_1->vs - VAR_1->va) % 8);
}
