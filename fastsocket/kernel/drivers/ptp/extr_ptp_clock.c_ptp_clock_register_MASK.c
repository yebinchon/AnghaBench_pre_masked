
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptp_clock_info {scalar_t__ n_alarm; int owner; scalar_t__ pps; } ;
struct TYPE_4__ {int release; int ops; } ;
struct TYPE_3__ {int lock; } ;
struct ptp_clock {int index; int tsevq_mux; int devid; scalar_t__ pps_source; TYPE_2__ clock; int dev; int tsev_wq; TYPE_1__ tsevq; struct ptp_clock_info* info; } ;
struct pps_source_info {int owner; int mode; int name; } ;
struct device {int dummy; } ;
typedef int pps ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptp_clock* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,struct ptp_clock*) ;
 int FUNC_5 (int ,struct device*,int ,struct ptp_clock*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ptp_clock*) ;
 struct ptp_clock* FUNC_10 (int,int ) ;
 int FUNC_11 (struct pps_source_info*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_15 (struct pps_source_info*,int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;
 int VAR_9 ;
 int FUNC_18 (struct ptp_clock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (struct ptp_clock*) ;
 int FUNC_20 (int ,int ,char*,int) ;
 int FUNC_21 (int *) ;

struct ptp_clock *FUNC_22(struct ptp_clock_info *VAR_13,
         struct device *VAR_14)
{
 struct ptp_clock *VAR_15;
 int VAR_16 = 0, VAR_17, VAR_18 = FUNC_2(VAR_12);

 if (VAR_13->n_alarm > VAR_5)
  return FUNC_0(-VAR_0);


 VAR_16 = -VAR_1;
 VAR_15 = FUNC_10(sizeof(struct ptp_clock), VAR_2);
 if (VAR_15 == ((void*)0))
  goto no_memory;

 VAR_17 = FUNC_7(&VAR_11, 0, VAR_3 + 1, VAR_2);
 if (VAR_17 < 0) {
  VAR_16 = VAR_17;
  goto no_slot;
 }

 VAR_15->clock.ops = VAR_10;
 VAR_15->clock.release = VAR_8;
 VAR_15->info = VAR_13;
 VAR_15->devid = FUNC_3(VAR_18, VAR_17);
 VAR_15->index = VAR_17;
 FUNC_21(&VAR_15->tsevq.lock);
 FUNC_13(&VAR_15->tsevq_mux);
 FUNC_8(&VAR_15->tsev_wq);


 VAR_15->dev = FUNC_5(VAR_9, VAR_14, VAR_15->devid, VAR_15,
     "ptp%d", VAR_15->index);
 if (FUNC_1(VAR_15->dev))
  goto no_device;

 FUNC_4(VAR_15->dev, VAR_15);

 VAR_16 = FUNC_19(VAR_15);
 if (VAR_16)
  goto no_sysfs;


 if (VAR_13->pps) {
  struct pps_source_info VAR_19;
  FUNC_11(&VAR_19, 0, sizeof(VAR_19));
  FUNC_20(VAR_19.name, VAR_4, "ptp%d", VAR_17);
  VAR_19.mode = VAR_7;
  VAR_19.owner = VAR_13->owner;
  VAR_15->pps_source = FUNC_15(&VAR_19, VAR_6);
  if (!VAR_15->pps_source) {
   FUNC_17("failed to register pps source\n");
   goto no_pps;
  }
 }


 VAR_16 = FUNC_14(&VAR_15->clock, VAR_15->devid);
 if (VAR_16) {
  FUNC_17("failed to create posix clock\n");
  goto no_clock;
 }

 return VAR_15;

no_clock:
 if (VAR_15->pps_source)
  FUNC_16(VAR_15->pps_source);
no_pps:
 FUNC_18(VAR_15);
no_sysfs:
 FUNC_6(VAR_9, VAR_15->devid);
no_device:
 FUNC_12(&VAR_15->tsevq_mux);
no_slot:
 FUNC_9(VAR_15);
no_memory:
 return FUNC_0(VAR_16);
}
