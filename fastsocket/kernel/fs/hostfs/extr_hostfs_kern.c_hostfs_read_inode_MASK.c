
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_dentry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int *,int *) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,char*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2)
{
 char *VAR_3;
 int VAR_4 = 0;





 if (FUNC_6(&VAR_2->i_dentry))
  goto out;

 VAR_4 = -VAR_0;
 VAR_3 = FUNC_4(VAR_2, 0);
 if (VAR_3 == ((void*)0))
  goto out;

 if (FUNC_2(VAR_3, ((void*)0), ((void*)0)) == VAR_1) {
  VAR_3 = FUNC_3(VAR_3);
  if (FUNC_0(VAR_3)) {
   VAR_4 = FUNC_1(VAR_3);
   goto out;
  }
 }

 VAR_4 = FUNC_7(VAR_2, VAR_3);
 FUNC_5(VAR_3);
 out:
 return VAR_4;
}
