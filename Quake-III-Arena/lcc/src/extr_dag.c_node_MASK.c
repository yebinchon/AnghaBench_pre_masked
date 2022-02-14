
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op; scalar_t__* syms; scalar_t__* kids; } ;
struct dag {TYPE_1__ node; struct dag* hlink; } ;
typedef scalar_t__ Symbol ;
typedef scalar_t__ Node ;


 int FUNC_0 (struct dag**) ;
 struct dag** VAR_0 ;
 struct dag* FUNC_1 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 unsigned long FUNC_2 (int) ;

__attribute__((used)) static Node FUNC_3(int VAR_2, Node VAR_3, Node VAR_4, Symbol VAR_5) {
 int VAR_6;
 struct dag *VAR_7;

 VAR_6 = (FUNC_2(VAR_2)^((unsigned long)VAR_5>>2))&(FUNC_0(VAR_0)-1);
 for (VAR_7 = VAR_0[VAR_6]; VAR_7; VAR_7 = VAR_7->hlink)
  if (VAR_7->node.op == VAR_2 && VAR_7->node.syms[0] == VAR_5
  && VAR_7->node.kids[0] == VAR_3 && VAR_7->node.kids[1] == VAR_4)
   return &VAR_7->node;
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7->hlink = VAR_0[VAR_6];
 VAR_0[VAR_6] = VAR_7;
 ++VAR_1;
 return &VAR_7->node;
}
