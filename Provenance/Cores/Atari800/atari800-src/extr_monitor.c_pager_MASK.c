
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*) ;

__attribute__((used)) static int FUNC_1(void)
{
 char VAR_0[100];
 FUNC_0(VAR_0, sizeof(VAR_0), "Press Return to continue ('q' to quit): ");
 return VAR_0[0] == 'q' || VAR_0[0] == 'Q';
}
