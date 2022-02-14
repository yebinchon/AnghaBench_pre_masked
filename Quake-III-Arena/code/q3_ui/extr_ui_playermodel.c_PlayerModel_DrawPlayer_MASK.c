
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; int x; } ;
struct TYPE_6__ {int height; int width; TYPE_1__ generic; } ;
typedef TYPE_2__ menubitmap_s ;
struct TYPE_8__ {int playerinfo; } ;
struct TYPE_7__ {int realtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int,int *,int) ;
 int FUNC_1 (int ,scalar_t__,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_3( void *VAR_5 )
{
 menubitmap_s* VAR_6;

 VAR_6 = (menubitmap_s*) VAR_5;

 if( FUNC_2() <= VAR_0 ) {
  FUNC_1( VAR_6->generic.x, VAR_6->generic.y + VAR_6->height / 2, "LOW MEMORY", VAR_1, VAR_2 );
  return;
 }

 FUNC_0( VAR_6->generic.x, VAR_6->generic.y, VAR_6->width, VAR_6->height, &VAR_3.playerinfo, VAR_4.realtime/2 );
}
