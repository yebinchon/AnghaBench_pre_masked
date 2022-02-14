
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct netplay_connection {int salt; int fd; int send_packet_buffer; } ;
struct TYPE_6__ {scalar_t__* netplay_spectate_password; scalar_t__* netplay_password; } ;
struct TYPE_7__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {scalar_t__ is_server; } ;
typedef TYPE_3__ netplay_t ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,scalar_t__*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int *) ;

bool FUNC_9(netplay_t *VAR_4,
   struct netplay_connection *VAR_5)
{
   uint32_t VAR_6[6];
   settings_t *VAR_7 = FUNC_0();

   VAR_6[0] = FUNC_1(VAR_2);
   VAR_6[1] = FUNC_1(FUNC_3());
   VAR_6[2] = FUNC_1(VAR_0);
   VAR_6[3] = 0;
   VAR_6[4] = FUNC_1(VAR_1);
   VAR_6[5] = FUNC_1(FUNC_2());

   if (VAR_4->is_server &&
       (VAR_7->paths.netplay_password[0] ||
        VAR_7->paths.netplay_spectate_password[0]))
   {

      if (VAR_3 == 1)
         FUNC_7((unsigned int) FUNC_8(((void*)0)));
      VAR_5->salt = FUNC_6();
      if (VAR_5->salt == 0)
         VAR_5->salt = 1;
      VAR_6[3] = FUNC_1(VAR_5->salt);
   }
   else
   {
      VAR_6[3] = FUNC_1(0);
   }

   if (!FUNC_4(&VAR_5->send_packet_buffer, VAR_5->fd, VAR_6,
         sizeof(VAR_6)) ||
       !FUNC_5(&VAR_5->send_packet_buffer, VAR_5->fd, 0))
      return 0;

   return 1;
}
