
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int msgout_len; scalar_t__ msgout_index; scalar_t__ msgout_buf; } ;
struct ahd_devinfo {int channel; int target; int lun; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,int,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_2, struct ahd_devinfo *VAR_3,
     u_int VAR_4, u_int VAR_5)
{
 if (VAR_5 == 0)
  VAR_4 = VAR_0;
 VAR_2->msgout_index += FUNC_2(
   VAR_2->msgout_buf + VAR_2->msgout_index, VAR_4, VAR_5);
 VAR_2->msgout_len += 5;
 if (VAR_1) {
  FUNC_1("(%s:%c:%d:%d): Sending SDTR period %x, offset %x\n",
         FUNC_0(VAR_2), VAR_3->channel, VAR_3->target,
         VAR_3->lun, VAR_4, VAR_5);
 }
}
