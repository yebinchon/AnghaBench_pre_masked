
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * le_prev; int * le_next; } ;
struct TYPE_4__ {int * le_prev; int * le_next; } ;
struct inpcbport {int inp_flags2; scalar_t__ inp_lport; TYPE_3__* inp_pcbinfo; int inp_flowhash; struct inpcbport* inp_phd; int phd_pcblist; TYPE_2__ inp_portlist; TYPE_1__ inp_hash; scalar_t__ inp_gencnt; } ;
struct inpcb {int inp_flags2; scalar_t__ inp_lport; TYPE_3__* inp_pcbinfo; int inp_flowhash; struct inpcb* inp_phd; int phd_pcblist; TYPE_2__ inp_portlist; TYPE_1__ inp_hash; scalar_t__ inp_gencnt; } ;
struct TYPE_6__ {scalar_t__ ipi_twcount; int ipi_count; scalar_t__ ipi_gencnt; } ;


 int FUNC_0 (struct inpcbport*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inpcbport*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct inpcbport*) ;

void
FUNC_6(struct inpcb *VAR_10)
{
 VAR_10->inp_gencnt = ++VAR_10->inp_pcbinfo->ipi_gencnt;






 if (VAR_10->inp_flags2 & VAR_0) {
  struct inpcbport *VAR_11 = VAR_10->inp_phd;

  FUNC_3(VAR_11 != ((void*)0) && VAR_10->inp_lport > 0);

  FUNC_2(VAR_10, VAR_6);
  VAR_10->inp_hash.le_next = ((void*)0);
  VAR_10->inp_hash.le_prev = ((void*)0);

  FUNC_2(VAR_10, VAR_8);
  VAR_10->inp_portlist.le_next = ((void*)0);
  VAR_10->inp_portlist.le_prev = ((void*)0);
  if (FUNC_1(&VAR_11->phd_pcblist)) {
   FUNC_2(VAR_11, VAR_9);
   FUNC_0(VAR_11, VAR_5);
  }
  VAR_10->inp_phd = ((void*)0);
  VAR_10->inp_flags2 &= ~VAR_0;
 }
 FUNC_3(!(VAR_10->inp_flags2 & VAR_0));

 if (VAR_10->inp_flags2 & VAR_2) {

  FUNC_5(VAR_10);
  VAR_10->inp_flags2 &= ~VAR_2;
  FUNC_3(VAR_10->inp_pcbinfo->ipi_twcount != 0);
  VAR_10->inp_pcbinfo->ipi_twcount--;
 } else {

  FUNC_2(VAR_10, VAR_7);
 }

 if (VAR_10->inp_flags2 & VAR_1) {
  FUNC_4(VAR_10->inp_flowhash, (VAR_4|VAR_3));
  FUNC_3(!(VAR_10->inp_flags2 & VAR_1));
 }

 VAR_10->inp_pcbinfo->ipi_count--;
}
