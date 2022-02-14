
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readlink_args {int count; int buf; int path; } ;
typedef int proc_t ;
typedef int int32_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int,int *) ;
 int FUNC_3 () ;

int
FUNC_4(proc_t VAR_3, struct readlink_args *VAR_4, int32_t *VAR_5)
{
 enum uio_seg VAR_6;

 VAR_6 = FUNC_1(VAR_3) ? VAR_2 : VAR_1;
 return (FUNC_2(FUNC_3(), VAR_0,
     FUNC_0(VAR_4->path), VAR_6, FUNC_0(VAR_4->buf),
     VAR_4->count, VAR_6, VAR_5));
}
