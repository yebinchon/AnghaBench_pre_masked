
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numOfUpdates; int updatePos; int maxRows; TYPE_1__* update; int (* appTool ) (int ,char*,int *,int ,int *) ;} ;
struct TYPE_4__ {char type; char* row; } ;
typedef TYPE_2__ SSdbTable ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int ,int *) ;

void FUNC_1(SSdbTable *VAR_2, char VAR_3, char *VAR_4) {
  VAR_2->numOfUpdates++;
  VAR_2->updatePos = VAR_2->numOfUpdates % VAR_2->maxRows;

  if (VAR_2->update[VAR_2->updatePos].type == VAR_0)
    (*(VAR_2->appTool))(VAR_1, VAR_2->update[VAR_2->updatePos].row, ((void*)0), 0, ((void*)0));

  VAR_2->update[VAR_2->updatePos].type = VAR_3;
  VAR_2->update[VAR_2->updatePos].row = VAR_4;
}
