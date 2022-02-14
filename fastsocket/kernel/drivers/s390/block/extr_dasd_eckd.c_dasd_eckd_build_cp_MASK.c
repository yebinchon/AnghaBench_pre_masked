
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {int* feature; } ;
struct dasd_eckd_private {unsigned int fcx_max_data; TYPE_1__ features; scalar_t__ uses_cdl; int rdc_data; } ;
struct dasd_device {scalar_t__ private; } ;
struct dasd_ccw_req {int dummy; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; struct dasd_device* base; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dasd_ccw_req* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 struct dasd_ccw_req* FUNC_6 (struct dasd_device*,struct dasd_block*,struct request*,int,int,int,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct dasd_ccw_req* FUNC_7 (struct dasd_device*,struct dasd_block*,struct request*,int,int,int,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct dasd_ccw_req* FUNC_8 (struct dasd_device*,struct dasd_block*,struct request*,int,int,int,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_9 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_10 (struct request*) ;
 unsigned int FUNC_11 (int,unsigned int) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_12(struct dasd_device *VAR_6,
            struct dasd_block *VAR_7,
            struct request *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12;
 struct dasd_eckd_private *VAR_13;
 struct dasd_device *VAR_14;
 sector_t VAR_15, VAR_16;
 sector_t VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22;
 int VAR_23;
 unsigned int VAR_24;
 struct dasd_ccw_req *VAR_25;

 VAR_14 = VAR_7->base;
 VAR_13 = (struct dasd_eckd_private *) VAR_14->private;


 VAR_22 = VAR_7->bp_block;
 VAR_21 = FUNC_9(&VAR_13->rdc_data, 0, VAR_22);
 if (VAR_21 == 0)
  return FUNC_0(-VAR_1);

 VAR_15 = VAR_17 = FUNC_4(VAR_8) >> VAR_7->s2b_shift;
 VAR_19 = FUNC_11(VAR_17, VAR_21);
 VAR_16 = VAR_18 =
  (FUNC_4(VAR_8) + FUNC_5(VAR_8) - 1) >> VAR_7->s2b_shift;
 VAR_20 = FUNC_11(VAR_18, VAR_21);
 VAR_23 = (VAR_13->uses_cdl && VAR_15 < 2*VAR_21);

 VAR_12 = VAR_13->features.feature[40] & 0x20;
 VAR_24 = FUNC_3(VAR_8);

 if (FUNC_10(VAR_8) == VAR_4)
  VAR_24 += (VAR_18 - VAR_17) * 4;


 VAR_9 = VAR_13->features.feature[9] & 0x20;
 VAR_10 = VAR_13->features.feature[12] & 0x40;
 VAR_11 = VAR_13->features.feature[8] & 0x01;

 VAR_25 = ((void*)0);
 if (VAR_23 || VAR_5) {

 } else if ((VAR_24 <= VAR_13->fcx_max_data)
     && (VAR_12 || (VAR_17 == VAR_18))) {
  VAR_25 = FUNC_8(VAR_6, VAR_7, VAR_8,
          VAR_15, VAR_16,
          VAR_17, VAR_18,
          VAR_19, VAR_20,
          VAR_21, VAR_22);
  if (FUNC_1(VAR_25) && (FUNC_2(VAR_25) != -VAR_0) &&
      (FUNC_2(VAR_25) != -VAR_2))
   VAR_25 = ((void*)0);
 } else if (VAR_11 &&
     (((FUNC_10(VAR_8) == VAR_3) && VAR_9) ||
      ((FUNC_10(VAR_8) == VAR_4) && VAR_10))) {
  VAR_25 = FUNC_7(VAR_6, VAR_7, VAR_8,
         VAR_15, VAR_16,
         VAR_17, VAR_18,
         VAR_19, VAR_20,
         VAR_21, VAR_22);
  if (FUNC_1(VAR_25) && (FUNC_2(VAR_25) != -VAR_0) &&
      (FUNC_2(VAR_25) != -VAR_2))
   VAR_25 = ((void*)0);
 }
 if (!VAR_25)
  VAR_25 = FUNC_6(VAR_6, VAR_7, VAR_8,
          VAR_15, VAR_16,
          VAR_17, VAR_18,
          VAR_19, VAR_20,
          VAR_21, VAR_22);
 return VAR_25;
}
