
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_diag_req {int bio; int block_count; } ;
struct TYPE_4__ {int flaga; int bio_list; scalar_t__ interrupt_params; int block_count; int flags; scalar_t__ key; int dev_nr; } ;
struct TYPE_3__ {int devno; } ;
struct dasd_diag_private {TYPE_2__ iob; TYPE_1__ dev_id; } ;
struct dasd_device {scalar_t__ private; } ;
struct dasd_ccw_req {scalar_t__ retries; int intrc; int status; void* stopclk; int starttime; void* startclk; scalar_t__ data; struct dasd_device* startdev; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct dasd_device*,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 void* FUNC_3 () ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_4(struct dasd_ccw_req * VAR_12)
{
 struct dasd_device *VAR_13;
 struct dasd_diag_private *VAR_14;
 struct dasd_diag_req *VAR_15;
 int VAR_16;

 VAR_13 = VAR_12->startdev;
 if (VAR_12->retries < 0) {
  FUNC_0(VAR_6, VAR_13, "DIAG start_IO: request %p "
       "- no retry left)", VAR_12);
  VAR_12->status = VAR_0;
  return -VAR_9;
 }
 VAR_14 = (struct dasd_diag_private *) VAR_13->private;
 VAR_15 = (struct dasd_diag_req *) VAR_12->data;

 VAR_14->iob.dev_nr = VAR_14->dev_id.devno;
 VAR_14->iob.key = 0;
 VAR_14->iob.flags = VAR_5;
 VAR_14->iob.block_count = VAR_15->block_count;
 VAR_14->iob.interrupt_params = (addr_t) VAR_12;
 VAR_14->iob.bio_list = VAR_15->bio;
 VAR_14->iob.flaga = VAR_4;

 VAR_12->startclk = FUNC_3();
 VAR_12->starttime = VAR_11;
 VAR_12->retries--;

 VAR_16 = FUNC_2(&VAR_14->iob, VAR_10);
 switch (VAR_16) {
 case 0:
  VAR_12->stopclk = FUNC_3();
  VAR_12->status = VAR_3;


                VAR_16 = -VAR_8;
  break;
 case 8:
  VAR_12->status = VAR_1;
  VAR_16 = 0;
  break;
 default:
  VAR_12->status = VAR_2;
  FUNC_0(VAR_7, VAR_13, "dia250 returned rc=%d", VAR_16);
  FUNC_1(VAR_13);
  VAR_16 = -VAR_9;
  break;
 }
 VAR_12->intrc = VAR_16;
 return VAR_16;
}
