
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vorbis_info ;
typedef int vorbis_comment ;
typedef int ogg_page ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_9__ {int serialno; } ;
struct TYPE_10__ {scalar_t__ offset; long links; long* offsets; long* serialnos; long* dataoffsets; scalar_t__* pcmlengths; int * vc; int * vi; TYPE_1__ os; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *,long**,int*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int) ;
 void* FUNC_2 (TYPE_2__*,long*,int,int*,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,long*,int) ;
 scalar_t__ FUNC_5 (int,long*,int) ;
 int FUNC_6 (long*) ;
 void* FUNC_7 (int) ;
 void* FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(OggVorbis_File *VAR_2,
                                    ogg_int64_t VAR_3,
                                    ogg_int64_t VAR_4,
                                    ogg_int64_t VAR_5,
                                    ogg_int64_t VAR_6,
                                    int VAR_7,
                                    long *VAR_8,
                                    int VAR_9,
                                    long VAR_10){
  ogg_int64_t VAR_11;
  ogg_int64_t VAR_12=VAR_4;
  ogg_int64_t VAR_13=VAR_5;
  ogg_int64_t VAR_14=VAR_5;
  ogg_int64_t VAR_15=-1;
  ogg_page VAR_16;
  ogg_int64_t VAR_17,VAR_18;
  int VAR_19 = VAR_2->os.serialno;
  if(FUNC_5(VAR_7,VAR_8,VAR_9)){






    while(VAR_7 != VAR_19){
      VAR_7 = VAR_19;
      VAR_2->offset=FUNC_2(VAR_2,VAR_8,VAR_9,&VAR_7,&VAR_6);
    }

    VAR_2->links=VAR_10+1;
    if(VAR_2->offsets)FUNC_6(VAR_2->offsets);
    if(VAR_2->serialnos)FUNC_6(VAR_2->serialnos);
    if(VAR_2->dataoffsets)FUNC_6(VAR_2->dataoffsets);

    VAR_2->offsets=FUNC_7((VAR_2->links+1)*sizeof(*VAR_2->offsets));
    VAR_2->vi=FUNC_8(VAR_2->vi,VAR_2->links*sizeof(*VAR_2->vi));
    VAR_2->vc=FUNC_8(VAR_2->vc,VAR_2->links*sizeof(*VAR_2->vc));
    VAR_2->serialnos=FUNC_7(VAR_2->links*sizeof(*VAR_2->serialnos));
    VAR_2->dataoffsets=FUNC_7(VAR_2->links*sizeof(*VAR_2->dataoffsets));
    VAR_2->pcmlengths=FUNC_7(VAR_2->links*2*sizeof(*VAR_2->pcmlengths));

    VAR_2->offsets[VAR_10+1]=VAR_5;
    VAR_2->offsets[VAR_10]=VAR_3;
    VAR_2->pcmlengths[VAR_10*2+1]=(VAR_6<0?0:VAR_6);

  }else{

    long *VAR_20=((void*)0);
    int VAR_21=0;
    vorbis_info VAR_22;
    vorbis_comment VAR_23;



    while(VAR_4<VAR_13){
      ogg_int64_t VAR_24;

      if(VAR_13-VAR_4<VAR_0){
        VAR_24=VAR_4;
      }else{
        VAR_24=(VAR_4+VAR_13)/2;
      }

      if(VAR_24 != VAR_2->offset){
        VAR_17=FUNC_9(VAR_2,VAR_24);
        if(VAR_17)return(VAR_17);
      }

      VAR_18=FUNC_1(VAR_2,&VAR_16,-1);
      if(VAR_18==VAR_1)return(VAR_1);
      if(VAR_18<0 || !FUNC_4(&VAR_16,VAR_8,VAR_9)){
        VAR_13=VAR_24;
        if(VAR_18>=0)VAR_14=VAR_18;
      }else{
        VAR_4=VAR_2->offset;
      }
    }




    {
      int VAR_25 = VAR_19+1;
      VAR_2->offset = VAR_14;
      while(VAR_25 != VAR_19){
        VAR_25 = VAR_19;
        VAR_2->offset=FUNC_2(VAR_2,VAR_8,VAR_9,&VAR_25,&VAR_15);
      }
    }

    if(VAR_2->offset!=VAR_14){
      VAR_17=FUNC_9(VAR_2,VAR_14);
      if(VAR_17)return(VAR_17);
    }

    VAR_17=FUNC_0(VAR_2,&VAR_22,&VAR_23,&VAR_20,&VAR_21,((void*)0));
    if(VAR_17)return(VAR_17);
    VAR_19 = VAR_2->os.serialno;
    VAR_12 = VAR_2->offset;



    VAR_11 = FUNC_3(VAR_2,&VAR_22);

    VAR_17=FUNC_10(VAR_2,VAR_14,VAR_2->offset,VAR_5,VAR_6,VAR_7,
                                 VAR_20,VAR_21,VAR_10+1);
    if(VAR_17)return(VAR_17);

    if(VAR_20)FUNC_6(VAR_20);

    VAR_2->offsets[VAR_10+1]=VAR_14;
    VAR_2->serialnos[VAR_10+1]=VAR_19;
    VAR_2->dataoffsets[VAR_10+1]=VAR_12;

    VAR_2->vi[VAR_10+1]=VAR_22;
    VAR_2->vc[VAR_10+1]=VAR_23;

    VAR_2->pcmlengths[VAR_10*2+1]=VAR_15;
    VAR_2->pcmlengths[VAR_10*2+2]=VAR_11;
    VAR_2->pcmlengths[VAR_10*2+3]-=VAR_11;
    if(VAR_2->pcmlengths[VAR_10*2+3]<0)VAR_2->pcmlengths[VAR_10*2+3]=0;
  }
  return(0);
}
