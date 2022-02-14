
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, struct tty_struct *VAR_2)
{
 int VAR_3;
 VAR_3 = VAR_1 - '0';
 VAR_0 = 7;
 FUNC_0("Loglevel set to %d\n", VAR_3);
 VAR_0 = VAR_3;
}
