
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int dx; int dy; int flags; } ;
typedef TYPE_1__ vc_progress_element ;
struct TYPE_5__ {int v_width; int v_height; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int,int,int,int ,unsigned char const*,int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_2( vc_progress_element * VAR_4,
   const unsigned char * VAR_5 )
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    if( VAR_2 && VAR_1) {

 FUNC_1();

 VAR_8 = VAR_4->width;
 VAR_9 = VAR_4->height;
 VAR_6 = VAR_4->dx;
 VAR_7 = VAR_4->dy;
 if( 1 & VAR_4->flags) {
     VAR_6 += ((VAR_3.v_width - VAR_8) / 2);
     VAR_7 += ((VAR_3.v_height - VAR_9) / 2);
 }
 FUNC_0( VAR_6, VAR_7, 0, VAR_8, VAR_9, VAR_8, 0, VAR_5, ((void*)0), VAR_0 );
    }
}
