
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int WorkerNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static WorkerNode *
FUNC_7(const char *VAR_2, int32 VAR_3)
{
 WorkerNode *VAR_4 = ((void*)0);

 FUNC_0(VAR_0);

 FUNC_2();


 FUNC_4(FUNC_1(), VAR_1);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
 {
  FUNC_5(VAR_0, (FUNC_6("node at \"%s:%u\" does not exist", VAR_2, VAR_3)));
 }

 return VAR_4;
}
