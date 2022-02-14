
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mounted_vol; } ;
struct ncp_server {int* name_space; TYPE_1__ m; } ;
typedef size_t __u8 ;
typedef size_t __u32 ;
typedef int __le32 ;


 int FUNC_0 (struct ncp_server*,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_1 (struct ncp_server*,size_t) ;

int
FUNC_2(struct ncp_server *VAR_0,
   __u8 VAR_1, __u8 VAR_2, __le32 VAR_3,
   __u32* VAR_4, __le32* VAR_5, __le32* VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 if ((VAR_8 = FUNC_0(VAR_0, VAR_2, VAR_7, VAR_1,
          VAR_3, ((void*)0), VAR_5, VAR_6)) != 0)
 {
  return VAR_8;
 }
 VAR_0->name_space[VAR_1] = VAR_7;
 *VAR_4 = VAR_1;
 VAR_0->m.mounted_vol[1] = 0;
 VAR_0->m.mounted_vol[0] = 'X';
 return 0;
}
