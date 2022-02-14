
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct inode*,int ,char*,void*,size_t,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct inode*,struct inode*,char**,void**,size_t*) ;

int
FUNC_3(handle_t *VAR_2, struct inode *VAR_3, struct inode *VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 void *VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_8, &VAR_7, &VAR_6);
 if (VAR_5) {
  if (VAR_5 == -VAR_0)
   return 0;
  return VAR_5;
 }
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1,
        VAR_8, VAR_7, VAR_6, 0);
 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
 return VAR_5;
}
