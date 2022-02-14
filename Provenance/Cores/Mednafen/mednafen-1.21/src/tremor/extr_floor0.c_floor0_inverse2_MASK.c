
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t m; int n; int lsp_look; int ln; int linearmap; TYPE_2__* vi; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
typedef int vorbis_look_floor ;
struct TYPE_4__ {int ampdB; } ;
typedef TYPE_2__ vorbis_info_floor0 ;
typedef int vorbis_block ;
typedef int ogg_int32_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int,int ,int *,size_t,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(vorbis_block *VAR_0,vorbis_look_floor *VAR_1,
      void *VAR_2,ogg_int32_t *VAR_3){
  vorbis_look_floor0 *VAR_4=(vorbis_look_floor0 *)VAR_1;
  vorbis_info_floor0 *VAR_5=VAR_4->vi;

  if(VAR_2){
    ogg_int32_t *VAR_6=(ogg_int32_t *)VAR_2;
    ogg_int32_t VAR_7=VAR_6[VAR_4->m];


    FUNC_1(VAR_3,VAR_4->linearmap,VAR_4->n,VAR_4->ln,
   VAR_6,VAR_4->m,VAR_7,VAR_5->ampdB,VAR_4->lsp_look);
    return(1);
  }
  FUNC_0(VAR_3,0,sizeof(*VAR_3)*VAR_4->n);
  return(0);
}
