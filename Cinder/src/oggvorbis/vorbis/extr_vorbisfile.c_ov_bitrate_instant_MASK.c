
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int current_link; scalar_t__ ready_state; double samptrack; double bittrack; TYPE_1__* vi; scalar_t__ seekable; } ;
struct TYPE_4__ {double rate; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;

long FUNC_0(OggVorbis_File *VAR_3){
  int VAR_4=(VAR_3->seekable?VAR_3->current_link:0);
  long VAR_5;
  if(VAR_3->ready_state<VAR_0)return(VAR_1);
  if(VAR_3->samptrack==0)return(VAR_2);
  VAR_5=VAR_3->bittrack/VAR_3->samptrack*VAR_3->vi[VAR_4].rate+.5;
  VAR_3->bittrack=0.f;
  VAR_3->samptrack=0.f;
  return(VAR_5);
}
