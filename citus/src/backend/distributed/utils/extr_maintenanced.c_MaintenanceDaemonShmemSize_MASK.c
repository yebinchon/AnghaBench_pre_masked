
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Size ;
typedef int MaintenanceDaemonDBData ;
typedef int MaintenanceDaemonControlData ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_2(void)
{
 Size VAR_1 = 0;
 Size VAR_2 = 0;

 VAR_1 = FUNC_0(VAR_1, sizeof(MaintenanceDaemonControlData));






 VAR_2 = FUNC_1(VAR_0, sizeof(MaintenanceDaemonDBData));
 VAR_1 = FUNC_0(VAR_1, VAR_2);

 return VAR_1;
}
