
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Size ;
typedef int BackendManagementShmemData ;
typedef int BackendData ;


 int FUNC_0 () ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static size_t
FUNC_3(void)
{
 Size VAR_0 = 0;
 int VAR_1 = FUNC_0();

 VAR_0 = FUNC_1(VAR_0, sizeof(BackendManagementShmemData));
 VAR_0 = FUNC_1(VAR_0, FUNC_2(sizeof(BackendData), VAR_1));

 return VAR_0;
}
