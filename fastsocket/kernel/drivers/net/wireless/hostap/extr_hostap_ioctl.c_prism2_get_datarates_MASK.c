
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef int buf ;
typedef int __le16 ;
struct TYPE_3__ {int (* get_rid ) (struct net_device*,int ,int *,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, u8 *VAR_2)
{
 struct hostap_interface *VAR_3;
 local_info_t *VAR_4;
 u8 VAR_5[12];
 int VAR_6;
 u16 VAR_7;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_3->local;

 VAR_6 = VAR_4->func->get_rid(VAR_1, VAR_0, VAR_5,
       sizeof(VAR_5), 0);
 if (VAR_6 < 2)
  return 0;

 VAR_7 = FUNC_0(*(__le16 *) VAR_5);

 if (VAR_6 - 2 < VAR_7 || VAR_7 > 10)
  return 0;

 FUNC_1(VAR_2, VAR_5 + 2, VAR_7);
 return VAR_7;
}
