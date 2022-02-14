
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_15__ {int books; int floors; int* floor_type; int residues; int* residue_type; int maps; int* map_type; int modes; TYPE_9__** mode_param; int * map_param; int * residue_param; int * floor_param; int * book_param; } ;
typedef TYPE_2__ codec_setup_info ;
struct TYPE_17__ {int blockflag; int windowtype; int transformtype; int mapping; } ;
struct TYPE_16__ {int (* unpack ) (TYPE_1__*,int *) ;} ;
struct TYPE_13__ {int (* unpack ) (TYPE_1__*,int *) ;} ;
struct TYPE_12__ {int (* unpack ) (TYPE_1__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_11__** VAR_7 ;
 TYPE_10__** VAR_8 ;
 TYPE_9__* FUNC_0 (int,int) ;
 TYPE_8__** VAR_9 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(vorbis_info *VAR_10,oggpack_buffer *VAR_11){
  codec_setup_info *VAR_12=VAR_10->codec_setup;
  int VAR_13;
  if(!VAR_12)return(VAR_1);


  VAR_12->books=FUNC_1(VAR_11,8)+1;
  if(VAR_12->books<=0)goto err_out;
  for(VAR_13=0;VAR_13<VAR_12->books;VAR_13++){
    VAR_12->book_param[VAR_13]=FUNC_6(VAR_11);
    if(!VAR_12->book_param[VAR_13])goto err_out;
  }


  {
    int VAR_14=FUNC_1(VAR_11,6)+1;
    if(VAR_14<=0)goto err_out;
    for(VAR_13=0;VAR_13<VAR_14;VAR_13++){
      int VAR_15=FUNC_1(VAR_11,16);
      if(VAR_15<0 || VAR_15>=VAR_5)goto err_out;
    }
  }


  VAR_12->floors=FUNC_1(VAR_11,6)+1;
  if(VAR_12->floors<=0)goto err_out;
  for(VAR_13=0;VAR_13<VAR_12->floors;VAR_13++){
    VAR_12->floor_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->floor_type[VAR_13]<0 || VAR_12->floor_type[VAR_13]>=VAR_2)goto err_out;
    VAR_12->floor_param[VAR_13]=VAR_7[VAR_12->floor_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->floor_param[VAR_13])goto err_out;
  }


  VAR_12->residues=FUNC_1(VAR_11,6)+1;
  if(VAR_12->residues<=0)goto err_out;
  for(VAR_13=0;VAR_13<VAR_12->residues;VAR_13++){
    VAR_12->residue_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->residue_type[VAR_13]<0 || VAR_12->residue_type[VAR_13]>=VAR_4)goto err_out;
    VAR_12->residue_param[VAR_13]=VAR_9[VAR_12->residue_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->residue_param[VAR_13])goto err_out;
  }


  VAR_12->maps=FUNC_1(VAR_11,6)+1;
  if(VAR_12->maps<=0)goto err_out;
  for(VAR_13=0;VAR_13<VAR_12->maps;VAR_13++){
    VAR_12->map_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->map_type[VAR_13]<0 || VAR_12->map_type[VAR_13]>=VAR_3)goto err_out;
    VAR_12->map_param[VAR_13]=VAR_8[VAR_12->map_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->map_param[VAR_13])goto err_out;
  }


  VAR_12->modes=FUNC_1(VAR_11,6)+1;
  if(VAR_12->modes<=0)goto err_out;
  for(VAR_13=0;VAR_13<VAR_12->modes;VAR_13++){
    VAR_12->mode_param[VAR_13]=FUNC_0(1,sizeof(*VAR_12->mode_param[VAR_13]));
    VAR_12->mode_param[VAR_13]->blockflag=FUNC_1(VAR_11,1);
    VAR_12->mode_param[VAR_13]->windowtype=FUNC_1(VAR_11,16);
    VAR_12->mode_param[VAR_13]->transformtype=FUNC_1(VAR_11,16);
    VAR_12->mode_param[VAR_13]->mapping=FUNC_1(VAR_11,8);

    if(VAR_12->mode_param[VAR_13]->windowtype>=VAR_6)goto err_out;
    if(VAR_12->mode_param[VAR_13]->transformtype>=VAR_6)goto err_out;
    if(VAR_12->mode_param[VAR_13]->mapping>=VAR_12->maps)goto err_out;
    if(VAR_12->mode_param[VAR_13]->mapping<0)goto err_out;
  }

  if(FUNC_1(VAR_11,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_5(VAR_10);
  return(VAR_0);
}
