
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dwOSVersionInfoSize; int dwMajorVersion; scalar_t__ dwPlatformId; int dwBuildNumber; } ;
struct TYPE_3__ {scalar_t__ hInstance; TYPE_2__ osversion; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_14 (int) ;
 char* FUNC_15 (char*,int) ;

void FUNC_16( void ) {
 int VAR_11;



 FUNC_14( 1 );

 FUNC_0 ("in_restart", VAR_4);
 FUNC_0 ("net_restart", VAR_5);

 VAR_10.osversion.dwOSVersionInfoSize = sizeof( VAR_10.osversion );

 if (!FUNC_7 (&VAR_10.osversion))
  FUNC_11 ("Couldn't get OS info");

 if (VAR_10.osversion.dwMajorVersion < 4)
  FUNC_11 ("Quake3 requires Windows version 4 or greater");
 if (VAR_10.osversion.dwPlatformId == VAR_8)
  FUNC_11 ("Quake3 doesn't run on Win32s");

 if ( VAR_10.osversion.dwPlatformId == VAR_6 )
 {
  FUNC_4( "arch", "winnt" );
 }
 else if ( VAR_10.osversion.dwPlatformId == VAR_7 )
 {
  if ( FUNC_9( VAR_10.osversion.dwBuildNumber ) >= VAR_9 )
  {
   FUNC_4( "arch", "win98" );
  }
  else if ( FUNC_9( VAR_10.osversion.dwBuildNumber ) >= VAR_3 )
  {
   FUNC_4( "arch", "win95 osr2.x" );
  }
  else
  {
   FUNC_4( "arch", "win95" );
  }
 }
 else
 {
  FUNC_4( "arch", "unknown Windows variant" );
 }


 FUNC_3( "win_hinstance", FUNC_15("%i", (int)VAR_10.hInstance), VAR_0 );
 FUNC_3( "win_wndproc", FUNC_15("%i", (int)VAR_2), VAR_0 );




 FUNC_3( "sys_cpustring", "detect", 0 );
 if ( !FUNC_10( FUNC_6( "sys_cpustring"), "detect" ) )
 {
  FUNC_2( "...detecting CPU, found " );

  VAR_11 = FUNC_13();

  switch ( VAR_11 )
  {
  case 132:
   FUNC_4( "sys_cpustring", "generic" );
   break;
  case 128:
   FUNC_4( "sys_cpustring", "x86 (pre-Pentium)" );
   break;
  case 129:
   FUNC_4( "sys_cpustring", "x86 (P5/PPro, non-MMX)" );
   break;
  case 130:
   FUNC_4( "sys_cpustring", "x86 (P5/Pentium2, MMX)" );
   break;
  case 131:
   FUNC_4( "sys_cpustring", "Intel Pentium III" );
   break;
  case 134:
   FUNC_4( "sys_cpustring", "AMD w/ 3DNow!" );
   break;
  case 133:
   FUNC_4( "sys_cpustring", "Alpha AXP" );
   break;
  default:
   FUNC_1( VAR_1, "Unknown cpu type %d\n", VAR_11 );
   break;
  }
 }
 else
 {
  FUNC_2( "...forcing CPU type to " );
  if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "generic" ) )
  {
   VAR_11 = 132;
  }
  else if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "x87" ) )
  {
   VAR_11 = 129;
  }
  else if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "mmx" ) )
  {
   VAR_11 = 130;
  }
  else if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "3dnow" ) )
  {
   VAR_11 = 134;
  }
  else if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "PentiumIII" ) )
  {
   VAR_11 = 131;
  }
  else if ( !FUNC_10( FUNC_6( "sys_cpustring" ), "axp" ) )
  {
   VAR_11 = 133;
  }
  else
  {
   FUNC_2( "WARNING: unknown sys_cpustring '%s'\n", FUNC_6( "sys_cpustring" ) );
   VAR_11 = 132;
  }
 }
 FUNC_5( "sys_cpuid", VAR_11 );
 FUNC_2( "%s\n", FUNC_6( "sys_cpustring" ) );

 FUNC_4( "username", FUNC_12() );

 FUNC_8();
}
