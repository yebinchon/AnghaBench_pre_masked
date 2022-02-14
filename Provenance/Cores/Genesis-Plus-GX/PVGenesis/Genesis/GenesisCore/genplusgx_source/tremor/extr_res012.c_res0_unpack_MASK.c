
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int begin; int end; int grouping; int partitions; int groupbook; int* secondstages; int* booklist; } ;
typedef TYPE_1__ vorbis_info_residue0 ;
typedef TYPE_1__ vorbis_info_residue ;
struct TYPE_9__ {scalar_t__ codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_10__ {int books; } ;
typedef TYPE_4__ codec_setup_info ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*) ;

vorbis_info_residue *FUNC_4(vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  int VAR_2,VAR_3=0;
  vorbis_info_residue0 *VAR_4=(vorbis_info_residue0 *)FUNC_0(1,sizeof(*VAR_4));
  codec_setup_info *VAR_5=(codec_setup_info *)VAR_0->codec_setup;

  VAR_4->begin=FUNC_2(VAR_1,24);
  VAR_4->end=FUNC_2(VAR_1,24);
  VAR_4->grouping=FUNC_2(VAR_1,24)+1;
  VAR_4->partitions=FUNC_2(VAR_1,6)+1;
  VAR_4->groupbook=FUNC_2(VAR_1,8);

  for(VAR_2=0;VAR_2<VAR_4->partitions;VAR_2++){
    int VAR_6=FUNC_2(VAR_1,3);
    if(FUNC_2(VAR_1,1))
      VAR_6|=(FUNC_2(VAR_1,5)<<3);
    VAR_4->secondstages[VAR_2]=VAR_6;

    VAR_3+=FUNC_1(VAR_6);
  }
  for(VAR_2=0;VAR_2<VAR_3;VAR_2++)
    VAR_4->booklist[VAR_2]=FUNC_2(VAR_1,8);

  if(VAR_4->groupbook>=VAR_5->books)goto errout;
  for(VAR_2=0;VAR_2<VAR_3;VAR_2++)
    if(VAR_4->booklist[VAR_2]>=VAR_5->books)goto errout;

  return(VAR_4);
 errout:
  FUNC_3(VAR_4);
  return(((void*)0));
}
