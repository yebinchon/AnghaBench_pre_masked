
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_dev_t {struct ptmx_ioctl* (* open ) (int ,int) ;} ;
struct ptmx_ioctl {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 struct tty_dev_t* FUNC_1 (int ) ;
 struct ptmx_ioctl* FUNC_2 (int ,int) ;

__attribute__((used)) static struct ptmx_ioctl *
FUNC_3(dev_t VAR_0, int VAR_1, struct tty_dev_t **VAR_2)
{
 struct tty_dev_t *VAR_3 = FUNC_1(VAR_0);
 if (VAR_2) {
  *VAR_2 = VAR_3;
 }
 if (VAR_3 && VAR_3->open) {
  return VAR_3->open(FUNC_0(VAR_0), VAR_1);
 }
 return ((void*)0);
}
