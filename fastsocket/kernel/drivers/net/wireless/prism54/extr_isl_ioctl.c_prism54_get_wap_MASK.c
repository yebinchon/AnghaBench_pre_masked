
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int ptr; } ;
struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, struct iw_request_info *VAR_3,
  struct sockaddr *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_3(VAR_2);
 union oid_res_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_1, 0, ((void*)0), &VAR_7);
 FUNC_1(VAR_4->sa_data, VAR_7.ptr, 6);
 VAR_4->sa_family = VAR_0;
 FUNC_0(VAR_7.ptr);

 return VAR_8;
}
