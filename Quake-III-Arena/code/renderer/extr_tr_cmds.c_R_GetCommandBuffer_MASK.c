
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used; void* cmds; } ;
typedef TYPE_1__ renderCommandList_t ;
struct TYPE_8__ {TYPE_1__ commands; } ;
struct TYPE_7__ {int (* Error ) (int ,char*,int) ;} ;
struct TYPE_6__ {size_t smpFrame; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_2__ VAR_4 ;

void *FUNC_1( int VAR_5 ) {
 renderCommandList_t *VAR_6;

 VAR_6 = &VAR_2[VAR_4.smpFrame]->commands;


 if ( VAR_6->used + VAR_5 + 4 > VAR_1 ) {
  if ( VAR_5 > VAR_1 - 4 ) {
   VAR_3.Error( VAR_0, "R_GetCommandBuffer: bad size %i", VAR_5 );
  }

  return ((void*)0);
 }

 VAR_6->used += VAR_5;

 return VAR_6->cmds + VAR_6->used - VAR_5;
}
