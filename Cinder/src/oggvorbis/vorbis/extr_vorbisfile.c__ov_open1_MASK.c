
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* seek_func ) (void*,int ,int ) ;} ;
typedef TYPE_1__ ov_callbacks ;
struct TYPE_11__ {int serialno; } ;
struct TYPE_10__ {int seekable; int links; int* serialnos; int current_serialno; int ready_state; int offset; int * dataoffsets; scalar_t__* offsets; TYPE_4__ os; int * datasource; void* vc; void* vi; int oy; TYPE_1__ callbacks; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,void*,long**,int*,int *) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (long*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 char* FUNC_6 (int *,long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,long) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_11(void *VAR_2,OggVorbis_File *VAR_3,const char *VAR_4,
                     long VAR_5, ov_callbacks VAR_6){
  int VAR_7=((VAR_2 && VAR_6.seek_func)?VAR_6.seek_func(VAR_2,0,VAR_1):-1);
  long *VAR_8=((void*)0);
  int VAR_9=0;
  int VAR_10;

  FUNC_4(VAR_3,0,sizeof(*VAR_3));
  VAR_3->datasource=VAR_2;
  VAR_3->callbacks = VAR_6;


  FUNC_7(&VAR_3->oy);





  if(VAR_4){
    char *VAR_11=FUNC_6(&VAR_3->oy,VAR_5);
    FUNC_3(VAR_11,VAR_4,VAR_5);
    FUNC_8(&VAR_3->oy,VAR_5);
  }


  if(VAR_7!=-1)VAR_3->seekable=1;



  VAR_3->links=1;
  VAR_3->vi=FUNC_1(VAR_3->links,sizeof(*VAR_3->vi));
  VAR_3->vc=FUNC_1(VAR_3->links,sizeof(*VAR_3->vc));
  FUNC_5(&VAR_3->os,-1);



  if((VAR_10=FUNC_0(VAR_3,VAR_3->vi,VAR_3->vc,&VAR_8,&VAR_9,((void*)0)))<0){
    VAR_3->datasource=((void*)0);
    FUNC_9(VAR_3);
  }else{



    VAR_3->serialnos=FUNC_1(VAR_9+2,sizeof(*VAR_3->serialnos));
    VAR_3->serialnos[0]=VAR_3->current_serialno=VAR_3->os.serialno;
    VAR_3->serialnos[1]=VAR_9;
    FUNC_3(VAR_3->serialnos+2,VAR_8,VAR_9*sizeof(*VAR_3->serialnos));

    VAR_3->offsets=FUNC_1(1,sizeof(*VAR_3->offsets));
    VAR_3->dataoffsets=FUNC_1(1,sizeof(*VAR_3->dataoffsets));
    VAR_3->offsets[0]=0;
    VAR_3->dataoffsets[0]=VAR_3->offset;

    VAR_3->ready_state=VAR_0;
  }
  if(VAR_8)FUNC_2(VAR_8);
  return(VAR_10);
}
