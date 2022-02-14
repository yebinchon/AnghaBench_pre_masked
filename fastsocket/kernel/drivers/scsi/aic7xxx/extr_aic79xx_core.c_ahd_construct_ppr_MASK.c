
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int msgout_len; scalar_t__ msgout_index; scalar_t__ msgout_buf; } ;
struct ahd_devinfo {int channel; int target; int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_4, struct ahd_devinfo *VAR_5,
    u_int VAR_6, u_int VAR_7, u_int VAR_8,
    u_int VAR_9)
{





 if (VAR_6 <= VAR_1)
  VAR_9 |= VAR_2;
 if (VAR_7 == 0)
  VAR_6 = VAR_0;
 VAR_4->msgout_index += FUNC_2(
   VAR_4->msgout_buf + VAR_4->msgout_index, VAR_6, VAR_7,
   VAR_8, VAR_9);
 VAR_4->msgout_len += 8;
 if (VAR_3) {
  FUNC_1("(%s:%c:%d:%d): Sending PPR bus_width %x, period %x, "
         "offset %x, ppr_options %x\n", FUNC_0(VAR_4),
         VAR_5->channel, VAR_5->target, VAR_5->lun,
         VAR_8, VAR_6, VAR_7, VAR_9);
 }
}
