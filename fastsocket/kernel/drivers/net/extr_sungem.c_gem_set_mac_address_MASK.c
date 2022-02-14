
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {unsigned char* dev_addr; int addr_len; } ;
struct gem {int pm_mutex; scalar_t__ regs; scalar_t__ running; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct gem* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = (struct sockaddr *) VAR_5;
 struct gem *VAR_7 = FUNC_4(VAR_4);
 unsigned char *VAR_8 = &VAR_4->dev_addr[0];

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 if (!FUNC_6(VAR_4) || !FUNC_5(VAR_4)) {



  FUNC_1(VAR_4->dev_addr, VAR_6->sa_data, VAR_4->addr_len);
  return 0;
 }

 FUNC_2(&VAR_7->pm_mutex);
 FUNC_1(VAR_4->dev_addr, VAR_6->sa_data, VAR_4->addr_len);
 if (VAR_7->running) {
  FUNC_7((VAR_8[4] << 8) | VAR_8[5], VAR_7->regs + VAR_1);
  FUNC_7((VAR_8[2] << 8) | VAR_8[3], VAR_7->regs + VAR_2);
  FUNC_7((VAR_8[0] << 8) | VAR_8[1], VAR_7->regs + VAR_3);
 }
 FUNC_3(&VAR_7->pm_mutex);

 return 0;
}
