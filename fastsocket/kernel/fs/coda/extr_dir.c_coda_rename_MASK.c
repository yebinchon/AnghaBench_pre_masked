
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,int,int,char const*,char const*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct dentry *VAR_2,
         struct inode *VAR_3, struct dentry *VAR_4)
{
 const char *VAR_5 = VAR_2->d_name.name;
 const char *VAR_6 = VAR_4->d_name.name;
 int VAR_7 = VAR_2->d_name.len;
 int VAR_8 = VAR_4->d_name.len;
 int VAR_9;

 FUNC_6();

 VAR_9 = FUNC_8(VAR_1->i_sb, FUNC_5(VAR_1),
        FUNC_5(VAR_3), VAR_7, VAR_8,
        (const char *) VAR_5, (const char *)VAR_6);

 if ( !VAR_9 ) {
  if ( VAR_4->d_inode ) {
   if ( FUNC_0(VAR_4->d_inode->i_mode) ) {
    FUNC_1(VAR_1);
    FUNC_2(VAR_3);
   }
   FUNC_3(VAR_1);
   FUNC_3(VAR_3);
   FUNC_4(VAR_4->d_inode, VAR_0);
  } else {
   FUNC_4(VAR_1, VAR_0);
   FUNC_4(VAR_3, VAR_0);
  }
 }
 FUNC_7();

 return VAR_9;
}
