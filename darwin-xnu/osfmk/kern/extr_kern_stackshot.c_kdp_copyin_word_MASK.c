
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef int boolean_t ;
struct TYPE_4__ {int map; } ;


 int FUNC_0 (int ,int ,int *,int,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

boolean_t
FUNC_2(
 task_t VAR_0, uint64_t VAR_1, uint64_t *VAR_2, boolean_t VAR_3, uint32_t *VAR_4)
{
 if (FUNC_1(VAR_0)) {
  return FUNC_0(VAR_0->map, VAR_1, VAR_2, sizeof(uint64_t), VAR_3, VAR_4);
 } else {
  uint32_t VAR_5;
  boolean_t VAR_6 = FUNC_0(VAR_0->map, VAR_1, &VAR_5, sizeof(uint32_t), VAR_3, VAR_4);
  *VAR_2 = VAR_5;
  return VAR_6;
 }
}
