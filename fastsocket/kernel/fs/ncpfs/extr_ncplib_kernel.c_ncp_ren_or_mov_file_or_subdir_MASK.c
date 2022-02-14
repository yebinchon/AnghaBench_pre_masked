
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
struct inode {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ncp_server*,struct inode*,char*,int ,struct inode*,char*) ;
 int FUNC_2 (struct ncp_server*,struct inode*,char*) ;

int FUNC_3(struct ncp_server *VAR_1,
    struct inode *VAR_2, char *VAR_3,
    struct inode *VAR_4, char *VAR_5)
{
        int VAR_6;
        __le16 VAR_7 = FUNC_0(0x06);


 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7,
                                    VAR_4, VAR_5);
        if (VAR_6 == 0xFF)
 {
  VAR_7 = FUNC_0(0x16);
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7,
         VAR_4, VAR_5);
 }
 if (VAR_6 != 0x92) return VAR_6;
 VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
 if (VAR_6 != 0) return -VAR_0;
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7,
        VAR_4, VAR_5);
 return VAR_6;
}
