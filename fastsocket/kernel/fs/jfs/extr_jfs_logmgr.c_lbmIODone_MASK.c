
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbuf {int l_flag; int l_pn; int l_ioevent; struct lbuf* l_wqnext; scalar_t__ l_ceor; struct jfs_log* l_log; } ;
struct jfs_log {struct lbuf* wqueue; scalar_t__ clsn; } ;
struct bio {int bi_flags; struct lbuf* bi_private; } ;
struct TYPE_2__ {int pagedone; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,struct lbuf*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct lbuf*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct lbuf*) ;
 int FUNC_10 (struct lbuf*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct bio *VAR_12, int VAR_13)
{
 struct lbuf *VAR_14 = VAR_12->bi_private;
 struct lbuf *VAR_15, *VAR_16;
 struct jfs_log *VAR_17;
 unsigned long VAR_18;




 FUNC_7("lbmIODone: bp:0x%p flag:0x%x", VAR_14, VAR_14->l_flag);

 FUNC_1(VAR_18);

 VAR_14->l_flag |= VAR_3;

 if (!FUNC_11(VAR_0, &VAR_12->bi_flags)) {
  VAR_14->l_flag |= VAR_4;

  FUNC_6("lbmIODone: I/O error in JFS log");
 }

 FUNC_5(VAR_12);




 if (VAR_14->l_flag & VAR_7) {
  VAR_14->l_flag &= ~VAR_7;

  FUNC_2(VAR_18);


  FUNC_3(&VAR_14->l_ioevent);

  return;
 }
 VAR_14->l_flag &= ~VAR_10;
 FUNC_0(VAR_11.pagedone);


 VAR_17 = VAR_14->l_log;
 VAR_17->clsn = (VAR_14->l_pn << VAR_1) + VAR_14->l_ceor;

 if (VAR_14->l_flag & VAR_2) {
  FUNC_3(&VAR_14->l_ioevent);
  FUNC_2(VAR_18);
  return;
 }

 VAR_16 = VAR_17->wqueue;


 if (VAR_14 == VAR_16) {



  if (VAR_14->l_flag & VAR_8) {
   VAR_17->wqueue = ((void*)0);
   VAR_14->l_wqnext = ((void*)0);
  }
 }

 else {



  if (VAR_14->l_flag & VAR_8) {
   VAR_15 = VAR_16->l_wqnext = VAR_14->l_wqnext;
   VAR_14->l_wqnext = ((void*)0);
   if (VAR_15->l_flag & VAR_10) {




    FUNC_8(VAR_15);
   }
  }
 }
 if (VAR_14->l_flag & VAR_9) {
  FUNC_2(VAR_18);


  FUNC_3(&VAR_14->l_ioevent);
 }




 else if (VAR_14->l_flag & VAR_6) {
  FUNC_2(VAR_18);
  FUNC_10(VAR_14);
 }







 else {
  FUNC_4(VAR_14->l_flag & VAR_8);
  FUNC_4(VAR_14->l_flag & VAR_5);
  FUNC_9(VAR_14);

  FUNC_2(VAR_18);
 }
}
