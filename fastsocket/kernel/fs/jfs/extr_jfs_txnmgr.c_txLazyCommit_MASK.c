
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tblock {int flag; int gcwait; int sb; } ;
struct jfs_log {int gclock; int gcrtc; } ;
struct TYPE_2__ {scalar_t__ log; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct tblock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct tblock*) ;
 int FUNC_5 (struct tblock*) ;
 int FUNC_6 (struct tblock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct tblock * VAR_5)
{
 struct jfs_log *VAR_6;

 while (((VAR_5->flag & VAR_3) == 0) &&
        ((VAR_5->flag & VAR_4) == 0)) {


  FUNC_1("jfs_lazycommit: tblk 0x%p not unlocked", VAR_5);
  FUNC_8();
 }

 FUNC_1("txLazyCommit: processing tblk 0x%p", VAR_5);

 FUNC_6(VAR_5);

 VAR_6 = (struct jfs_log *) FUNC_0(VAR_5->sb)->log;

 FUNC_2(&VAR_6->gclock);

 VAR_5->flag |= VAR_1;

 if (VAR_5->flag & VAR_3)
  VAR_6->gcrtc--;

 FUNC_7(&VAR_5->gcwait);




 if (VAR_5->flag & VAR_2) {
  FUNC_3(&VAR_6->gclock);
  FUNC_5(VAR_5);
  VAR_5->flag &= ~VAR_2;
  FUNC_4(VAR_5 - VAR_0);
 } else
  FUNC_3(&VAR_6->gclock);

 FUNC_1("txLazyCommit: done: tblk = 0x%p", VAR_5);
}
