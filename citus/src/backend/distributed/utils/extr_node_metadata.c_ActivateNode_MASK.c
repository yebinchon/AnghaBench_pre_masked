
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nodeId; } ;
typedef TYPE_1__ WorkerNode ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1, int VAR_2)
{
 WorkerNode *VAR_3 = ((void*)0);
 bool VAR_4 = 1;


 FUNC_1(FUNC_0(), VAR_0);

 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_4);

 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 return VAR_3->nodeId;
}
