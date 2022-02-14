
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahc_softc {int msgout_len; scalar_t__ msgout_index; scalar_t__ msgout_buf; } ;
struct ahc_devinfo {int channel; int target; int lun; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct ahc_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ahc_softc *VAR_2, struct ahc_devinfo *VAR_3,
    u_int VAR_4, u_int VAR_5, u_int VAR_6,
    u_int VAR_7)
{
 if (VAR_5 == 0)
  VAR_4 = VAR_0;
 VAR_2->msgout_index += FUNC_2(
   VAR_2->msgout_buf + VAR_2->msgout_index, VAR_4, VAR_5,
   VAR_6, VAR_7);
 VAR_2->msgout_len += 8;
 if (VAR_1) {
  FUNC_1("(%s:%c:%d:%d): Sending PPR bus_width %x, period %x, "
         "offset %x, ppr_options %x\n", FUNC_0(VAR_2),
         VAR_3->channel, VAR_3->target, VAR_3->lun,
         VAR_6, VAR_4, VAR_5, VAR_7);
 }
}
