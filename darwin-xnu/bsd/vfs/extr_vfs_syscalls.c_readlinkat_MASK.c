
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readlinkat_args {int bufsize; int buf; int path; int fd; } ;
typedef int proc_t ;
typedef int int32_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int,int *) ;
 int FUNC_2 () ;

int
FUNC_3(proc_t VAR_2, struct readlinkat_args *VAR_3, int32_t *VAR_4)
{
 enum uio_seg VAR_5;

 VAR_5 = FUNC_0(VAR_2) ? VAR_1 : VAR_0;
 return (FUNC_1(FUNC_2(), VAR_3->fd, VAR_3->path,
     VAR_5, VAR_3->buf, VAR_3->bufsize, VAR_5, VAR_4));
}
