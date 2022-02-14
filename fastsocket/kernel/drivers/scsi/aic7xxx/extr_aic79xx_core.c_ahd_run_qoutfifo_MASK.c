
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scb {int dummy; } ;
struct ahd_softc {int flags; size_t qoutfifonext; int qoutfifonext_valid_tag; struct ahd_completion* qoutfifo; } ;
struct ahd_completion {int sg_status; int tag; int valid_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;
 int FUNC_3 (int ) ;
 struct scb* FUNC_4 (struct ahd_softc*,int) ;
 char* FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int,size_t) ;

__attribute__((used)) static void
FUNC_9(struct ahd_softc *VAR_5)
{
 struct ahd_completion *VAR_6;
 struct scb *VAR_7;
 u_int VAR_8;

 if ((VAR_5->flags & VAR_1) != 0)
  FUNC_7("ahd_run_qoutfifo recursion");
 VAR_5->flags |= VAR_1;
 FUNC_6(VAR_5, VAR_2);
 for (;;) {
  VAR_6 = &VAR_5->qoutfifo[VAR_5->qoutfifonext];

  if (VAR_6->valid_tag != VAR_5->qoutfifonext_valid_tag)
   break;

  VAR_8 = FUNC_3(VAR_6->tag);
  VAR_7 = FUNC_4(VAR_5, VAR_8);
  if (VAR_7 == ((void*)0)) {
   FUNC_8("%s: WARNING no command for scb %d "
          "(cmdcmplt)\nQOUTPOS = %d\n",
          FUNC_5(VAR_5), VAR_8,
          VAR_5->qoutfifonext);
   FUNC_1(VAR_5);
  } else if ((VAR_6->sg_status & VAR_4) != 0) {
   FUNC_2(VAR_5, VAR_7);
  } else {
   FUNC_0(VAR_5, VAR_7);
  }

  VAR_5->qoutfifonext = (VAR_5->qoutfifonext+1) & (VAR_0-1);
  if (VAR_5->qoutfifonext == 0)
   VAR_5->qoutfifonext_valid_tag ^= VAR_3;
 }
 VAR_5->flags &= ~VAR_1;
}
