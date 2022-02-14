
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int lock; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tg3*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct tg3* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct tg3*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6, void *VAR_7)
{
 struct tg3 *VAR_8 = FUNC_3(VAR_6);
 struct sockaddr *VAR_9 = VAR_7;
 int VAR_10 = 0;
 bool VAR_11 = 0;

 if (!FUNC_1(VAR_9->sa_data))
  return -VAR_0;

 FUNC_2(VAR_6->dev_addr, VAR_9->sa_data, VAR_6->addr_len);

 if (!FUNC_4(VAR_6))
  return 0;

 if (FUNC_7(VAR_8, VAR_1)) {
  u32 VAR_12, VAR_13, VAR_14, VAR_15;

  VAR_12 = FUNC_8(VAR_2);
  VAR_13 = FUNC_8(VAR_3);
  VAR_14 = FUNC_8(VAR_4);
  VAR_15 = FUNC_8(VAR_5);


  if ((VAR_12 != VAR_14 || VAR_13 != VAR_15) &&
      !(VAR_14 == 0 && VAR_15 == 0))
   VAR_11 = 1;
 }
 FUNC_5(&VAR_8->lock);
 FUNC_0(VAR_8, VAR_11);
 FUNC_6(&VAR_8->lock);

 return VAR_10;
}
