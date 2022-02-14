
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_22__ {TYPE_6__* bristats; TYPE_3__* pristats; } ;
struct TYPE_19__ {unsigned long tx_good; unsigned long tx_bad; unsigned long rx_good; unsigned long rx_bad; } ;
struct TYPE_24__ {scalar_t__ modelid; TYPE_7__ status; TYPE_4__ dch_stats; scalar_t__ l2_status; scalar_t__ l1_status; int proc_ver; int load_ver; int interface; int ramsize; int irq; int rambase; int iobase; int part_no; int serial_no; } ;
typedef TYPE_9__ boardInfo ;
struct TYPE_23__ {scalar_t__* byte_array; } ;
struct TYPE_20__ {unsigned long tx_good; unsigned long tx_bad; unsigned long rx_good; unsigned long rx_bad; } ;
struct TYPE_21__ {int dn; int spid; TYPE_5__ link_stats; scalar_t__ call_type; scalar_t__ phy_stat; } ;
struct TYPE_17__ {unsigned long tx_good; unsigned long tx_bad; unsigned long rx_good; unsigned long rx_bad; } ;
struct TYPE_18__ {TYPE_2__ link_stats; scalar_t__ serv_state; scalar_t__ call_state; scalar_t__ call_type; scalar_t__ phy_stat; } ;
struct TYPE_16__ {int st_u_sense; int ram_size; scalar_t__* part_no; scalar_t__* serial_no; } ;
struct TYPE_15__ {scalar_t__ model; int nChannels; scalar_t__* proc_ver; scalar_t__* load_ver; TYPE_1__ hwconfig; int interrupt; int rambase; int iobase; } ;
struct TYPE_14__ {TYPE_8__ msg_data; } ;
typedef TYPE_10__ RspMessage ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_17 ;
 TYPE_12__** VAR_18 ;
 int FUNC_0 (int,int ,int ,int ,int ,int,int ,int *,TYPE_10__*,int ) ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(int VAR_19, boardInfo *VAR_20)
{
 RspMessage VAR_21;
 int VAR_22, VAR_23;




 VAR_20->modelid = VAR_18[VAR_19]->model;
 FUNC_1(VAR_20->serial_no, VAR_18[VAR_19]->hwconfig.serial_no);
 FUNC_1(VAR_20->part_no, VAR_18[VAR_19]->hwconfig.part_no);
 VAR_20->iobase = VAR_18[VAR_19]->iobase;
 VAR_20->rambase = VAR_18[VAR_19]->rambase;
 VAR_20->irq = VAR_18[VAR_19]->interrupt;
 VAR_20->ramsize = VAR_18[VAR_19]->hwconfig.ram_size;
 VAR_20->interface = VAR_18[VAR_19]->hwconfig.st_u_sense;
 FUNC_1(VAR_20->load_ver, VAR_18[VAR_19]->load_ver);
 FUNC_1(VAR_20->proc_ver, VAR_18[VAR_19]->proc_ver);




 VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_16, VAR_9,
  VAR_13, 0, 0, ((void*)0), &VAR_21, VAR_4);
 if(!VAR_23) {
  if(VAR_18[VAR_19]->model < VAR_2) {
   VAR_20->l1_status = VAR_21.msg_data.byte_array[2];
   for(VAR_22 = 0 ; VAR_22 < VAR_0 ; VAR_22++)
    VAR_20->status.bristats[VAR_22].phy_stat =
     VAR_21.msg_data.byte_array[VAR_22];
  }
  else {
   VAR_20->l1_status = VAR_21.msg_data.byte_array[0];
   VAR_20->l2_status = VAR_21.msg_data.byte_array[1];
   for(VAR_22 = 0 ; VAR_22 < VAR_3 ; VAR_22++)
    VAR_20->status.pristats[VAR_22].phy_stat =
     VAR_21.msg_data.byte_array[VAR_22+2];
  }
 }




 for (VAR_22 = 0 ; VAR_22 < VAR_18[VAR_19]->nChannels ; VAR_22++) {
  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_14, VAR_8,
   VAR_5, 0, 0, ((void*)0), &VAR_21, VAR_4);
  if(!VAR_23) {
   if (VAR_18[VAR_19]->model == VAR_2) {
    VAR_20->status.pristats[VAR_22].call_type =
     VAR_21.msg_data.byte_array[0];
   }
   else {
    VAR_20->status.bristats[VAR_22].call_type =
     VAR_21.msg_data.byte_array[0];
   }
  }
 }




 if (VAR_18[VAR_19]->model == VAR_2) {



  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_17, VAR_9,
   VAR_11, 0, 0, ((void*)0), &VAR_21, VAR_4);
  if(!VAR_23) {
   for( VAR_22 = 0 ; VAR_22 < VAR_3 ; VAR_22++ )
    VAR_20->status.pristats[VAR_22].call_state =
     VAR_21.msg_data.byte_array[VAR_22];
  }




  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_17, VAR_9,
   VAR_12, 0, 0, ((void*)0), &VAR_21, VAR_4);
  if(!VAR_23) {
   for( VAR_22 = 0 ; VAR_22 < VAR_3 ; VAR_22++ )
    VAR_20->status.pristats[VAR_22].serv_state =
     VAR_21.msg_data.byte_array[VAR_22];
  }




  for (VAR_22 = 1 ; VAR_22 <= VAR_3 ; VAR_22++) {
   VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_15, VAR_8,
    VAR_10, VAR_22, 0, ((void*)0), &VAR_21, VAR_4);
   if (!VAR_23) {
    VAR_20->status.pristats[VAR_22-1].link_stats.tx_good =
     (unsigned long)VAR_21.msg_data.byte_array[0];
    VAR_20->status.pristats[VAR_22-1].link_stats.tx_bad =
     (unsigned long)VAR_21.msg_data.byte_array[4];
    VAR_20->status.pristats[VAR_22-1].link_stats.rx_good =
     (unsigned long)VAR_21.msg_data.byte_array[8];
    VAR_20->status.pristats[VAR_22-1].link_stats.rx_bad =
     (unsigned long)VAR_21.msg_data.byte_array[12];
   }
  }




  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_15, VAR_8,
   VAR_10, 0, 0, ((void*)0), &VAR_21, VAR_4);
  if (!VAR_23) {
   VAR_20->dch_stats.tx_good = (unsigned long)VAR_21.msg_data.byte_array[0];
   VAR_20->dch_stats.tx_bad = (unsigned long)VAR_21.msg_data.byte_array[4];
   VAR_20->dch_stats.rx_good = (unsigned long)VAR_21.msg_data.byte_array[8];
   VAR_20->dch_stats.rx_bad = (unsigned long)VAR_21.msg_data.byte_array[12];
  }

  return 0;
 }
 VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_15, VAR_8,
  VAR_10, 0, 0, ((void*)0), &VAR_21, VAR_4);
 if (!VAR_23) {
  VAR_20->dch_stats.tx_good = (unsigned long)VAR_21.msg_data.byte_array[0];
  VAR_20->dch_stats.tx_bad = (unsigned long)VAR_21.msg_data.byte_array[4];
  VAR_20->dch_stats.rx_good = (unsigned long)VAR_21.msg_data.byte_array[8];
  VAR_20->dch_stats.rx_bad = (unsigned long)VAR_21.msg_data.byte_array[12];
  VAR_20->status.bristats[0].link_stats.tx_good =
   (unsigned long)VAR_21.msg_data.byte_array[16];
  VAR_20->status.bristats[0].link_stats.tx_bad =
   (unsigned long)VAR_21.msg_data.byte_array[20];
  VAR_20->status.bristats[0].link_stats.rx_good =
   (unsigned long)VAR_21.msg_data.byte_array[24];
  VAR_20->status.bristats[0].link_stats.rx_bad =
   (unsigned long)VAR_21.msg_data.byte_array[28];
  VAR_20->status.bristats[1].link_stats.tx_good =
   (unsigned long)VAR_21.msg_data.byte_array[32];
  VAR_20->status.bristats[1].link_stats.tx_bad =
   (unsigned long)VAR_21.msg_data.byte_array[36];
  VAR_20->status.bristats[1].link_stats.rx_good =
   (unsigned long)VAR_21.msg_data.byte_array[40];
  VAR_20->status.bristats[1].link_stats.rx_bad =
   (unsigned long)VAR_21.msg_data.byte_array[44];
 }




 for (VAR_22 = 0 ; VAR_22 < VAR_0 ; VAR_22++) {
  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_14, VAR_8,
   VAR_7, VAR_22+1, 0, ((void*)0), &VAR_21, VAR_4);
  if (!VAR_23)
   FUNC_1(VAR_20->status.bristats[VAR_22].spid, VAR_21.msg_data.byte_array);
 }




 for (VAR_22 = 0 ; VAR_22 < VAR_0 ; VAR_22++) {
  VAR_23 = FUNC_0(VAR_19, VAR_1, VAR_14, VAR_8,
   VAR_6, VAR_22+1, 0, ((void*)0), &VAR_21, VAR_4);
  if (!VAR_23)
   FUNC_1(VAR_20->status.bristats[VAR_22].dn, VAR_21.msg_data.byte_array);
 }

 return 0;
}
