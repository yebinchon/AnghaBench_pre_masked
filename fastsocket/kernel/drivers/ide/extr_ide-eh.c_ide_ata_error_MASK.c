
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct request {int errors; } ;
typedef int ide_startstop_t ;
struct TYPE_11__ {int host_flags; TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_12__ {int dev_flags; int mult_count; int special_flags; int crc_count; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_10__ {int (* read_status ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,struct request*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int) ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static ide_startstop_t FUNC_7(ide_drive_t *VAR_20, struct request *VAR_21,
         u8 VAR_22, u8 VAR_23)
{
 ide_hwif_t *VAR_24 = VAR_20->hwif;

 if ((VAR_22 & VAR_2) ||
     ((VAR_22 & VAR_4) && (VAR_20->dev_flags & VAR_14) == 0)) {

  VAR_21->errors |= VAR_12;
 } else if (VAR_22 & VAR_6) {

  if (VAR_23 == VAR_0) {
   if ((VAR_20->dev_flags & VAR_13) &&

       VAR_24->tp_ops->read_status(VAR_24) == VAR_3)
    return VAR_19;
  } else if ((VAR_23 & VAR_9) == VAR_9) {

   VAR_20->crc_count++;
  } else if (VAR_23 & (VAR_1 | VAR_8)) {

   VAR_21->errors = VAR_10;
  } else if (VAR_23 & VAR_7) {

   VAR_21->errors |= VAR_11;
  }
 }

 if ((VAR_22 & VAR_5) && FUNC_4(VAR_21) == VAR_17 &&
     (VAR_24->host_flags & VAR_15) == 0) {
  int VAR_25 = VAR_20->mult_count ? VAR_20->mult_count : 1;

  FUNC_3(VAR_20, VAR_17, VAR_25 * VAR_18);
 }

 if (VAR_21->errors >= VAR_10 || FUNC_0(VAR_21)) {
  FUNC_2(VAR_20, VAR_21);
  return VAR_19;
 }

 if (VAR_24->tp_ops->read_status(VAR_24) & (VAR_2 | VAR_5))
  VAR_21->errors |= VAR_12;

 if ((VAR_21->errors & VAR_12) == VAR_12) {
  ++VAR_21->errors;
  return FUNC_1(VAR_20);
 }

 if ((VAR_21->errors & VAR_11) == VAR_11)
  VAR_20->special_flags |= VAR_16;

 ++VAR_21->errors;

 return VAR_19;
}
