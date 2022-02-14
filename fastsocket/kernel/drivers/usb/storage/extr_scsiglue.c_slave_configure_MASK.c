
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct us_data {int fflags; scalar_t__ subclass; scalar_t__ protocol; int use_last_sector_hacks; scalar_t__ max_lun; TYPE_4__* pusb_dev; } ;
struct scsi_device {scalar_t__ type; int use_10_for_ms; int use_192_bytes_for_3f; int skip_ms_page_3f; int skip_ms_page_8; int fix_capacity; int guess_capacity; scalar_t__ scsi_level; int retry_hwerror; int allow_restart; int last_sector_bug; scalar_t__ lockable; TYPE_5__* sdev_target; int request_queue; int host; } ;
struct TYPE_10__ {scalar_t__ scsi_level; } ;
struct TYPE_8__ {int idVendor; } ;
struct TYPE_9__ {TYPE_3__ descriptor; TYPE_2__* bus; } ;
struct TYPE_7__ {TYPE_1__* controller; } ;
struct TYPE_6__ {int dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct us_data* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_21)
{
 struct us_data *VAR_22 = FUNC_2(VAR_21->host);





 if (VAR_22->fflags & (VAR_10 | VAR_11)) {
  unsigned int VAR_23 = 64;

  if (VAR_22->fflags & VAR_11)
   VAR_23 = VAR_1 >> 9;
  if (FUNC_4(VAR_21->request_queue) > VAR_23)
   FUNC_1(VAR_21->request_queue,
           VAR_23);
 } else if (VAR_21->type == VAR_6) {




  FUNC_1(VAR_21->request_queue, 0x7FFFFF);
 }






 if (!VAR_22->pusb_dev->bus->controller->dma_mask)
  FUNC_0(VAR_21->request_queue, VAR_0);




 if (VAR_21->type == VAR_5) {







  switch (FUNC_3(VAR_22->pusb_dev->descriptor.idVendor)) {
  case 129:
  case 130:
  case 128:
  case 131:
   if (!(VAR_22->fflags & (VAR_9 |
     VAR_8)))
    VAR_22->fflags |= VAR_7;
   break;
  }




  if (VAR_22->subclass != VAR_20 && VAR_22->subclass != VAR_19)
   VAR_21->use_10_for_ms = 1;



  VAR_21->use_192_bytes_for_3f = 1;
  if (VAR_22->fflags & VAR_13)
   VAR_21->skip_ms_page_3f = 1;



  VAR_21->skip_ms_page_8 = 1;




  if (VAR_22->fflags & VAR_9)
   VAR_21->fix_capacity = 1;




  if (VAR_22->fflags & VAR_7)
   VAR_21->guess_capacity = 1;


  if (VAR_21->scsi_level > VAR_3)
   VAR_22->fflags |= VAR_14;







  if (VAR_21->scsi_level > VAR_2)
   VAR_21->sdev_target->scsi_level =
     VAR_21->scsi_level = VAR_2;







  VAR_21->retry_hwerror = 1;



  VAR_21->allow_restart = 1;




  VAR_21->last_sector_bug = 1;




  if (!(VAR_22->fflags & (VAR_9 | VAR_8 |
     VAR_15)) &&
    VAR_22->protocol == VAR_16)
   VAR_22->use_last_sector_hacks = 1;
 } else {




  VAR_21->use_10_for_ms = 1;
 }







 if ((VAR_22->protocol == VAR_17 || VAR_22->protocol == VAR_18) &&
   VAR_21->scsi_level == VAR_4)
  VAR_22->max_lun = 0;



 if (VAR_22->fflags & VAR_12)
  VAR_21->lockable = 0;



 return 0;
}
