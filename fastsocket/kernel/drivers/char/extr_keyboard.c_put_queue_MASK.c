
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct tty_struct* vc_tty; } ;
struct tty_struct {int dummy; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, int VAR_1)
{
 struct tty_struct *VAR_2 = VAR_0->vc_tty;

 if (VAR_2) {
  FUNC_1(VAR_2, VAR_1, 0);
  FUNC_0(VAR_2);
 }
}
