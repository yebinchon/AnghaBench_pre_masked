
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* linearmap; TYPE_3__* vi; int ln; int m; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
typedef TYPE_1__ vorbis_look_floor ;
struct TYPE_6__ {int barkmap; int order; } ;
typedef TYPE_3__ vorbis_info_floor0 ;
typedef int vorbis_info_floor ;
typedef int vorbis_dsp_state ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static vorbis_look_floor *FUNC_1(vorbis_dsp_state *VAR_0,
                                      vorbis_info_floor *VAR_1){
  vorbis_info_floor0 *VAR_2=(vorbis_info_floor0 *)VAR_1;
  vorbis_look_floor0 *VAR_3=FUNC_0(1,sizeof(*VAR_3));

  (void)VAR_0;

  VAR_3->m=VAR_2->order;
  VAR_3->ln=VAR_2->barkmap;
  VAR_3->vi=VAR_2;

  VAR_3->linearmap=FUNC_0(2,sizeof(*VAR_3->linearmap));

  return VAR_3;
}
