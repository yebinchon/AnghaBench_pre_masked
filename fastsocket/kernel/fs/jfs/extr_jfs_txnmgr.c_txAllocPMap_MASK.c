
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flag; } ;
typedef TYPE_1__ xad_t ;
typedef int ulong ;
struct xdlistlock {int count; TYPE_1__* xdlist; } ;
struct tblock {int dummy; } ;
struct pxd_lock {TYPE_1__ pxd; } ;
struct maplock {int flag; } ;
struct inode {int i_sb; } ;
typedef scalar_t__ s64 ;
typedef TYPE_1__ pxd_t ;
struct TYPE_9__ {struct inode* ipbmap; } ;


 TYPE_7__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,int,scalar_t__,scalar_t__,struct tblock*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_4, struct maplock * VAR_5,
   struct tblock * VAR_6)
{
 struct inode *VAR_7 = FUNC_0(VAR_4->i_sb)->ipbmap;
 struct xdlistlock *VAR_8;
 xad_t *VAR_9;
 s64 VAR_10;
 int VAR_11;
 struct pxd_lock *VAR_12;
 struct xdlistlock *VAR_13;
 pxd_t *VAR_14;
 int VAR_15;




 if (VAR_5->flag & VAR_3) {
  VAR_8 = (struct xdlistlock *) VAR_5;
  VAR_9 = VAR_8->xdlist;
  for (VAR_15 = 0; VAR_15 < VAR_8->count; VAR_15++, VAR_9++) {
   if (VAR_9->flag & (VAR_1 | VAR_0)) {
    VAR_10 = FUNC_2(VAR_9);
    VAR_11 = FUNC_6(VAR_9);
    FUNC_3(VAR_7, 0, VAR_10,
          (s64) VAR_11, VAR_6);
    VAR_9->flag &= ~(VAR_1 | VAR_0);
    FUNC_4("allocPMap: xaddr:0x%lx xlen:%d",
      (ulong) VAR_10, VAR_11);
   }
  }
 } else if (VAR_5->flag & VAR_2) {
  VAR_12 = (struct pxd_lock *) VAR_5;
  VAR_10 = FUNC_1(&VAR_12->pxd);
  VAR_11 = FUNC_5(&VAR_12->pxd);
  FUNC_3(VAR_7, 0, VAR_10, (s64) VAR_11, VAR_6);
  FUNC_4("allocPMap: xaddr:0x%lx xlen:%d", (ulong) VAR_10, VAR_11);
 } else {

  VAR_13 = (struct xdlistlock *) VAR_5;
  VAR_14 = VAR_13->xdlist;
  for (VAR_15 = 0; VAR_15 < VAR_13->count; VAR_15++, VAR_14++) {
   VAR_10 = FUNC_1(VAR_14);
   VAR_11 = FUNC_5(VAR_14);
   FUNC_3(VAR_7, 0, VAR_10, (s64) VAR_11,
         VAR_6);
   FUNC_4("allocPMap: xaddr:0x%lx xlen:%d",
     (ulong) VAR_10, VAR_11);
  }
 }
}
