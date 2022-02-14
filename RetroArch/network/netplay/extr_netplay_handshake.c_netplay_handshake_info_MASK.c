
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct retro_system_info {char* library_name; char* library_version; } ;
struct netplay_connection {int mode; int fd; int send_packet_buffer; } ;
struct info_buf_s {void* content_crc; int core_version; int core_name; void** cmd; } ;
typedef int netplay_t ;
typedef int info_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct info_buf_s*,int ,int) ;
 int FUNC_3 (int *,int ,struct info_buf_s*,int) ;
 int FUNC_4 (int *,int ,int) ;
 struct retro_system_info* FUNC_5 () ;
 int FUNC_6 (int ,char*,int) ;

bool FUNC_7(netplay_t *VAR_2,
      struct netplay_connection *VAR_3)
{
   struct info_buf_s VAR_4;
   uint32_t VAR_5 = 0;
   struct retro_system_info *VAR_6 = FUNC_5();

   FUNC_2(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.cmd[0] = FUNC_1(VAR_0);
   VAR_4.cmd[1] = FUNC_1(sizeof(VAR_4) - 2*sizeof(uint32_t));


   if (VAR_6)
   {
      FUNC_6(VAR_4.core_name,
            VAR_6->library_name, sizeof(VAR_4.core_name));
      FUNC_6(VAR_4.core_version,
            VAR_6->library_version, sizeof(VAR_4.core_version));
   }
   else
   {
      FUNC_6(VAR_4.core_name,
            "UNKNOWN", sizeof(VAR_4.core_name));
      FUNC_6(VAR_4.core_version,
            "UNKNOWN", sizeof(VAR_4.core_version));
   }


   VAR_5 = FUNC_0();

   if (VAR_5 != 0)
      VAR_4.content_crc = FUNC_1(VAR_5);


   if (!FUNC_3(&VAR_3->send_packet_buffer, VAR_3->fd,
         &VAR_4, sizeof(VAR_4)) ||
       !FUNC_4(&VAR_3->send_packet_buffer, VAR_3->fd,
         0))
      return 0;

   VAR_3->mode = VAR_1;
   return 1;
}
