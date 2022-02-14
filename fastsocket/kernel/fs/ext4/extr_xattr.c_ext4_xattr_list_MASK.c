
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int xattr_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,char*,size_t) ;
 int FUNC_3 (struct inode*,char*,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(&FUNC_0(VAR_0)->xattr_sem);
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  VAR_4 = 0;
 } else {
  if (VAR_1) {
   VAR_1 += VAR_3;
   VAR_2 -= VAR_3;
  }
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_4 < 0)
   VAR_3 = 0;
 }
 FUNC_4(&FUNC_0(VAR_0)->xattr_sem);
 return VAR_3 + VAR_4;
}
