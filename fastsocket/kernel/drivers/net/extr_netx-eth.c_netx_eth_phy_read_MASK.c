
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = VAR_2 | VAR_1 | FUNC_0(VAR_5) |
       FUNC_1(VAR_6) | VAR_0;

 FUNC_3(VAR_7, VAR_3);
 while (FUNC_2(VAR_3) & VAR_2);

 return FUNC_2(VAR_3) >> 16;

}
