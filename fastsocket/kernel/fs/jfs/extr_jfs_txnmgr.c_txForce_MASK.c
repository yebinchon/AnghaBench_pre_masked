
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlock {int type; int flag; struct metapage* mp; scalar_t__ next; } ;
struct tblock {scalar_t__ next; } ;
struct metapage {int xflag; int nohomeok; int flag; } ;
typedef scalar_t__ lid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct metapage*) ;
 struct tlock* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct tblock * VAR_5)
{
 struct tlock *VAR_6;
 lid_t VAR_7, VAR_8;
 struct metapage *VAR_9;






 VAR_6 = FUNC_2(VAR_5->next);
 VAR_7 = VAR_6->next;
 VAR_6->next = 0;
 while (VAR_7) {
  VAR_6 = FUNC_2(VAR_7);
  VAR_8 = VAR_6->next;
  VAR_6->next = VAR_5->next;
  VAR_5->next = VAR_7;
  VAR_7 = VAR_8;
 }





 for (VAR_7 = VAR_5->next; VAR_7; VAR_7 = VAR_8) {
  VAR_6 = FUNC_2(VAR_7);
  VAR_8 = VAR_6->next;

  if ((VAR_9 = VAR_6->mp) != ((void*)0) &&
      (VAR_6->type & VAR_3) == 0) {
   FUNC_0(VAR_9->xflag & VAR_0);

   if (VAR_6->flag & VAR_4) {
    VAR_6->flag &= ~VAR_4;


    FUNC_1(VAR_9);
   }
  }
 }
}
