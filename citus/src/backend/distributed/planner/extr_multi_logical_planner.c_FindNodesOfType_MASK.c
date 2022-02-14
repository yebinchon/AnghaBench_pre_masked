
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rightChildNode; int * leftChildNode; } ;
struct TYPE_3__ {int * childNode; } ;
typedef TYPE_1__ MultiUnaryNode ;
typedef int MultiNode ;
typedef TYPE_2__ MultiBinaryNode ;
typedef int List ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;

List *
FUNC_5(MultiNode *VAR_2, int VAR_3)
{
 List *VAR_4 = VAR_0;
 int VAR_5 = VAR_1;


 if (VAR_2 == ((void*)0))
 {
  return VAR_0;
 }


 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == VAR_3)
 {
  VAR_4 = FUNC_3(VAR_4, VAR_2);
 }

 if (FUNC_2(VAR_2))
 {
  MultiNode *VAR_6 = ((MultiUnaryNode *) VAR_2)->childNode;
  List *VAR_7 = FUNC_5(VAR_6, VAR_3);

  VAR_4 = FUNC_4(VAR_4, VAR_7);
 }
 else if (FUNC_0(VAR_2))
 {
  MultiNode *VAR_8 = ((MultiBinaryNode *) VAR_2)->leftChildNode;
  MultiNode *VAR_9 = ((MultiBinaryNode *) VAR_2)->rightChildNode;

  List *VAR_10 = FUNC_5(VAR_8, VAR_3);
  List *VAR_11 = FUNC_5(VAR_9, VAR_3);

  VAR_4 = FUNC_4(VAR_4, VAR_10);
  VAR_4 = FUNC_4(VAR_4, VAR_11);
 }

 return VAR_4;
}
