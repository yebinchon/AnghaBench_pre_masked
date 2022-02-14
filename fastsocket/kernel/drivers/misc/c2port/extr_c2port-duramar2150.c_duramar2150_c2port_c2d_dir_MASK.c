
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2port_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct c2port_device *VAR_3, int VAR_4)
{
 u8 VAR_5;

 FUNC_1(&VAR_2);

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_4)
  FUNC_3(VAR_5 & ~VAR_0, VAR_1);
 else
  FUNC_3(VAR_5 | VAR_0, VAR_1);

 FUNC_2(&VAR_2);
}
