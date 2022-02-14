
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t m; int* n; int ln; int * linearmap; TYPE_2__* vi; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
typedef int vorbis_look_floor ;
struct TYPE_9__ {scalar_t__ ampdB; } ;
typedef TYPE_2__ vorbis_info_floor0 ;
struct TYPE_10__ {size_t W; } ;
typedef TYPE_3__ vorbis_block ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (float*,int ,int,int ,float*,size_t,float,float) ;

__attribute__((used)) static int FUNC_3(vorbis_block *VAR_0,vorbis_look_floor *VAR_1,
                           void *VAR_2,float *VAR_3){
  vorbis_look_floor0 *VAR_4=(vorbis_look_floor0 *)VAR_1;
  vorbis_info_floor0 *VAR_5=VAR_4->vi;

  FUNC_0(VAR_0,VAR_5,VAR_4);

  if(VAR_2){
    float *VAR_6=(float *)VAR_2;
    float VAR_7=VAR_6[VAR_4->m];


    FUNC_2(VAR_3,
                        VAR_4->linearmap[VAR_0->W],
                        VAR_4->n[VAR_0->W],
                        VAR_4->ln,
                        VAR_6,VAR_4->m,VAR_7,(float)VAR_5->ampdB);
    return(1);
  }
  FUNC_1(VAR_3,0,sizeof(*VAR_3)*VAR_4->n[VAR_0->W]);
  return(0);
}
