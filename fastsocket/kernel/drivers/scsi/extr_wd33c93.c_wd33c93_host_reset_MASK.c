
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_1__* device; } ;
struct WD33C93_hostdata {scalar_t__ outgoing_len; scalar_t__ incoming_ptr; int dma; int state; int * disconnected_Q; int * connected; int * selecting; int * input_Q; int * sync_stat; int sx_table; int * sync_xfer; scalar_t__* busy; int (* dma_stop ) (struct Scsi_Host*,int *,int ) ;} ;
struct Scsi_Host {int irq; int host_no; scalar_t__ hostdata; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*,int *,int ) ;

int
FUNC_6(struct scsi_cmnd * VAR_7)
{
 struct Scsi_Host *VAR_8;
 struct WD33C93_hostdata *VAR_9;
 int VAR_10;

 VAR_8 = VAR_7->device->host;
 VAR_9 = (struct WD33C93_hostdata *) VAR_8->hostdata;

 FUNC_3("scsi%d: reset. ", VAR_8->host_no);
 FUNC_1(VAR_8->irq);

 VAR_9->dma_stop(VAR_8, ((void*)0), 0);
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  VAR_9->busy[VAR_10] = 0;
  VAR_9->sync_xfer[VAR_10] =
   FUNC_0(VAR_1 / 4, VAR_0,
     0, VAR_9->sx_table);
  VAR_9->sync_stat[VAR_10] = VAR_4;
 }
 VAR_9->input_Q = ((void*)0);
 VAR_9->selecting = ((void*)0);
 VAR_9->connected = ((void*)0);
 VAR_9->disconnected_Q = ((void*)0);
 VAR_9->state = VAR_6;
 VAR_9->dma = VAR_3;
 VAR_9->incoming_ptr = 0;
 VAR_9->outgoing_len = 0;

 FUNC_4(VAR_8);
 VAR_7->result = VAR_2 << 16;
 FUNC_2(VAR_8->irq);
 return VAR_5;
}
