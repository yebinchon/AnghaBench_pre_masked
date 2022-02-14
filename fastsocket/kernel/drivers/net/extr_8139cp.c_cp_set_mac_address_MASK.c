
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {scalar_t__ dev_addr; int addr_len; } ;
struct cp_private {int lock; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 struct cp_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5, void *VAR_6)
{
 struct cp_private *VAR_7 = FUNC_5(VAR_5);
 struct sockaddr *VAR_8 = VAR_6;

 if (!FUNC_2(VAR_8->sa_data))
  return -VAR_3;

 FUNC_4(VAR_5->dev_addr, VAR_8->sa_data, VAR_5->addr_len);

 FUNC_6(&VAR_7->lock);

 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_4 + 0, FUNC_3 (*(__le32 *) (VAR_5->dev_addr + 0)));
 FUNC_0(VAR_4 + 4, FUNC_3 (*(__le32 *) (VAR_5->dev_addr + 4)));
 FUNC_1(VAR_0, VAR_1);

 FUNC_7(&VAR_7->lock);

 return 0;
}
