
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct stliport {int port; } ;
struct stlibrd {struct stliport** ports; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct stliport*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 struct tty_struct* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct stlibrd *VAR_1)
{
 struct stliport *VAR_2;
 unsigned int VAR_3;
 struct tty_struct *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->ports[VAR_3];
  if (VAR_2 != ((void*)0)) {
   VAR_4 = FUNC_3(&VAR_2->port);
   if (VAR_4 != ((void*)0)) {
    FUNC_1(VAR_4);
    FUNC_2(VAR_4);
   }
   FUNC_0(VAR_2);
  }
 }
}
