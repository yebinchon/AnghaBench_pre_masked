
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct channel {int port; scalar_t__ event; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct channel*,struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 struct channel* FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct channel *VAR_1;





 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_0);
  FUNC_2(VAR_0);
  FUNC_1(VAR_1, VAR_0);

  VAR_1->event = 0;
  FUNC_3(&VAR_1->port);
 }
}
