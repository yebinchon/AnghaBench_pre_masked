
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncp_server {int* name_space; } ;
struct TYPE_4__ {int volNumber; } ;
struct ncp_entry_info {int opened; TYPE_1__ i; int file_handle; int volume; } ;
struct inode {int dummy; } ;
typedef size_t __u8 ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_5__ {size_t volNumber; int dirEntNum; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ncp_server*,int) ;
 int FUNC_4 (struct ncp_server*,int) ;
 int FUNC_5 (struct ncp_server*,size_t,int,int,char*) ;
 int FUNC_6 (struct ncp_server*,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (struct ncp_server*) ;
 int FUNC_9 (struct ncp_server*,TYPE_1__*) ;
 int FUNC_10 (struct ncp_server*,int) ;
 int FUNC_11 (struct ncp_server*,int) ;
 int FUNC_12 (struct ncp_server*,int) ;
 int FUNC_13 (struct ncp_server*) ;

int FUNC_14(struct ncp_server *VAR_2,
       struct inode *VAR_3, char *VAR_4,
       int VAR_5,
       __le32 VAR_6,
       __le16 VAR_7,
       struct ncp_entry_info *VAR_8)
{
 __le16 VAR_9 = FUNC_2(0x0006);
 __u8 VAR_10;
 __le32 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_3)->volNumber;
 VAR_11 = FUNC_1(VAR_3)->dirEntNum;

 if ((VAR_6 & VAR_1) != 0) {
  VAR_9 |= FUNC_2(0x8000);
 }
 FUNC_8(VAR_2);
 FUNC_3(VAR_2, 1);
 FUNC_3(VAR_2, VAR_2->name_space[VAR_10]);
 FUNC_3(VAR_2, VAR_5);
 FUNC_6(VAR_2, VAR_9);
 FUNC_4(VAR_2, VAR_0);
 FUNC_4(VAR_2, VAR_6);


 FUNC_6(VAR_2, VAR_7);
 FUNC_5(VAR_2, VAR_10, VAR_11, 1, VAR_4);

 if ((VAR_12 = FUNC_12(VAR_2, 87)) != 0)
  goto out;
 if (!(VAR_6 & VAR_1))
  VAR_8->opened = 1;


 FUNC_7(FUNC_10(VAR_2, 6), &(VAR_8->i));
 VAR_8->volume = VAR_8->i.volNumber;
 FUNC_0(FUNC_11(VAR_2, 0),
        FUNC_11(VAR_2, 2),
        VAR_8->file_handle);

 FUNC_13(VAR_2);

 (void)FUNC_9(VAR_2, &(VAR_8->i));
 return 0;

out:
 FUNC_13(VAR_2);
 return VAR_12;
}
