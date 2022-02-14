
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct atmel_private {int CurrentBSSID; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct atmel_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    struct sockaddr *VAR_3,
    char *VAR_4)
{
 struct atmel_private *VAR_5 = FUNC_1(VAR_1);
 FUNC_0(VAR_3->sa_data, VAR_5->CurrentBSSID, 6);
 VAR_3->sa_family = VAR_0;

 return 0;
}
