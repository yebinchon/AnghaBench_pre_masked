
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int taskId; int jobId; } ;
typedef TYPE_1__ Task ;
typedef int * StringInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,char*) ;
 int * FUNC_1 () ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static StringInfo
FUNC_3(Task *VAR_1, char *VAR_2)
{
 StringInfo VAR_3 = ((void*)0);


 char *VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1();
 FUNC_0(VAR_3, VAR_0,
      VAR_1->jobId, VAR_1->taskId, VAR_4);

 return VAR_3;
}
