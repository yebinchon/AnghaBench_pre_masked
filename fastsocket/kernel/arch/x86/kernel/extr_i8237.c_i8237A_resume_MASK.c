
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct sys_device *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0();

 FUNC_1(0, VAR_0);
 FUNC_1(0, VAR_1);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_4(VAR_4, 0x000000);

  FUNC_5(VAR_4, 1);
 }


 FUNC_2(4);

 FUNC_3(VAR_3);

 return 0;
}
