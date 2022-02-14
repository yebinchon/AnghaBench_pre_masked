
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ready_state; scalar_t__ samptrack; scalar_t__ bittrack; int vb; int vd; scalar_t__ vi; scalar_t__ current_link; scalar_t__ seekable; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(OggVorbis_File *VAR_4){
  if(VAR_4->ready_state>VAR_3)return 0;
  if(VAR_4->ready_state<VAR_3)return VAR_2;
  if(VAR_4->seekable){
    if(FUNC_1(&VAR_4->vd,VAR_4->vi+VAR_4->current_link))
      return VAR_1;
  }else{
    if(FUNC_1(&VAR_4->vd,VAR_4->vi))
      return VAR_1;
  }
  FUNC_0(&VAR_4->vd,&VAR_4->vb);
  VAR_4->ready_state=VAR_0;
  VAR_4->bittrack=0;
  VAR_4->samptrack=0;
  return 0;
}
