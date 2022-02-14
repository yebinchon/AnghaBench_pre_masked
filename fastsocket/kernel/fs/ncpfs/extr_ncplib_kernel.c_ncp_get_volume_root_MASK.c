
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int * name_space; } ;
typedef size_t __u8 ;
typedef size_t __u32 ;
typedef int __le32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ncp_server*,int) ;
 int FUNC_2 (struct ncp_server*,int ) ;
 int FUNC_3 (struct ncp_server*,char const*) ;
 int FUNC_4 (struct ncp_server*,size_t) ;
 int FUNC_5 (struct ncp_server*) ;
 size_t FUNC_6 (struct ncp_server*,int) ;
 int FUNC_7 (struct ncp_server*,int) ;
 int FUNC_8 (struct ncp_server*,int) ;
 int FUNC_9 (struct ncp_server*) ;

int
FUNC_10(struct ncp_server *VAR_0, const char *VAR_1,
      __u32* VAR_2, __le32* VAR_3, __le32* VAR_4)
{
 int VAR_5;
 __u8 VAR_6;

 FUNC_0("ncp_get_volume_root: looking up vol %s\n", VAR_1);

 FUNC_5(VAR_0);
 FUNC_1(VAR_0, 22);
 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_0, 0);

 FUNC_1(VAR_0, 0);
 FUNC_2(VAR_0, 0);
 FUNC_1(VAR_0, 0xff);
 FUNC_1(VAR_0, 1);
 FUNC_3(VAR_0, VAR_1);

 if ((VAR_5 = FUNC_8(VAR_0, 87)) != 0) {
  FUNC_9(VAR_0);
  return VAR_5;
 }
 *VAR_3 = *VAR_4 = FUNC_7(VAR_0, 4);
 VAR_6 = FUNC_6(VAR_0, 8);
 FUNC_9(VAR_0);
 *VAR_2 = VAR_6;

 VAR_0->name_space[VAR_6] = FUNC_4(VAR_0, VAR_6);

 FUNC_0("lookup_vol: namespace[%d] = %d\n",
  VAR_6, VAR_0->name_space[VAR_6]);

 return 0;
}
