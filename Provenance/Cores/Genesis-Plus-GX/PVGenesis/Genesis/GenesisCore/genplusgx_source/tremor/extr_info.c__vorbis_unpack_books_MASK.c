
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int blockflag; int windowtype; int transformtype; int mapping; } ;
typedef TYPE_1__ vorbis_info_mode ;
struct TYPE_15__ {scalar_t__ codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
typedef int static_codebook ;
typedef int oggpack_buffer ;
struct TYPE_16__ {int books; int times; int* time_type; int floors; int* floor_type; int residues; int* residue_type; int maps; int* map_type; int modes; TYPE_1__** mode_param; int * map_param; int * residue_param; int * floor_param; int ** book_param; } ;
typedef TYPE_3__ codec_setup_info ;
struct TYPE_17__ {int (* unpack ) (TYPE_2__*,int *) ;} ;
struct TYPE_13__ {int (* unpack ) (TYPE_2__*,int *) ;} ;
struct TYPE_12__ {int (* unpack ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_11__** VAR_7 ;
 TYPE_10__** VAR_8 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_9__** VAR_9 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(vorbis_info *VAR_10,oggpack_buffer *VAR_11){
  codec_setup_info *VAR_12=(codec_setup_info *)VAR_10->codec_setup;
  int VAR_13;
  if(!VAR_12)return(VAR_1);


  VAR_12->books=FUNC_1(VAR_11,8)+1;

  for(VAR_13=0;VAR_13<VAR_12->books;VAR_13++){
    VAR_12->book_param[VAR_13]=(static_codebook *)FUNC_0(1,sizeof(*VAR_12->book_param[VAR_13]));
    if(FUNC_6(VAR_11,VAR_12->book_param[VAR_13]))goto err_out;
  }


  VAR_12->times=FUNC_1(VAR_11,6)+1;


  for(VAR_13=0;VAR_13<VAR_12->times;VAR_13++){
    VAR_12->time_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->time_type[VAR_13]<0 || VAR_12->time_type[VAR_13]>=VAR_5)goto err_out;



  }


  VAR_12->floors=FUNC_1(VAR_11,6)+1;


  for(VAR_13=0;VAR_13<VAR_12->floors;VAR_13++){
    VAR_12->floor_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->floor_type[VAR_13]<0 || VAR_12->floor_type[VAR_13]>=VAR_2)goto err_out;
    VAR_12->floor_param[VAR_13]=VAR_7[VAR_12->floor_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->floor_param[VAR_13])goto err_out;
  }


  VAR_12->residues=FUNC_1(VAR_11,6)+1;


  for(VAR_13=0;VAR_13<VAR_12->residues;VAR_13++){
    VAR_12->residue_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->residue_type[VAR_13]<0 || VAR_12->residue_type[VAR_13]>=VAR_4)goto err_out;
    VAR_12->residue_param[VAR_13]=VAR_9[VAR_12->residue_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->residue_param[VAR_13])goto err_out;
  }


  VAR_12->maps=FUNC_1(VAR_11,6)+1;


  for(VAR_13=0;VAR_13<VAR_12->maps;VAR_13++){
    VAR_12->map_type[VAR_13]=FUNC_1(VAR_11,16);
    if(VAR_12->map_type[VAR_13]<0 || VAR_12->map_type[VAR_13]>=VAR_3)goto err_out;
    VAR_12->map_param[VAR_13]=VAR_8[VAR_12->map_type[VAR_13]]->unpack(VAR_10,VAR_11);
    if(!VAR_12->map_param[VAR_13])goto err_out;
  }


  VAR_12->modes=FUNC_1(VAR_11,6)+1;

  for(VAR_13=0;VAR_13<VAR_12->modes;VAR_13++){
    VAR_12->mode_param[VAR_13]=(vorbis_info_mode *)FUNC_0(1,sizeof(*VAR_12->mode_param[VAR_13]));
    VAR_12->mode_param[VAR_13]->blockflag=FUNC_1(VAR_11,1);
    VAR_12->mode_param[VAR_13]->windowtype=FUNC_1(VAR_11,16);
    VAR_12->mode_param[VAR_13]->transformtype=FUNC_1(VAR_11,16);
    VAR_12->mode_param[VAR_13]->mapping=FUNC_1(VAR_11,8);

    if(VAR_12->mode_param[VAR_13]->windowtype>=VAR_6)goto err_out;
    if(VAR_12->mode_param[VAR_13]->transformtype>=VAR_6)goto err_out;
    if(VAR_12->mode_param[VAR_13]->mapping>=VAR_12->maps)goto err_out;
  }

  if(FUNC_1(VAR_11,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_5(VAR_10);
  return(VAR_0);
}
