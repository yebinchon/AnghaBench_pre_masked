
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 int FUNC_0 (struct tty_struct*) ;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 struct tty_struct* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3, unsigned char VAR_4)
{
 if (VAR_3 != VAR_2) {
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2);
  VAR_2 = VAR_3;
 }

 VAR_0[VAR_1++] = VAR_4;
 return 0;
}
