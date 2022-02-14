
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {struct tun_file* tfile; } ;
struct tun_file {int tun; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tun_struct *VAR_0)
{
 struct tun_file *VAR_1 = VAR_0->tfile;

 if (FUNC_0(&VAR_1->count))
  FUNC_1(VAR_1->tun);
}
