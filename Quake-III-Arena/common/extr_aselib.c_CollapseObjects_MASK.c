
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; scalar_t__ materialRef; scalar_t__ numAnimations; } ;
struct TYPE_4__ {int currentObject; TYPE_2__* objects; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_2( void )
{
 int VAR_1;
 int VAR_2 = VAR_0.currentObject;

 for ( VAR_1 = 0; VAR_1 < VAR_2; VAR_1++ )
 {
  int VAR_3;


  if ( FUNC_1( VAR_0.objects[VAR_1].name, "tag" ) == VAR_0.objects[VAR_1].name )
  {
   continue;
  }

  if ( !VAR_0.objects[VAR_1].numAnimations )
  {
   continue;
  }

  for ( VAR_3 = VAR_1 + 1; VAR_3 < VAR_2; VAR_3++ )
  {
   if ( FUNC_1( VAR_0.objects[VAR_3].name, "tag" ) == VAR_0.objects[VAR_3].name )
   {
    continue;
   }
   if ( VAR_0.objects[VAR_1].materialRef == VAR_0.objects[VAR_3].materialRef )
   {
    if ( VAR_0.objects[VAR_3].numAnimations )
    {
     FUNC_0( &VAR_0.objects[VAR_1], &VAR_0.objects[VAR_3] );
    }
   }
  }
 }
}
