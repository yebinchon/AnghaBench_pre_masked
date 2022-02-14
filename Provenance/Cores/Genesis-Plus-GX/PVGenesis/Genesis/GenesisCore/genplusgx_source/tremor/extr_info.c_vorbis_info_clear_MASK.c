
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_11__ {int modes; int maps; size_t* map_type; int floors; size_t* floor_type; int residues; size_t* residue_type; int books; struct TYPE_11__* fullbooks; scalar_t__* book_param; scalar_t__* residue_param; scalar_t__* floor_param; scalar_t__* map_param; struct TYPE_11__** mode_param; } ;
typedef TYPE_2__ codec_setup_info ;
struct TYPE_14__ {int (* free_info ) (scalar_t__) ;} ;
struct TYPE_13__ {int (* free_info ) (scalar_t__) ;} ;
struct TYPE_12__ {int (* free_info ) (scalar_t__) ;} ;


 TYPE_9__** VAR_0 ;
 TYPE_8__** VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_6__** VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(vorbis_info *VAR_3){
  codec_setup_info *VAR_4=(codec_setup_info *)VAR_3->codec_setup;
  int VAR_5;

  if(VAR_4){

    for(VAR_5=0;VAR_5<VAR_4->modes;VAR_5++)
      if(VAR_4->mode_param[VAR_5])FUNC_0(VAR_4->mode_param[VAR_5]);

    for(VAR_5=0;VAR_5<VAR_4->maps;VAR_5++)
      if(VAR_4->map_param[VAR_5])
 VAR_1[VAR_4->map_type[VAR_5]]->free_info(VAR_4->map_param[VAR_5]);

    for(VAR_5=0;VAR_5<VAR_4->floors;VAR_5++)
      if(VAR_4->floor_param[VAR_5])
 VAR_0[VAR_4->floor_type[VAR_5]]->free_info(VAR_4->floor_param[VAR_5]);

    for(VAR_5=0;VAR_5<VAR_4->residues;VAR_5++)
      if(VAR_4->residue_param[VAR_5])
 VAR_2[VAR_4->residue_type[VAR_5]]->free_info(VAR_4->residue_param[VAR_5]);

    for(VAR_5=0;VAR_5<VAR_4->books;VAR_5++){
      if(VAR_4->book_param[VAR_5]){

 FUNC_6(VAR_4->book_param[VAR_5]);
      }
      if(VAR_4->fullbooks)
 FUNC_5(VAR_4->fullbooks+VAR_5);
    }
    if(VAR_4->fullbooks)
 FUNC_0(VAR_4->fullbooks);

    FUNC_0(VAR_4);
  }

  FUNC_1(VAR_3,0,sizeof(*VAR_3));
}
