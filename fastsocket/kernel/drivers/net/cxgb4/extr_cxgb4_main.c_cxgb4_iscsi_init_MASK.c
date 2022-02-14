
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 unsigned int FUNC_0 (unsigned int const) ;
 unsigned int FUNC_1 (unsigned int const) ;
 unsigned int FUNC_2 (unsigned int const) ;
 unsigned int FUNC_3 (unsigned int const) ;
 int VAR_0 ;
 int VAR_1 ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,unsigned int) ;

void FUNC_6(struct net_device *VAR_2, unsigned int VAR_3,
        const unsigned int *VAR_4)
{
 struct adapter *VAR_5 = FUNC_4(VAR_2);

 FUNC_5(VAR_5, VAR_1, VAR_3);
 FUNC_5(VAR_5, VAR_0, FUNC_0(VAR_4[0]) |
       FUNC_1(VAR_4[1]) | FUNC_2(VAR_4[2]) |
       FUNC_3(VAR_4[3]));
}
