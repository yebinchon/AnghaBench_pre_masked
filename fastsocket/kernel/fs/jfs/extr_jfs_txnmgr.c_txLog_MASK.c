
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tlock {int type; struct inode* ip; int flag; scalar_t__ next; } ;
struct tblock {scalar_t__ next; } ;
struct TYPE_5__ {void* inode; void* fileset; } ;
struct TYPE_6__ {TYPE_1__ redopage; } ;
struct lrd {TYPE_2__ log; void* aggregate; } ;
struct jfs_log {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct commit {struct lrd lrd; } ;
typedef scalar_t__ lid_t ;
struct TYPE_8__ {int fileset; } ;
struct TYPE_7__ {int aggregate; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int FUNC_4 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*,struct commit*) ;
 int FUNC_5 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int FUNC_6 (char*,struct tlock*) ;
 struct tlock* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;



 int VAR_0 ;

 int VAR_1 ;

 int FUNC_9 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;

__attribute__((used)) static int FUNC_10(struct jfs_log * VAR_2, struct tblock * VAR_3, struct commit * VAR_4)
{
 int VAR_5 = 0;
 struct inode *VAR_6;
 lid_t VAR_7;
 struct tlock *VAR_8;
 struct lrd *VAR_9 = &VAR_4->lrd;




 for (VAR_7 = VAR_3->next; VAR_7; VAR_7 = VAR_8->next) {
  VAR_8 = FUNC_7(VAR_7);

  VAR_8->flag |= VAR_0;


  VAR_6 = VAR_8->ip;
  VAR_9->aggregate = FUNC_2(FUNC_1(VAR_6->i_sb)->aggregate);
  VAR_9->log.redopage.fileset = FUNC_2(FUNC_0(VAR_6)->fileset);
  VAR_9->log.redopage.inode = FUNC_2(VAR_6->i_ino);


  switch (VAR_8->type & VAR_1) {
  case 128:
   FUNC_9(VAR_2, VAR_3, VAR_9, VAR_8);
   break;

  case 131:
   FUNC_5(VAR_2, VAR_3, VAR_9, VAR_8);
   break;

  case 130:
   FUNC_4(VAR_2, VAR_3, VAR_9, VAR_8, VAR_4);
   break;

  case 129:
   FUNC_8(VAR_2, VAR_3, VAR_9, VAR_8);
   break;

  case 132:
   FUNC_3(VAR_2, VAR_3, VAR_9, VAR_8);
   break;

  default:
   FUNC_6("UFO tlock:0x%p", VAR_8);
  }
 }

 return VAR_5;
}
