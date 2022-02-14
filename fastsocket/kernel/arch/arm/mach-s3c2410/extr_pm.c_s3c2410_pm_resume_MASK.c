
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sys_device *VAR_2)
{
 unsigned long VAR_3;



 VAR_3 = FUNC_1(VAR_0);
 VAR_3 &= VAR_1;
 FUNC_2(VAR_3, VAR_0);

 if ( FUNC_3() )
  FUNC_4(FUNC_0(2), 0);

 return 0;
}
