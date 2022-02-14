
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int ip; struct metapage* mp; scalar_t__ next; } ;
struct tblock {int sb; scalar_t__ last; scalar_t__ next; } ;
struct metapage {int xflag; scalar_t__ lsn; scalar_t__ lid; } ;
typedef scalar_t__ lid_t ;
struct TYPE_2__ {scalar_t__ xtlid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct metapage*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 struct tlock* FUNC_5 (scalar_t__) ;
 struct tblock* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(tid_t VAR_1, int VAR_2)
{
 lid_t VAR_3, VAR_4;
 struct metapage *VAR_5;
 struct tblock *VAR_6 = FUNC_6(VAR_1);
 struct tlock *VAR_7;




 for (VAR_3 = VAR_6->next; VAR_3; VAR_3 = VAR_4) {
  VAR_7 = FUNC_5(VAR_3);
  VAR_4 = VAR_7->next;
  VAR_5 = VAR_7->mp;
  FUNC_0(VAR_7->ip)->xtlid = 0;

  if (VAR_5) {
   VAR_5->lid = 0;
   if (VAR_5->xflag & VAR_0 && VAR_5->lsn)
    FUNC_1(VAR_5);
  }

  FUNC_2();
  FUNC_7(VAR_3);
  FUNC_3();
 }



 VAR_6->next = VAR_6->last = 0;




 if (VAR_2)
  FUNC_4(VAR_6->sb, "txAbort");

 return;
}
