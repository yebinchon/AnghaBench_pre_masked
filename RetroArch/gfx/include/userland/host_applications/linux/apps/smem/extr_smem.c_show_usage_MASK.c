
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1( void )
{
   FUNC_0( "Usage: smem [OPTION]..." );
   FUNC_0( "  -a, --alloc=SIZE             Allocates a block of SIZE" );
   FUNC_0( "  -p, --pid=PID                Use PID for desired action" );
   FUNC_0( "  -s, --status=TYPE            Queries status of TYPE [for PID]" );
   FUNC_0( "                all                    all (for current pid)" );
   FUNC_0( "                vc                     videocore allocations" );
   FUNC_0( "                map                    host map status" );
   FUNC_0( "                map <pid>              host map status for pid" );
   FUNC_0( "                host <pid>             host allocations for pid" );
   FUNC_0( "  -h, --help                   Print this information" );
}
