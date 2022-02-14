
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* mode; } ;
struct TYPE_7__ {char* mode; } ;
struct TYPE_6__ {char* mode; } ;
struct TYPE_5__ {char* mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(char *VAR_11)
{
   int VAR_12;

   FUNC_0(VAR_10, "Display camera output to display, and optionally saves an H264 capture at requested bitrate\n\n");
   FUNC_0(VAR_10, "\nusage: %s [options]\n\n", VAR_11);

   FUNC_0(VAR_10, "Image parameter commands\n\n");

   FUNC_1(VAR_0, VAR_1);


   FUNC_0(VAR_10, "\n\nH264 Profile options :\n%s", VAR_6[0].mode );

   for (VAR_12=1; VAR_12<VAR_7; VAR_12++)
   {
      FUNC_0(VAR_10, ",%s", VAR_6[VAR_12].mode);
   }


   FUNC_0(VAR_10, "\n\nH264 Level options :\n%s", VAR_4[0].mode );

   for (VAR_12=1; VAR_12<VAR_5; VAR_12++)
   {
      FUNC_0(VAR_10, ",%s", VAR_4[VAR_12].mode);
   }


   FUNC_0(VAR_10, "\n\nH264 Intra refresh options :\n%s", VAR_2[0].mode );

   for (VAR_12=1; VAR_12<VAR_3; VAR_12++)
   {
      FUNC_0(VAR_10, ",%s", VAR_2[VAR_12].mode);
   }


   FUNC_0(VAR_10, "\n\nRaw output format options :\n%s", VAR_8[0].mode );

   for (VAR_12=1; VAR_12<VAR_9; VAR_12++)
   {
      FUNC_0(VAR_10, ",%s", VAR_8[VAR_12].mode);
   }

   FUNC_0(VAR_10, "\n\n");

   FUNC_0(VAR_10, "Raspivid allows output to a remote IPv4 host e.g. -o tcp://192.168.1.2:1234"
           "or -o udp://192.168.1.2:1234\n"
           "To listen on a TCP port (IPv4) and wait for an incoming connection use the -l option\n"
           "e.g. raspivid -l -o tcp://0.0.0.0:3333 -> bind to all network interfaces,\n"
           "raspivid -l -o tcp://192.168.1.1:3333 -> bind to a certain local IPv4 port\n");

   return;
}
