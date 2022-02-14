
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int swapBuffersCommand_t ;
typedef int stretchPicCommand_t ;
typedef int shader_t ;
typedef int setColorCommand_t ;
struct TYPE_6__ {void* cmds; } ;
typedef TYPE_1__ renderCommandList_t ;
struct TYPE_7__ {int numDrawSurfs; TYPE_3__* drawSurfs; } ;
typedef TYPE_2__ drawSurfsCommand_t ;
struct TYPE_8__ {int sort; } ;
typedef TYPE_3__ drawSurf_t ;
typedef int drawBufferCommand_t ;
struct TYPE_10__ {TYPE_1__ commands; } ;
struct TYPE_9__ {size_t smpFrame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int,int*,int **,int*,int*) ;
 TYPE_5__** VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_1( int VAR_5 ) {
 renderCommandList_t *VAR_6 = &VAR_3[VAR_4.smpFrame]->commands;

 if( VAR_6 ) {
  const void *VAR_7 = VAR_6->cmds;

  while ( 1 ) {
   switch ( *(const int *)VAR_7 ) {
   case 130:
    {
    const setColorCommand_t *VAR_8 = (const setColorCommand_t *)VAR_7;
    VAR_7 = (const void *)(VAR_8 + 1);
    break;
    }
   case 129:
    {
    const stretchPicCommand_t *VAR_9 = (const stretchPicCommand_t *)VAR_7;
    VAR_7 = (const void *)(VAR_9 + 1);
    break;
    }
   case 132:
    {
    int VAR_10;
    drawSurf_t *VAR_11;
    shader_t *VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    const drawSurfsCommand_t *VAR_17 = (const drawSurfsCommand_t *)VAR_7;

    for( VAR_10 = 0, VAR_11 = VAR_17->drawSurfs; VAR_10 < VAR_17->numDrawSurfs; VAR_10++, VAR_11++ ) {
     FUNC_0( VAR_11->sort, &VAR_14, &VAR_12, &VAR_13, &VAR_15 );
                    VAR_16 = (( VAR_11->sort >> VAR_2 ) & (VAR_0-1));
     if( VAR_16 >= VAR_5 ) {
      VAR_16++;
      VAR_11->sort = (VAR_16 << VAR_2) | VAR_14 | ( VAR_13 << VAR_1 ) | (int)VAR_15;
     }
    }
    VAR_7 = (const void *)(VAR_17 + 1);
    break;
    }
   case 133:
    {
    const drawBufferCommand_t *VAR_18 = (const drawBufferCommand_t *)VAR_7;
    VAR_7 = (const void *)(VAR_18 + 1);
    break;
    }
   case 128:
    {
    const swapBuffersCommand_t *VAR_19 = (const swapBuffersCommand_t *)VAR_7;
    VAR_7 = (const void *)(VAR_19 + 1);
    break;
    }
   case 131:
   default:
    return;
   }
  }
 }
}
