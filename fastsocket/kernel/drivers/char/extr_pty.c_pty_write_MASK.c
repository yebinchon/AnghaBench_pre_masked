
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ stopped; struct tty_struct* link; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,unsigned char const*,int) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 struct tty_struct *VAR_3 = VAR_0->link;

 if (VAR_0->stopped)
  return 0;

 if (VAR_2 > 0) {

  VAR_2 = FUNC_1(VAR_3, VAR_1, VAR_2);

  if (VAR_2) {
   FUNC_0(VAR_3);
   FUNC_2(VAR_0);
  }
 }
 return VAR_2;
}
