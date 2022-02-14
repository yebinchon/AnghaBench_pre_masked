
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_11__ {int books; int floors; int* floor_type; int residues; int* residue_type; int maps; int* map_type; int modes; TYPE_1__** mode_param; int * map_param; int * residue_param; int * floor_param; int * book_param; } ;
typedef TYPE_3__ codec_setup_info ;
struct TYPE_14__ {int (* pack ) (int ,int *) ;} ;
struct TYPE_13__ {int (* pack ) (TYPE_2__*,int ,int *) ;} ;
struct TYPE_12__ {int (* pack ) (int ,int *) ;} ;
struct TYPE_9__ {int blockflag; int windowtype; int transformtype; int mapping; } ;


 int VAR_0 ;
 TYPE_8__** VAR_1 ;
 TYPE_7__** VAR_2 ;
 TYPE_6__** VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(oggpack_buffer *VAR_4,vorbis_info *VAR_5){
  codec_setup_info *VAR_6=VAR_5->codec_setup;
  int VAR_7;
  if(!VAR_6)return(VAR_0);

  FUNC_1(VAR_4,0x05,8);
  FUNC_0(VAR_4,"vorbis", 6);


  FUNC_1(VAR_4,VAR_6->books-1,8);
  for(VAR_7=0;VAR_7<VAR_6->books;VAR_7++)
    if(FUNC_5(VAR_6->book_param[VAR_7],VAR_4))goto err_out;


  FUNC_1(VAR_4,0,6);
  FUNC_1(VAR_4,0,16);


  FUNC_1(VAR_4,VAR_6->floors-1,6);
  for(VAR_7=0;VAR_7<VAR_6->floors;VAR_7++){
    FUNC_1(VAR_4,VAR_6->floor_type[VAR_7],16);
    if(VAR_1[VAR_6->floor_type[VAR_7]]->pack)
      VAR_1[VAR_6->floor_type[VAR_7]]->pack(VAR_6->floor_param[VAR_7],VAR_4);
    else
      goto err_out;
  }


  FUNC_1(VAR_4,VAR_6->residues-1,6);
  for(VAR_7=0;VAR_7<VAR_6->residues;VAR_7++){
    FUNC_1(VAR_4,VAR_6->residue_type[VAR_7],16);
    VAR_3[VAR_6->residue_type[VAR_7]]->pack(VAR_6->residue_param[VAR_7],VAR_4);
  }


  FUNC_1(VAR_4,VAR_6->maps-1,6);
  for(VAR_7=0;VAR_7<VAR_6->maps;VAR_7++){
    FUNC_1(VAR_4,VAR_6->map_type[VAR_7],16);
    VAR_2[VAR_6->map_type[VAR_7]]->pack(VAR_5,VAR_6->map_param[VAR_7],VAR_4);
  }


  FUNC_1(VAR_4,VAR_6->modes-1,6);
  for(VAR_7=0;VAR_7<VAR_6->modes;VAR_7++){
    FUNC_1(VAR_4,VAR_6->mode_param[VAR_7]->blockflag,1);
    FUNC_1(VAR_4,VAR_6->mode_param[VAR_7]->windowtype,16);
    FUNC_1(VAR_4,VAR_6->mode_param[VAR_7]->transformtype,16);
    FUNC_1(VAR_4,VAR_6->mode_param[VAR_7]->mapping,8);
  }
  FUNC_1(VAR_4,1,1);

  return(0);
err_out:
  return(-1);
}
