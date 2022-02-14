
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_vn_data {scalar_t__ fv_buf; scalar_t__ fv_bufdone; scalar_t__ fv_bufsiz; } ;
struct direntry {scalar_t__ d_reclen; } ;



__attribute__((used)) static void
FUNC_0(struct fd_vn_data *VAR_0)
{
 struct direntry *VAR_1;

 VAR_1 = (struct direntry *)(VAR_0->fv_buf + VAR_0->fv_bufdone);
 if (VAR_1->d_reclen) {
  VAR_0->fv_bufdone += VAR_1->d_reclen;
  if (VAR_0->fv_bufdone > VAR_0->fv_bufsiz) {
   VAR_0->fv_bufdone = VAR_0->fv_bufsiz;
  }
 } else {
  VAR_0->fv_bufdone = VAR_0->fv_bufsiz;
 }





 if (VAR_0->fv_bufdone == VAR_0->fv_bufsiz) {
  VAR_0->fv_bufdone = 0;
  VAR_0->fv_bufsiz = 0;
 }
}
