
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ready_state; scalar_t__ samptrack; scalar_t__ bittrack; int vb; int vd; scalar_t__ vi; scalar_t__ current_link; scalar_t__ seekable; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(OggVorbis_File *VAR_2){
  if(VAR_2->ready_state!=VAR_1)return;
  if(VAR_2->seekable){
    FUNC_1(&VAR_2->vd,VAR_2->vi+VAR_2->current_link);
  }else{
    FUNC_1(&VAR_2->vd,VAR_2->vi);
  }
  FUNC_0(&VAR_2->vd,&VAR_2->vb);
  VAR_2->ready_state=VAR_0;
  VAR_2->bittrack=0;
  VAR_2->samptrack=0;
  return;
}
