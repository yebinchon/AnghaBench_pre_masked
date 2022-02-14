
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;
struct TYPE_3__ {int (* get_rid ) (struct net_device*,int ,char**,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,char**,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_point *VAR_5, char *VAR_6)
{
 struct hostap_interface *VAR_7;
 local_info_t *VAR_8;
 int VAR_9;
 char VAR_10[VAR_2 + 3];
 u16 VAR_11;

 VAR_7 = FUNC_2(VAR_3);
 VAR_8 = VAR_7->local;

 VAR_9 = VAR_8->func->get_rid(VAR_3, VAR_1,
       &VAR_10, VAR_2 + 2, 0);
 VAR_11 = FUNC_0(*(__le16 *) VAR_10);
 if (VAR_9 > VAR_2 + 2 || VAR_9 < 0 || VAR_11 > VAR_2)
  return -VAR_0;

 VAR_10[VAR_11 + 2] = '\0';
 VAR_5->length = VAR_11 + 1;
 FUNC_1(VAR_6, VAR_10 + 2, VAR_11 + 1);

 return 0;
}
