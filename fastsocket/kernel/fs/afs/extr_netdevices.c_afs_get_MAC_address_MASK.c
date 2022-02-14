
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct net_device* FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(u8 *VAR_4, size_t VAR_5)
{
 struct net_device *VAR_6;
 int VAR_7 = -VAR_1;

 FUNC_0(VAR_5 != VAR_2);

 FUNC_3();
 VAR_6 = FUNC_1(&VAR_3, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_4, VAR_6->dev_addr, VAR_5);
  VAR_7 = 0;
 }
 FUNC_4();
 return VAR_7;
}
