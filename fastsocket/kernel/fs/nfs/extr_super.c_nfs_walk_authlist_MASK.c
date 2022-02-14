
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_parsed_mount_data {unsigned int auth_flavor_len; scalar_t__* auth_flavors; } ;
struct nfs_mount_request {unsigned int* auth_flav_len; scalar_t__* auth_flavs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct nfs_mount_request*) ;

__attribute__((used)) static int FUNC_2(struct nfs_parsed_mount_data *VAR_2,
        struct nfs_mount_request *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6 = *(VAR_3->auth_flav_len);
 if (VAR_6 == 0)
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->auth_flavor_len; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   if (VAR_2->auth_flavors[VAR_4] == VAR_3->auth_flavs[VAR_5]) {
    FUNC_0(VAR_1, "NFS: using auth flavor %d\n",
     VAR_3->auth_flavs[VAR_5]);
    VAR_2->auth_flavors[0] = VAR_3->auth_flavs[VAR_5];
    return 0;
   }

 FUNC_0(VAR_1, "NFS: server does not support requested auth flavor\n");
 FUNC_1(VAR_3);
 return -VAR_0;
}
