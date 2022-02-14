
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_9)
{
 unsigned int VAR_10;

 FUNC_1(VAR_2, &VAR_8);
 FUNC_3(VAR_2, VAR_5);
 FUNC_2(VAR_2, VAR_0);



 FUNC_1(VAR_1, &VAR_8);
 FUNC_3(VAR_1, VAR_5);
 FUNC_0(VAR_1, VAR_7);

 for (VAR_10 = VAR_3; VAR_10 <= VAR_4; VAR_10++) {
  FUNC_1(VAR_10, &VAR_6);
  FUNC_3(VAR_10, VAR_5);
  FUNC_2(VAR_10, VAR_0);
 }

 return 0;
}
