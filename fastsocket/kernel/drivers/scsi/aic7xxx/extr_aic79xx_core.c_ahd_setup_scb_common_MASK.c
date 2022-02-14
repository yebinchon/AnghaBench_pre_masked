
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scb {int flags; int sense_busaddr; TYPE_4__* hscb; scalar_t__ crc_retry_count; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_5__ {int sense_addr; } ;
struct TYPE_6__ {TYPE_1__ cdb_plus_saddr; } ;
struct TYPE_7__ {TYPE_2__ idata; } ;
struct TYPE_8__ {int task_attribute; int control; int cdb_len; TYPE_3__ shared_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scb*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ahd_softc *VAR_5, struct scb *VAR_6)
{

 VAR_6->crc_retry_count = 0;
 if ((VAR_6->flags & VAR_2) != 0) {

  VAR_6->hscb->task_attribute = VAR_6->hscb->control & VAR_3;
 } else {
  if (FUNC_0(VAR_6) & 0x01)
   VAR_6->hscb->task_attribute = VAR_4;
  else
   VAR_6->hscb->task_attribute = 0;
 }

 if (VAR_6->hscb->cdb_len <= VAR_0
  || (VAR_6->hscb->cdb_len & VAR_1) != 0)
  VAR_6->hscb->shared_data.idata.cdb_plus_saddr.sense_addr =
      FUNC_1(VAR_6->sense_busaddr);
}
