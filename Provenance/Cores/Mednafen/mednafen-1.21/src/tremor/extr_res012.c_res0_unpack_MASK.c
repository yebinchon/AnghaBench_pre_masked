
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int begin; int end; int grouping; int partitions; int groupbook; int* secondstages; int* booklist; int partvals; } ;
typedef TYPE_2__ vorbis_info_residue0 ;
typedef TYPE_2__ vorbis_info_residue ;
struct TYPE_11__ {scalar_t__ codec_setup; } ;
typedef TYPE_4__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_12__ {int books; TYPE_1__** book_param; } ;
typedef TYPE_5__ codec_setup_info ;
struct TYPE_9__ {scalar_t__ maptype; int entries; int dim; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;

vorbis_info_residue *FUNC_4(vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  int VAR_2,VAR_3=0;
  vorbis_info_residue0 *VAR_4=(vorbis_info_residue0 *)FUNC_0(1,sizeof(*VAR_4));
  codec_setup_info *VAR_5=(codec_setup_info *)VAR_0->codec_setup;

  VAR_4->begin=FUNC_2(VAR_1,24);
  VAR_4->end=FUNC_2(VAR_1,24);
  VAR_4->grouping=FUNC_2(VAR_1,24)+1;
  VAR_4->partitions=FUNC_2(VAR_1,6)+1;
  VAR_4->groupbook=FUNC_2(VAR_1,8);


  if(VAR_4->groupbook<0)goto errout;

  for(VAR_2=0;VAR_2<VAR_4->partitions;VAR_2++){
    int VAR_6=FUNC_2(VAR_1,3);
    int VAR_7=FUNC_2(VAR_1,1);
    if(VAR_7<0) goto errout;
    if(VAR_7){
      int VAR_8=FUNC_2(VAR_1,5);
      if(VAR_8<0) goto errout;
      VAR_6|=(VAR_8<<3);
    }
    VAR_4->secondstages[VAR_2]=VAR_6;

    VAR_3+=FUNC_1(VAR_6);
  }
  for(VAR_2=0;VAR_2<VAR_3;VAR_2++){
    int VAR_9=FUNC_2(VAR_1,8);
    if(VAR_9<0) goto errout;
    VAR_4->booklist[VAR_2]=VAR_9;
  }

  if(VAR_4->groupbook>=VAR_5->books)goto errout;
  for(VAR_2=0;VAR_2<VAR_3;VAR_2++){
    if(VAR_4->booklist[VAR_2]>=VAR_5->books)goto errout;
    if(VAR_5->book_param[VAR_4->booklist[VAR_2]]->maptype==0)goto errout;
  }







  {
    int VAR_10 = VAR_5->book_param[VAR_4->groupbook]->entries;
    int VAR_11 = VAR_5->book_param[VAR_4->groupbook]->dim;
    int VAR_12 = 1;
    if (VAR_11<1) goto errout;
    while(VAR_11>0){
      VAR_12 *= VAR_4->partitions;
      if(VAR_12 > VAR_10) goto errout;
      VAR_11--;
    }
    VAR_4->partvals = VAR_12;
  }

  return(VAR_4);
 errout:
  FUNC_3(VAR_4);
  return(((void*)0));
}
