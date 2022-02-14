
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opm; int ppm; int npm; int tbvpm; } ;
struct dasd_device {TYPE_2__* discipline; TYPE_1__ path_data; } ;
struct ccw_device {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int (* kick_validate ) (struct dasd_device*) ;} ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dasd_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (struct dasd_device*) ;

void FUNC_7(struct ccw_device *VAR_4, int *VAR_5)
{
 int VAR_6;
 __u8 VAR_7, VAR_8;
 struct dasd_device *VAR_9;

 VAR_9 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_9))
  return;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_8 = 0x80 >> VAR_6;
  if (VAR_5[VAR_6] & VAR_3) {
   VAR_7 = VAR_9->path_data.opm;
   VAR_9->path_data.opm &= ~VAR_8;
   VAR_9->path_data.ppm &= ~VAR_8;
   VAR_9->path_data.npm &= ~VAR_8;
   if (VAR_7 && !VAR_9->path_data.opm)
    FUNC_3(VAR_9);
  }
  if (VAR_5[VAR_6] & VAR_2) {
   VAR_9->path_data.opm &= ~VAR_8;
   VAR_9->path_data.ppm &= ~VAR_8;
   VAR_9->path_data.npm &= ~VAR_8;
   VAR_9->path_data.tbvpm |= VAR_8;
   FUNC_5(VAR_9);
  }
  if (VAR_5[VAR_6] & VAR_1) {
   if (!(VAR_9->path_data.opm & VAR_8) &&
       !(VAR_9->path_data.tbvpm & VAR_8)) {





    VAR_9->path_data.tbvpm |= VAR_8;
    FUNC_5(VAR_9);
   }
   FUNC_0(VAR_0, VAR_9, "%s",
          "Pathgroup re-established\n");
   if (VAR_9->discipline->kick_validate)
    VAR_9->discipline->kick_validate(VAR_9);
  }
 }
 FUNC_4(VAR_9);
}
