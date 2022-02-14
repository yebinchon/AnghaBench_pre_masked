
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ regs; } ;
struct net_device {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sky2_hw*,unsigned int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 struct sky2_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, void *VAR_7)
{
 struct sky2_port *VAR_8 = FUNC_4(VAR_6);
 struct sky2_hw *VAR_9 = VAR_8->hw;
 unsigned VAR_10 = VAR_8->port;
 const struct sockaddr *VAR_11 = VAR_7;

 if (!FUNC_1(VAR_11->sa_data))
  return -VAR_2;

 FUNC_2(VAR_6->dev_addr, VAR_11->sa_data, VAR_3);
 FUNC_3(VAR_9->regs + VAR_0 + VAR_10 * 8,
      VAR_6->dev_addr, VAR_3);
 FUNC_3(VAR_9->regs + VAR_1 + VAR_10 * 8,
      VAR_6->dev_addr, VAR_3);


 FUNC_0(VAR_9, VAR_10, VAR_5, VAR_6->dev_addr);


 FUNC_0(VAR_9, VAR_10, VAR_4, VAR_6->dev_addr);

 return 0;
}
