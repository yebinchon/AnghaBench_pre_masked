
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_8__ {int socket; } ;
struct TYPE_9__ {int fifo_buffer; TYPE_1__ conn; } ;
typedef TYPE_2__ rsound_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int,char*,int,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int,int ,int ,int*,int) ;

int FUNC_13(rsound_t *VAR_4)
{
   FUNC_6(VAR_4 != ((void*)0));
   FUNC_0("[RSound] rsd_exec().\n");


   if ( VAR_4->conn.socket < 0 )
   {
      FUNC_0("[RSound] Calling rsd_start().\n");
      if ( FUNC_8(VAR_4) < 0 )
      {
         FUNC_1("[RSound] rsd_start() failed.\n");
         return -1;
      }
   }

   FUNC_0("[RSound] Closing ctl.\n");
   if ( FUNC_9(VAR_4) < 0 )
      return -1;

   int VAR_5 = VAR_4->conn.socket;
   FUNC_0("[RSound] Socket: %d.\n", VAR_5);

   FUNC_11(VAR_4);





   FUNC_2(VAR_4->conn.socket, VAR_0, VAR_1);




   if ( FUNC_4(VAR_4->fifo_buffer) > 0 )
   {
      char VAR_6[FUNC_4(VAR_4->fifo_buffer)];
      FUNC_3(VAR_4->fifo_buffer, VAR_6, sizeof(VAR_6));
      if ( FUNC_10(VAR_5, VAR_6, sizeof(VAR_6), 1) != (ssize_t)sizeof(VAR_6) )
      {
         FUNC_0("[RSound] Failed flushing buffer.\n");
         FUNC_5(VAR_5);
         return -1;
      }
   }

   FUNC_0("[RSound] Returning from rsd_exec().\n");
   FUNC_7(VAR_4);
   return VAR_5;
}
