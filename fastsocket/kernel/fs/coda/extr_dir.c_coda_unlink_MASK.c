
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {int d_inode; TYPE_1__ d_name; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
        int VAR_2;
 const char *VAR_3 = VAR_1->d_name.name;
 int VAR_4 = VAR_1->d_name.len;

 FUNC_3();

 VAR_2 = FUNC_5(VAR_0->i_sb, FUNC_1(VAR_0), VAR_3, VAR_4);
 if ( VAR_2 ) {
  FUNC_4();
  return VAR_2;
 }

 FUNC_0(VAR_0);
 FUNC_2(VAR_1->d_inode);
 FUNC_4();
 return 0;
}
