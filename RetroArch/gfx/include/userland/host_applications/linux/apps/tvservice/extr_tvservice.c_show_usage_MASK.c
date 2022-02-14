
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1( void )
{
   FUNC_0( "Usage: tvservice [OPTION]..." );
   FUNC_0( "  -p, --preferred                   Power on HDMI with preferred settings" );
   FUNC_0( "  -e, --explicit=\"GROUP MODE DRIVE\" Power on HDMI with explicit GROUP (CEA, DMT, CEA_3D_SBS, CEA_3D_TB, CEA_3D_FP, CEA_3D_FS)\n"
            "                                      MODE (see --modes) and DRIVE (HDMI, DVI)" );
   FUNC_0( "  -t, --ntsc                        Use NTSC frequency for HDMI mode (e.g. 59.94Hz rather than 60Hz)" );
   FUNC_0( "  -c, --sdtvon=\"MODE ASPECT [P]\"    Power on SDTV with MODE (PAL or NTSC) and ASPECT (4:3 14:9 or 16:9) Add P for progressive" );
   FUNC_0( "  -o, --off                         Power off the display" );
   FUNC_0( "  -m, --modes=GROUP                 Get supported modes for GROUP (CEA, DMT)" );
   FUNC_0( "  -M, --monitor                     Monitor HDMI events" );
   FUNC_0( "  -s, --status                      Get HDMI status" );
   FUNC_0( "  -a, --audio                       Get supported audio information" );
   FUNC_0( "  -d, --dumpedid <filename>         Dump EDID information to file" );
   FUNC_0( "  -j, --json                        Use JSON format for --modes output" );
   FUNC_0( "  -n, --name                        Print the device ID from EDID" );
   FUNC_0( "  -h, --help                        Print this information" );
}
