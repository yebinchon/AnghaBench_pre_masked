
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int,int) ;
 int FUNC_10 (struct inode*,struct dentry*,int,char*) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5, dev_t VAR_6)
{
 int VAR_7;
 char *VAR_8;

 FUNC_2(VAR_2,
  " %lu,%s mode: %x MAJOR: %u MINOR: %u\n", VAR_3->i_ino,
  VAR_4->d_name.name, VAR_5, FUNC_0(VAR_6), FUNC_1(VAR_6));

 if (!FUNC_8(VAR_6))
  return -VAR_0;

 VAR_8 = FUNC_6();
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_3(VAR_5))
  FUNC_9(VAR_8, "b %u %u", FUNC_0(VAR_6), FUNC_1(VAR_6));
 else if (FUNC_4(VAR_5))
  FUNC_9(VAR_8, "c %u %u", FUNC_0(VAR_6), FUNC_1(VAR_6));
 else if (FUNC_5(VAR_5))
  *VAR_8 = 0;
 else {
  FUNC_7(VAR_8);
  return -VAR_0;
 }

 VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_8);
 FUNC_7(VAR_8);

 return VAR_7;
}
