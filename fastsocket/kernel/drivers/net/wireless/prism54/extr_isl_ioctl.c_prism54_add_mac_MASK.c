
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct mac_entry {int _list; int addr; } ;
struct iw_request_info {int dummy; } ;
struct islpci_acl {int lock; int size; int mac_list; } ;
struct TYPE_3__ {struct islpci_acl acl; } ;
typedef TYPE_1__ islpci_private ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mac_entry*) ;
 struct mac_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_6, struct iw_request_info *VAR_7,
  struct sockaddr *VAR_8, char *VAR_9)
{
 islpci_private *VAR_10 = FUNC_6(VAR_6);
 struct islpci_acl *VAR_11 = &VAR_10->acl;
 struct mac_entry *VAR_12;
 struct sockaddr *VAR_13 = (struct sockaddr *) VAR_9;

 if (VAR_13->sa_family != VAR_0)
  return -VAR_2;

 VAR_12 = FUNC_1(sizeof (struct mac_entry), VAR_5);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 FUNC_3(VAR_12->addr, VAR_13->sa_data, VAR_4);

 if (FUNC_4(&VAR_11->lock)) {
  FUNC_0(VAR_12);
  return -VAR_3;
 }
 FUNC_2(&VAR_12->_list, &VAR_11->mac_list);
 VAR_11->size++;
 FUNC_5(&VAR_11->lock);

 return 0;
}
