
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
typedef int helper_func ;
struct TYPE_2__ {int helper_func; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int*,char**,int,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
 pid_t VAR_7 = -1;
 char VAR_8[50];
 char *VAR_9[4];

 VAR_1; FUNC_0(VAR_5, VAR_0, "Spawned %d children. Timing out...", VAR_0);

 FUNC_4(VAR_8, VAR_3.helper_func, sizeof(VAR_8));
 VAR_9[0] = VAR_6;
 VAR_9[1] = "-n";
 VAR_9[2] = VAR_8;
 VAR_9[3] = ((void*)0);


 int VAR_10 = FUNC_3(&VAR_7, VAR_9, 0, ((void*)0), ((void*)0));
 if (VAR_10 != 0) {
  FUNC_2("dt_launch tool returned %d with error code %d", VAR_10, VAR_4);
 }
 VAR_1; FUNC_1(VAR_7, "dt_launch_tool");

 VAR_2[VAR_5++] = VAR_7;
}
