
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct nfs_parsed_mount_data {int auth_flavor_len; int flags; int * auth_flavors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ,int *) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_2(char *VAR_15,
          struct nfs_parsed_mount_data *VAR_16)
{
 substring_t VAR_17[VAR_0];

 FUNC_0(VAR_1, "NFS: parsing sec=%s option\n", VAR_15);

 switch (FUNC_1(VAR_15, VAR_14, VAR_17)) {
 case 132:
  VAR_16->auth_flavors[0] = VAR_12;
  break;
 case 128:
  VAR_16->auth_flavors[0] = VAR_13;
  break;
 case 138:
  VAR_16->auth_flavors[0] = VAR_3;
  break;
 case 137:
  VAR_16->auth_flavors[0] = VAR_4;
  break;
 case 136:
  VAR_16->auth_flavors[0] = VAR_5;
  break;
 case 135:
  VAR_16->auth_flavors[0] = VAR_6;
  break;
 case 134:
  VAR_16->auth_flavors[0] = VAR_7;
  break;
 case 133:
  VAR_16->auth_flavors[0] = VAR_8;
  break;
 case 131:
  VAR_16->auth_flavors[0] = VAR_9;
  break;
 case 130:
  VAR_16->auth_flavors[0] = VAR_10;
  break;
 case 129:
  VAR_16->auth_flavors[0] = VAR_11;
  break;
 default:
  return 0;
 }

 VAR_16->flags |= VAR_2;
 VAR_16->auth_flavor_len = 1;
 return 1;
}
