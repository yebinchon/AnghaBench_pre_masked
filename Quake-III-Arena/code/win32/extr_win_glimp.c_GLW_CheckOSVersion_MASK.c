
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vinfo ;
typedef void* qboolean ;
struct TYPE_7__ {void* allowdisplaydepthchange; } ;
struct TYPE_6__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_5__ {int dwOSVersionInfoSize; int dwMajorVersion; scalar_t__ dwPlatformId; int dwBuildNumber; } ;
typedef TYPE_1__ OSVERSIONINFO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static qboolean FUNC_3( void )
{


 OSVERSIONINFO VAR_8;

 VAR_8.dwOSVersionInfoSize = sizeof(VAR_8);

 VAR_4.allowdisplaydepthchange = VAR_5;

 if ( FUNC_0( &VAR_8) )
 {
  if ( VAR_8.dwMajorVersion > 4 )
  {
   VAR_4.allowdisplaydepthchange = VAR_6;
  }
  else if ( VAR_8.dwMajorVersion == 4 )
  {
   if ( VAR_8.dwPlatformId == VAR_2 )
   {
    VAR_4.allowdisplaydepthchange = VAR_6;
   }
   else if ( VAR_8.dwPlatformId == VAR_3 )
   {
    if ( FUNC_1( VAR_8.dwBuildNumber ) >= 1111 )
    {
     VAR_4.allowdisplaydepthchange = VAR_6;
    }
   }
  }
 }
 else
 {
  VAR_7.Printf( VAR_1, "GLW_CheckOSVersion() - GetVersionEx failed\n" );
  return VAR_5;
 }

 return VAR_6;
}
