
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int dummy; } ;
struct tun_file {struct tun_struct* tun; int count; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static struct tun_struct *FUNC_1(struct tun_file *VAR_0)
{
 struct tun_struct *VAR_1 = ((void*)0);

 if (FUNC_0(&VAR_0->count))
  VAR_1 = VAR_0->tun;

 return VAR_1;
}
