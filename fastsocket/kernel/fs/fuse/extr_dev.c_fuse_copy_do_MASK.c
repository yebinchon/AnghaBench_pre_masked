
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {unsigned int len; void* buf; scalar_t__ write; } ;


 int FUNC_0 (void*,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct fuse_copy_state *VAR_0, void **VAR_1, unsigned *VAR_2)
{
 unsigned VAR_3 = FUNC_1(*VAR_2, VAR_0->len);
 if (VAR_1) {
  if (VAR_0->write)
   FUNC_0(VAR_0->buf, *VAR_1, VAR_3);
  else
   FUNC_0(*VAR_1, VAR_0->buf, VAR_3);
  *VAR_1 += VAR_3;
 }
 *VAR_2 -= VAR_3;
 VAR_0->len -= VAR_3;
 VAR_0->buf += VAR_3;
 return VAR_3;
}
