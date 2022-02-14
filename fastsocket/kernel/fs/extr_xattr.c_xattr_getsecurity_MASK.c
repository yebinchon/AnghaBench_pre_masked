
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,void*,size_t) ;
 size_t FUNC_1 (struct inode*,char const*,void**,int) ;
 int FUNC_2 (void*,size_t) ;

ssize_t
FUNC_3(struct inode *VAR_1, const char *VAR_2, void *VAR_3,
   size_t VAR_4)
{
 void *VAR_5 = ((void*)0);
 ssize_t VAR_6;

 if (!VAR_3 || !VAR_4) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, 0);
  goto out_noalloc;
 }

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_4 < VAR_6) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_0(VAR_3, VAR_5, VAR_6);
out:
 FUNC_2(VAR_5, VAR_6);
out_noalloc:
 return VAR_6;
}
