
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,int *) ;
 unsigned char FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 unsigned char VAR_3;
 static unsigned char VAR_4 = 0;

 while ( (VAR_3 = FUNC_1(0, 0, 0, 0, VAR_0)) ) {
  if ( VAR_3 == 27 && VAR_4 == 0 ) {
   VAR_4 = 1;
   continue;
  } else {
   if ( VAR_4==1 && VAR_3 == 'O' ) {
    VAR_4 = 2;
    continue;
   } else if ( VAR_4 == 2 ) {
    if ( VAR_3 == 'P' )
     FUNC_2();
    VAR_4 = 0;
    continue;
   }
  }
  VAR_4 = 0;

  if (FUNC_4(VAR_2, VAR_3, VAR_1) == 0)
   break;
 }
 FUNC_3(VAR_2);
}
