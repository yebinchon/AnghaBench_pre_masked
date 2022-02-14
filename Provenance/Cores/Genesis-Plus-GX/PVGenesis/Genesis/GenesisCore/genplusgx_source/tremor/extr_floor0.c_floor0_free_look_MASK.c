
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lsp_look; struct TYPE_4__* linearmap; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
typedef int vorbis_look_floor ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(vorbis_look_floor *VAR_0){
  vorbis_look_floor0 *VAR_1=(vorbis_look_floor0 *)VAR_0;
  if(VAR_1){

    if(VAR_1->linearmap)FUNC_0(VAR_1->linearmap);
    if(VAR_1->lsp_look)FUNC_0(VAR_1->lsp_look);
    FUNC_1(VAR_1,0,sizeof(*VAR_1));
    FUNC_0(VAR_1);
  }
}
