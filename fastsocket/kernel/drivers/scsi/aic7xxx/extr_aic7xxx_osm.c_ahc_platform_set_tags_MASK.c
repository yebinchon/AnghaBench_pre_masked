
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct scsi_device {int dummy; } ;
struct ahc_softc {int dummy; } ;
struct ahc_linux_device {int flags; int active; int openings; scalar_t__ maxtags; int qfrozen; } ;
struct ahc_devinfo {int dummy; } ;
typedef int ahc_queue_alg ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ahc_softc*,struct ahc_devinfo*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (struct scsi_device*,int) ;
 int FUNC_3 (struct scsi_device*,int ) ;
 struct ahc_linux_device* FUNC_4 (struct scsi_device*) ;

void
FUNC_5(struct ahc_softc *VAR_5, struct scsi_device *VAR_6,
        struct ahc_devinfo *VAR_7, ahc_queue_alg VAR_8)
{
 struct ahc_linux_device *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_6 == ((void*)0))
  return;
 VAR_9 = FUNC_4(VAR_6);

 VAR_10 = VAR_9->flags & (132|131);
 switch (VAR_8) {
 default:
 case 129:
  VAR_11 = 0;
  break;
 case 130:
  VAR_11 = 132;
  break;
 case 128:
  VAR_11 = 131;
  break;
 }
 if ((VAR_9->flags & VAR_0) == 0
  && (VAR_10 != VAR_11)
  && (VAR_9->active != 0)) {
  VAR_9->flags |= VAR_0;
  VAR_9->qfrozen++;
 }

 VAR_9->flags &= ~(132|131|VAR_1);
 if (VAR_11) {
  u_int VAR_12;

  VAR_12 = FUNC_0(VAR_5, VAR_7);
  if (!VAR_10) {





   VAR_9->maxtags = VAR_12;
   VAR_9->openings = VAR_9->maxtags - VAR_9->active;
  }
  if (VAR_9->maxtags == 0) {



   VAR_9->openings = 1;
  } else if (VAR_8 == 128) {
   VAR_9->flags |= 131;
   if (VAR_4 != 0)
    VAR_9->flags |= VAR_1;
  } else
   VAR_9->flags |= 132;
 } else {

  VAR_9->maxtags = 0;
  VAR_9->openings = 1 - VAR_9->active;
 }
 switch ((VAR_9->flags & (132|131))) {
 case 132:
  FUNC_3(VAR_6, VAR_3);
  FUNC_1(VAR_6, VAR_9->openings + VAR_9->active);
  break;
 case 131:
  FUNC_3(VAR_6, VAR_2);
  FUNC_1(VAR_6, VAR_9->openings + VAR_9->active);
  break;
 default:






  FUNC_2(VAR_6, 2);
  break;
 }
}
