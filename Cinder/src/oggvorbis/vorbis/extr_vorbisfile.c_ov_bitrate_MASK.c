
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ogg_int64_t ;
struct TYPE_6__ {scalar_t__ ready_state; int links; int* offsets; int* dataoffsets; TYPE_1__* vi; scalar_t__ seekable; } ;
struct TYPE_5__ {scalar_t__ bitrate_nominal; int bitrate_upper; int bitrate_lower; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 long FUNC_1 (int) ;

long FUNC_2(OggVorbis_File *VAR_3,int VAR_4){
  if(VAR_3->ready_state<VAR_0)return(VAR_1);
  if(VAR_4>=VAR_3->links)return(VAR_1);
  if(!VAR_3->seekable && VAR_4!=0)return(FUNC_2(VAR_3,0));
  if(VAR_4<0){
    ogg_int64_t VAR_5=0;
    int VAR_6;
    float VAR_7;
    for(VAR_6=0;VAR_6<VAR_3->links;VAR_6++)
      VAR_5+=(VAR_3->offsets[VAR_6+1]-VAR_3->dataoffsets[VAR_6])*8;




    VAR_7 = VAR_5/FUNC_0(VAR_3,-1);
    return(FUNC_1(VAR_7));
  }else{
    if(VAR_3->seekable){

      return(FUNC_1((VAR_3->offsets[VAR_4+1]-VAR_3->dataoffsets[VAR_4])*8/FUNC_0(VAR_3,VAR_4)));
    }else{

      if(VAR_3->vi[VAR_4].bitrate_nominal>0){
        return VAR_3->vi[VAR_4].bitrate_nominal;
      }else{
        if(VAR_3->vi[VAR_4].bitrate_upper>0){
          if(VAR_3->vi[VAR_4].bitrate_lower>0){
            return (VAR_3->vi[VAR_4].bitrate_upper+VAR_3->vi[VAR_4].bitrate_lower)/2;
          }else{
            return VAR_3->vi[VAR_4].bitrate_upper;
          }
        }
        return(VAR_2);
      }
    }
  }
}
