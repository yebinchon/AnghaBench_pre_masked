
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ,char*,void*,size_t,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct inode*,struct inode*,char**,void**,size_t*) ;

int
FUNC_3(struct inode *VAR_2, struct inode *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 void *VAR_6;
 char *VAR_7;

 VAR_4 = FUNC_2(VAR_2, VAR_3, &VAR_7, &VAR_6, &VAR_5);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   return 0;
  return VAR_4;
 }
 VAR_4 = FUNC_0(VAR_2, VAR_1,
        VAR_7, VAR_6, VAR_5, 0);
 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 return VAR_4;
}
