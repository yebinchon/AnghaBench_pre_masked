
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int socket; int ctl_socket; } ;
struct TYPE_5__ {int chunk_size; void* latency; } ;
struct TYPE_7__ {int buffer_size; int conn_type; TYPE_2__ conn; int * fifo_buffer; TYPE_1__ backend_info; } ;
typedef TYPE_3__ rsound_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,void**,scalar_t__,int) ;
 int FUNC_7 (void**) ;
 int FUNC_8 (int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_9 ( rsound_t *VAR_14 )
{





   uint32_t VAR_15[2] = {0};

   if ( FUNC_6(VAR_14->conn.socket, VAR_15, 8, 1) != 8 )
   {
      FUNC_1("[RSound] Couldn't receive chunk.\n");
      return -1;
   }



   if ( FUNC_5() )
   {
      FUNC_7(&VAR_15[0]);
      FUNC_7(&VAR_15[1]);
   }

   VAR_14->backend_info.latency = VAR_15[0];
   VAR_14->backend_info.chunk_size = VAR_15[1];


   if ( VAR_14->backend_info.chunk_size > 1024 || VAR_14->backend_info.chunk_size <= 0 )
      VAR_14->backend_info.chunk_size = 1024;


   if ( VAR_14->buffer_size == 0 || VAR_14->buffer_size < VAR_14->backend_info.chunk_size * 2 )
      VAR_14->buffer_size = VAR_14->backend_info.chunk_size * 32;

   if ( VAR_14->fifo_buffer != ((void*)0) )
      FUNC_2(VAR_14->fifo_buffer);
   VAR_14->fifo_buffer = FUNC_3 (VAR_14->buffer_size);
   if ( VAR_14->fifo_buffer == ((void*)0) )
   {
      FUNC_1("[RSound] Failed to create FIFO buffer.\n");
      return -1;
   }


   if ( VAR_14->conn_type & VAR_6 )
   {

      int VAR_16 = VAR_14->buffer_size;
      if (VAR_16 > (1 << 14))
         VAR_16 = (1 << 14);

      FUNC_8(VAR_14->conn.socket, VAR_10, VAR_12, &VAR_16, sizeof(int));
      VAR_16 = VAR_14->buffer_size;
      FUNC_8(VAR_14->conn.ctl_socket, VAR_10, VAR_12, &VAR_16, sizeof(int));
      VAR_16 = VAR_14->buffer_size;
      FUNC_8(VAR_14->conn.ctl_socket, VAR_10, VAR_11, &VAR_16, sizeof(int));

      int VAR_17 = 1;
      FUNC_8(VAR_14->conn.socket, VAR_1, VAR_13, &VAR_17, sizeof(int));
      VAR_17 = 1;
      FUNC_8(VAR_14->conn.ctl_socket, VAR_1, VAR_13, &VAR_17, sizeof(int));
   }



   if ( FUNC_6(VAR_14->conn.socket, VAR_15, 8, 0) == 8 )
      VAR_14->conn_type |= VAR_5;
   else
   { FUNC_0("[RSound] Failed to get new proto.\n"); }





   FUNC_4(VAR_14->conn.socket, VAR_9);


   return 0;
}
