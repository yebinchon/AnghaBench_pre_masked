
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int n; int ln; int* linearmap; int * lsp_look; TYPE_4__* vi; int m; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
typedef TYPE_1__ vorbis_look_floor ;
struct TYPE_12__ {size_t blockflag; } ;
typedef TYPE_3__ vorbis_info_mode ;
struct TYPE_13__ {int barkmap; int rate; int order; } ;
typedef TYPE_4__ vorbis_info_floor0 ;
typedef int vorbis_info_floor ;
struct TYPE_14__ {scalar_t__ codec_setup; } ;
typedef TYPE_5__ vorbis_info ;
struct TYPE_15__ {TYPE_5__* vi; } ;
typedef TYPE_6__ vorbis_dsp_state ;
typedef int ogg_int32_t ;
struct TYPE_16__ {int* blocksizes; } ;
typedef TYPE_7__ codec_setup_info ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static vorbis_look_floor *FUNC_4 (vorbis_dsp_state *VAR_0,vorbis_info_mode *VAR_1,
                              vorbis_info_floor *VAR_2){
  int VAR_3;
  vorbis_info *VAR_4=VAR_0->vi;
  codec_setup_info *VAR_5=(codec_setup_info *)VAR_4->codec_setup;
  vorbis_info_floor0 *VAR_6=(vorbis_info_floor0 *)VAR_2;
  vorbis_look_floor0 *VAR_7=(vorbis_look_floor0 *)FUNC_0(1,sizeof(*VAR_7));
  VAR_7->m=VAR_6->order;
  VAR_7->n=VAR_5->blocksizes[VAR_1->blockflag]/2;
  VAR_7->ln=VAR_6->barkmap;
  VAR_7->vi=VAR_6;







  VAR_7->linearmap=(int *)FUNC_1((VAR_7->n+1)*sizeof(*VAR_7->linearmap));
  for(VAR_3=0;VAR_3<VAR_7->n;VAR_3++){

    int VAR_8=(VAR_7->ln*
      ((FUNC_2(VAR_6->rate/2*VAR_3/VAR_7->n)<<11)/FUNC_2(VAR_6->rate/2)))>>11;

    if(VAR_8>=VAR_7->ln)VAR_8=VAR_7->ln-1;
    VAR_7->linearmap[VAR_3]=VAR_8;
  }
  VAR_7->linearmap[VAR_3]=-1;

  VAR_7->lsp_look=(ogg_int32_t *)FUNC_1(VAR_7->ln*sizeof(*VAR_7->lsp_look));
  for(VAR_3=0;VAR_3<VAR_7->ln;VAR_3++)
    VAR_7->lsp_look[VAR_3]=FUNC_3(0x10000*VAR_3/VAR_7->ln);

  return VAR_7;
}
