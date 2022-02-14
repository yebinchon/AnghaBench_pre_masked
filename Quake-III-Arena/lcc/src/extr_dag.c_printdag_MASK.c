
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tree ;
struct TYPE_5__ {struct TYPE_5__* link; } ;
typedef TYPE_1__* Node ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__* FUNC_3 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

void FUNC_4(Node VAR_3, int VAR_4) {
 FILE *VAR_5 = VAR_4 == 1 ? VAR_2 : VAR_1;

 FUNC_3(0);
 if (VAR_3 == 0) {
  if ((VAR_3 = VAR_0) != ((void*)0))
   do {
    VAR_3 = VAR_3->link;
    FUNC_2(VAR_3, VAR_4, 0);
   } while (VAR_3 != VAR_0);
 } else if (*FUNC_3(FUNC_1((Tree)VAR_3)))
  FUNC_0(VAR_5, "node'%d printed above\n", FUNC_1((Tree)VAR_3));
 else
  FUNC_2(VAR_3, VAR_4, 0);
}
