
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int filesys_parameters ;
typedef int VCOS_THREAD_ATTR_T ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;
struct TYPE_6__ {void* version_min; void* version; } ;
struct TYPE_7__ {int num_connections; int initialised; int open_handle; int filesys_thread; TYPE_1__ version; scalar_t__ want_crc; scalar_t__ want_unaligned_bulk_tx; scalar_t__ want_unaligned_bulk_rx; int filesys_msg_avail; int * callback_param; int * callback; scalar_t__ tx_fifo_size; scalar_t__ rx_fifo_size; int * connection; int service_id; scalar_t__ cur_xid; int bulk_buffer; int response_event; int filesys_lock; } ;
typedef TYPE_2__ SERVICE_CREATION_T ;
typedef int FILESYS_SERVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,char*,int *,int ,int *) ;
 int FUNC_11 (int) ;

int FUNC_12 (VCHI_INSTANCE_T VAR_7, VCHI_CONNECTION_T **VAR_8, uint32_t VAR_9 )
{
   int32_t VAR_10 = 0;
   SERVICE_CREATION_T VAR_11;
   VCOS_THREAD_ATTR_T VAR_12;
   VCOS_STATUS_T VAR_13;


   FUNC_0( &VAR_6, 0, sizeof(FILESYS_SERVICE_T) );
   VAR_6.num_connections = VAR_9;

   if(!FUNC_11(VAR_6.num_connections < 2))
      return -1;

   VAR_13 = FUNC_6(&VAR_6.filesys_lock, "HFilesys");
   FUNC_3(VAR_13 == VAR_2);

   VAR_13 = FUNC_4(&VAR_6.filesys_msg_avail, "HFilesys");
   FUNC_3(VAR_13 == VAR_2);


   VAR_13 = FUNC_4(&VAR_6.response_event, "HFilesys");
   FUNC_3(VAR_13 == VAR_2);

   VAR_6.bulk_buffer = FUNC_5(VAR_1, 16, "HFilesys bulk_recv");
   VAR_6.cur_xid = 0;

   FUNC_0(&VAR_11, 0, sizeof(VAR_11));
   VAR_11.service_id = VAR_0;
   VAR_11.connection = VAR_8[0];
   VAR_11.rx_fifo_size = 0;
   VAR_11.tx_fifo_size = 0;
   VAR_11.callback = &VAR_4;
   VAR_11.callback_param = &VAR_6.filesys_msg_avail;
   VAR_11.want_unaligned_bulk_rx = 0;
   VAR_11.want_unaligned_bulk_tx = 0;
   VAR_11.want_crc = 0;
   VAR_11.version.version = VAR_3;
   VAR_11.version.version_min = VAR_3;

   VAR_10 = FUNC_1( VAR_7, &VAR_11, &VAR_6.open_handle );
   FUNC_3( VAR_10 == 0 );

   FUNC_7(&VAR_12);
   FUNC_8(&VAR_12, 4000);
   FUNC_9(&VAR_12, 1);

   VAR_6.initialised = 1;

   VAR_13 = FUNC_10(&VAR_6.filesys_thread, "HFilesys", &VAR_12, VAR_5, ((void*)0));
   FUNC_3(VAR_13 == VAR_2);


   FUNC_2(VAR_6.open_handle);

   return (int)VAR_10;
}
