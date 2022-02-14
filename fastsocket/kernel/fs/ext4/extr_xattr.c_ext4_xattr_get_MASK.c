
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int xattr_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int,char const*,void*,size_t) ;
 int FUNC_3 (struct inode*,int,char const*,void*,size_t) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct inode *VAR_1, int VAR_2, const char *VAR_3,
        void *VAR_4, size_t VAR_5)
{
 int VAR_6;

 FUNC_1(&FUNC_0(VAR_1)->xattr_sem);
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5);
 if (VAR_6 == -VAR_0)
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5);
 FUNC_4(&FUNC_0(VAR_1)->xattr_sem);
 return VAR_6;
}
