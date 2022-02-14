
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct halt_info {int mode; char* restart_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct halt_info*,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, char *VAR_2)
{
 struct halt_info VAR_3;
 VAR_3.mode = VAR_1;
 VAR_3.restart_cmd = VAR_2;
 FUNC_0(VAR_0, &VAR_3, 0);
}
