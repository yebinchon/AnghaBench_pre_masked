
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int links; long current_serialno; long* serialnos; int seekable; } ;
typedef TYPE_1__ OggVorbis_File ;



long FUNC_0(OggVorbis_File *VAR_0,int VAR_1){
  if(VAR_1>=VAR_0->links)return(FUNC_0(VAR_0,VAR_0->links-1));
  if(!VAR_0->seekable && VAR_1>=0)return(FUNC_0(VAR_0,-1));
  if(VAR_1<0){
    return(VAR_0->current_serialno);
  }else{
    return(VAR_0->serialnos[VAR_1]);
  }
}
