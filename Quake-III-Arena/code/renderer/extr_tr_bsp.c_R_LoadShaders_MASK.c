
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_10__ {void* contentFlags; void* surfaceFlags; } ;
typedef TYPE_2__ dshader_t ;
struct TYPE_12__ {TYPE_2__* (* Hunk_Alloc ) (int,int ) ;int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_11__ {int numShaders; TYPE_2__* shaders; int name; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_0 ;
 void* FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_2__* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4( lump_t *VAR_5 ) {
 int VAR_6, VAR_7;
 dshader_t *VAR_8, *VAR_9;

 VAR_8 = (void *)(VAR_1 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_8))
  VAR_3.Error (VAR_0, "LoadMap: funny lump size in %s",VAR_4.name);
 VAR_7 = VAR_5->filelen / sizeof(*VAR_8);
 VAR_9 = VAR_3.Hunk_Alloc ( VAR_7*sizeof(*VAR_9), VAR_2 );

 VAR_4.shaders = VAR_9;
 VAR_4.numShaders = VAR_7;

 FUNC_0( VAR_9, VAR_8, VAR_7*sizeof(*VAR_9) );

 for ( VAR_6=0 ; VAR_6<VAR_7 ; VAR_6++ ) {
  VAR_9[VAR_6].surfaceFlags = FUNC_1( VAR_9[VAR_6].surfaceFlags );
  VAR_9[VAR_6].contentFlags = FUNC_1( VAR_9[VAR_6].contentFlags );
 }
}
