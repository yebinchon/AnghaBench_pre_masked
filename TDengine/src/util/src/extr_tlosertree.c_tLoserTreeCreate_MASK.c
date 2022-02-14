
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef int __merge_compare_fn_t ;
struct TYPE_6__ {int numOfEntries; int totalEntries; int comparaFn; void* param; int * pNode; } ;
typedef int SLoserTreeNode ;
typedef TYPE_1__ SLoserTreeInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

uint8_t FUNC_6(SLoserTreeInfo** VAR_2, int32_t VAR_3, void* VAR_4, __merge_compare_fn_t VAR_5) {
  int32_t VAR_6 = VAR_3 << 1;

  *VAR_2 = (SLoserTreeInfo*)FUNC_0(1, sizeof(SLoserTreeInfo) + sizeof(SLoserTreeNode) * VAR_6);
  if ((*VAR_2) == ((void*)0)) {
    FUNC_1("allocate memory for losertree failed. out of memory");
    return VAR_0;
  }

  (*VAR_2)->pNode = (SLoserTreeNode*)(((char*)(*VAR_2)) + sizeof(SLoserTreeInfo));

  (*VAR_2)->numOfEntries = VAR_3;
  (*VAR_2)->totalEntries = VAR_6;
  (*VAR_2)->param = VAR_4;
  (*VAR_2)->comparaFn = VAR_5;


  FUNC_5(*VAR_2);






  for (int32_t VAR_7 = VAR_6 - 1; VAR_7 >= VAR_3; VAR_7--) {
    FUNC_3(*VAR_2, VAR_7);
  }







  return VAR_1;
}
