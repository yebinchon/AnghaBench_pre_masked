
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlock {int type; struct metapage* mp; scalar_t__ next; } ;
struct tblock {int waitor; scalar_t__ next; } ;
struct metapage {int xflag; scalar_t__ lid; } ;
typedef scalar_t__ lid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 struct tlock* FUNC_4 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct tblock * VAR_2)
{
 struct metapage *VAR_3;
 lid_t VAR_4;
 struct tlock *VAR_5;

 FUNC_0();

 for (VAR_4 = VAR_2->next; VAR_4; VAR_4 = VAR_5->next) {
  VAR_5 = FUNC_4(VAR_4);
  if ((VAR_3 = VAR_5->mp) != ((void*)0) &&
      (VAR_5->type & VAR_1) == 0) {
   FUNC_3(VAR_3->xflag & VAR_0);
   VAR_3->lid = 0;
  }
 }





 FUNC_2(&VAR_2->waitor);

 FUNC_1();
}
