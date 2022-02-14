
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int echo_lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, int VAR_3,
      struct tty_struct *VAR_4)
{
 FUNC_1(&VAR_4->echo_lock);

 FUNC_0(VAR_1, VAR_4);
 FUNC_0(VAR_0, VAR_4);


 VAR_2 &= 7;


 if (VAR_3)
  VAR_2 |= 0x80;

 FUNC_0(VAR_2, VAR_4);

 FUNC_2(&VAR_4->echo_lock);
}
