
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ogg_int64_t ;
struct TYPE_3__ {scalar_t__ ready_state; int pcm_offset; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

ogg_int64_t FUNC_0(OggVorbis_File *VAR_2){
  if(VAR_2->ready_state<VAR_0)return(VAR_1);
  return(VAR_2->pcm_offset);
}
