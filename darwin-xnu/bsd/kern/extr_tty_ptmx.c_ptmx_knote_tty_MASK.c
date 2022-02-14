
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct ptmx_ioctl {struct tty* pt_tty; } ;
struct knote {struct ptmx_ioctl* kn_hook; } ;



__attribute__((used)) static struct tty *
FUNC_0(struct knote *VAR_0)
{
 struct ptmx_ioctl *VAR_1 = VAR_0->kn_hook;
 return VAR_1->pt_tty;
}
