
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vorbis_dsp_state ;
struct TYPE_4__ {int * localstore; scalar_t__ localalloc; int * vd; } ;
typedef TYPE_1__ vorbis_block ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1(vorbis_dsp_state *VAR_0, vorbis_block *VAR_1){
  FUNC_0(VAR_1,0,sizeof(*VAR_1));
  VAR_1->vd=VAR_0;
  VAR_1->localalloc=0;
  VAR_1->localstore=((void*)0);

  return(0);
}
