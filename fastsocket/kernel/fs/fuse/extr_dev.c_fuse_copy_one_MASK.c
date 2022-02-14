
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {int len; } ;


 int FUNC_0 (struct fuse_copy_state*,void**,unsigned int*) ;
 int FUNC_1 (struct fuse_copy_state*) ;

__attribute__((used)) static int FUNC_2(struct fuse_copy_state *VAR_0, void *VAR_1, unsigned VAR_2)
{
 while (VAR_2) {
  if (!VAR_0->len) {
   int VAR_3 = FUNC_1(VAR_0);
   if (VAR_3)
    return VAR_3;
  }
  FUNC_0(VAR_0, &VAR_1, &VAR_2);
 }
 return 0;
}
