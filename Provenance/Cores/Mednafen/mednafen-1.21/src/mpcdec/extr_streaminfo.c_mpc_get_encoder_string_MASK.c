
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoder_version; int stream_version; int encoder; } ;
typedef TYPE_1__ mpc_streaminfo ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(mpc_streaminfo* VAR_0)
{
 int VAR_1 = VAR_0->encoder_version;
 if (VAR_0->stream_version >= 8)
  VAR_1 = (VAR_0->encoder_version >> 24) * 100 + ((VAR_0->encoder_version >> 16) & 0xFF);
 if (VAR_1 <= 116) {
  if (VAR_1 == 0) {
   FUNC_0(VAR_0->encoder, "Buschmann 1.7.0...9, Klemm 0.90...1.05");
  } else {
   switch (VAR_1 % 10) {
    case 0:
     FUNC_0(VAR_0->encoder, "Release %u.%u", VAR_1 / 100,
       VAR_1 / 10 % 10);
     break;
    case 2: case 4: case 6: case 8:
     FUNC_0(VAR_0->encoder, "Beta %u.%02u", VAR_1 / 100,
       VAR_1 % 100);
     break;
    default:
     FUNC_0(VAR_0->encoder, "--Alpha-- %u.%02u",
       VAR_1 / 100, VAR_1 % 100);
     break;
   }
  }
 } else {
  int VAR_2 = VAR_0->encoder_version >> 24;
  int VAR_3 = (VAR_0->encoder_version >> 16) & 0xFF;
  int VAR_4 = (VAR_0->encoder_version >> 8) & 0xFF;
  char * VAR_5 = "--Stable--";

  if (VAR_3 & 1)
   VAR_5 = "--Unstable--";

  FUNC_0(VAR_0->encoder, "%s %u.%u.%u", VAR_5, VAR_2, VAR_3, VAR_4);
 }
}
