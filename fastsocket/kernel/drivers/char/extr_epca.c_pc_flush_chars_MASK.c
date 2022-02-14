
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct channel {int statusflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*,struct channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct channel* FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_3)
{
 struct channel *VAR_4;




 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 != ((void*)0)) {
  unsigned long VAR_5;
  FUNC_1(&VAR_2, VAR_5);




  if ((VAR_4->statusflags & VAR_1) &&
    !(VAR_4->statusflags & VAR_0))
   FUNC_0(VAR_3, VAR_4);
  FUNC_2(&VAR_2, VAR_5);
 }
}
