
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int m; int e; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int*) ;
 int * FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3, struct iw_request_info *VAR_4,
   struct iw_freq *VAR_5, char *VAR_6)
{
 islpci_private *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;
 u32 VAR_9;

 if (VAR_5->m < 1000)

  VAR_9 = VAR_5->m;
 else
  VAR_9 = (VAR_5->e == 1) ? FUNC_0(VAR_5->m / 100000) : 0;

 VAR_8 = VAR_9 ? FUNC_1(VAR_7, VAR_0, 0, &VAR_9) : -VAR_2;


 return (VAR_8 ? VAR_8 : -VAR_1);
}
