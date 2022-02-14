
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
typedef int oggpack_buffer ;
struct TYPE_16__ {int books; int times; int* time_type; int floors; int* floor_type; int residues; int* residue_type; int maps; int* map_type; int modes; TYPE_1__** mode_param; int * map_param; int * residue_param; int * floor_param; int * book_param; } ;
typedef TYPE_3__ codec_setup_info ;
struct TYPE_17__ {int (* unpack ) (TYPE_2__*,int *) ;} ;
struct TYPE_13__ {int (* unpack ) (TYPE_2__*,int *) ;} ;
struct TYPE_12__ {int (* unpack ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_11__** VAR_6 ;
 TYPE_10__** VAR_7 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_9__** VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(vorbis_info *VAR_9,oggpack_buffer *VAR_10){
  codec_setup_info *VAR_11=(codec_setup_info *)VAR_9->codec_setup;
  int VAR_12;


  VAR_11->books=FUNC_1(VAR_10,8)+1;
  if(VAR_11->books<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->books;VAR_12++){
    VAR_11->book_param[VAR_12]=FUNC_6(VAR_10);
    if(!VAR_11->book_param[VAR_12])goto err_out;
  }


  VAR_11->times=FUNC_1(VAR_10,6)+1;
  if(VAR_11->times<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->times;VAR_12++){
    VAR_11->time_type[VAR_12]=FUNC_1(VAR_10,16);
    if(VAR_11->time_type[VAR_12]<0 || VAR_11->time_type[VAR_12]>=VAR_4)goto err_out;



  }


  VAR_11->floors=FUNC_1(VAR_10,6)+1;
  if(VAR_11->floors<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->floors;VAR_12++){
    VAR_11->floor_type[VAR_12]=FUNC_1(VAR_10,16);
    if(VAR_11->floor_type[VAR_12]<0 || VAR_11->floor_type[VAR_12]>=VAR_1)goto err_out;
    VAR_11->floor_param[VAR_12]=VAR_6[VAR_11->floor_type[VAR_12]]->unpack(VAR_9,VAR_10);
    if(!VAR_11->floor_param[VAR_12])goto err_out;
  }


  VAR_11->residues=FUNC_1(VAR_10,6)+1;
  if(VAR_11->residues<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->residues;VAR_12++){
    VAR_11->residue_type[VAR_12]=FUNC_1(VAR_10,16);
    if(VAR_11->residue_type[VAR_12]<0 || VAR_11->residue_type[VAR_12]>=VAR_3)goto err_out;
    VAR_11->residue_param[VAR_12]=VAR_8[VAR_11->residue_type[VAR_12]]->unpack(VAR_9,VAR_10);
    if(!VAR_11->residue_param[VAR_12])goto err_out;
  }


  VAR_11->maps=FUNC_1(VAR_10,6)+1;
  if(VAR_11->maps<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->maps;VAR_12++){
    VAR_11->map_type[VAR_12]=FUNC_1(VAR_10,16);
    if(VAR_11->map_type[VAR_12]<0 || VAR_11->map_type[VAR_12]>=VAR_2)goto err_out;
    VAR_11->map_param[VAR_12]=VAR_7[VAR_11->map_type[VAR_12]]->unpack(VAR_9,VAR_10);
    if(!VAR_11->map_param[VAR_12])goto err_out;
  }


  VAR_11->modes=FUNC_1(VAR_10,6)+1;
  if(VAR_11->modes<=0)goto err_out;
  for(VAR_12=0;VAR_12<VAR_11->modes;VAR_12++){
    VAR_11->mode_param[VAR_12]=(vorbis_info_mode *)FUNC_0(1,sizeof(*VAR_11->mode_param[VAR_12]));
    VAR_11->mode_param[VAR_12]->blockflag=FUNC_1(VAR_10,1);
    VAR_11->mode_param[VAR_12]->windowtype=FUNC_1(VAR_10,16);
    VAR_11->mode_param[VAR_12]->transformtype=FUNC_1(VAR_10,16);
    VAR_11->mode_param[VAR_12]->mapping=FUNC_1(VAR_10,8);

    if(VAR_11->mode_param[VAR_12]->windowtype>=VAR_5)goto err_out;
    if(VAR_11->mode_param[VAR_12]->transformtype>=VAR_5)goto err_out;
    if(VAR_11->mode_param[VAR_12]->mapping>=VAR_11->maps)goto err_out;
    if(VAR_11->mode_param[VAR_12]->mapping<0)goto err_out;
  }

  if(FUNC_1(VAR_10,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_5(VAR_9);
  return(VAR_0);
}
