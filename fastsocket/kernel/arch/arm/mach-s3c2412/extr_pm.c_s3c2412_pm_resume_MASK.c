
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_1;
 FUNC_2(VAR_5, VAR_0);

 FUNC_3(VAR_3, FUNC_0(VAR_3));
 return 0;
}
