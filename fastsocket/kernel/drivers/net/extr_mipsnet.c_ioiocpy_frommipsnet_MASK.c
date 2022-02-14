
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, unsigned char *VAR_3,
   int VAR_4)
{
 for (; VAR_4 > 0; VAR_4--, VAR_3++)
  *VAR_3 = FUNC_0(FUNC_2(VAR_2, VAR_0));

 return FUNC_1(FUNC_2(VAR_2, VAR_1));
}
