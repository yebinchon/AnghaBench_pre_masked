
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int msgout_len; scalar_t__ msgout_index; scalar_t__ msgout_buf; } ;
struct ahd_devinfo {int channel; int target; int lun; } ;


 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,int,int,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_1, struct ahd_devinfo *VAR_2,
     u_int VAR_3)
{
 VAR_1->msgout_index += FUNC_2(
   VAR_1->msgout_buf + VAR_1->msgout_index, VAR_3);
 VAR_1->msgout_len += 4;
 if (VAR_0) {
  FUNC_1("(%s:%c:%d:%d): Sending WDTR %x\n",
         FUNC_0(VAR_1), VAR_2->channel, VAR_2->target,
         VAR_2->lun, VAR_3);
 }
}
