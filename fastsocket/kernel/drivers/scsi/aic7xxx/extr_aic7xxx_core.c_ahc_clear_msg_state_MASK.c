
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int msg_type; scalar_t__ msgin_index; scalar_t__ msgout_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_9)
{
 VAR_9->msgout_len = 0;
 VAR_9->msgin_index = 0;
 VAR_9->msg_type = VAR_5;
 if ((FUNC_0(VAR_9, VAR_6) & VAR_0) != 0) {




  FUNC_1(VAR_9, VAR_2, VAR_1);
 }
 FUNC_1(VAR_9, VAR_4, VAR_3);
 FUNC_1(VAR_9, VAR_7,
   FUNC_0(VAR_9, VAR_7) & ~VAR_8);
}
