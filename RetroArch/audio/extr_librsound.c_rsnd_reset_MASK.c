
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cond; int mutex; } ;
struct TYPE_5__ {int socket; int ctl_socket; } ;
struct TYPE_7__ {TYPE_2__ thread; scalar_t__ delay_offset; scalar_t__ thread_active; scalar_t__ bytes_in_buffer; scalar_t__ has_written; scalar_t__ ready_for_data; scalar_t__ total_written; TYPE_1__ conn; } ;
typedef TYPE_3__ rsound_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(rsound_t *VAR_0)
{
   if ( VAR_0->conn.socket != -1 )
      FUNC_0(VAR_0->conn.socket);

   if ( VAR_0->conn.socket != 1 )
      FUNC_0(VAR_0->conn.ctl_socket);


   FUNC_2(VAR_0->thread.mutex);
   VAR_0->conn.socket = -1;
   VAR_0->conn.ctl_socket = -1;
   VAR_0->total_written = 0;
   VAR_0->ready_for_data = 0;
   VAR_0->has_written = 0;
   VAR_0->bytes_in_buffer = 0;
   VAR_0->thread_active = 0;
   VAR_0->delay_offset = 0;
   FUNC_3(VAR_0->thread.mutex);
   FUNC_1(VAR_0->thread.cond);

   return 0;
}
