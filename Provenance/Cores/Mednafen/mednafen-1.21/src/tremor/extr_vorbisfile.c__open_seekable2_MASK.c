
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ogg_int64_t ;
struct TYPE_10__ {int (* tell_func ) (int ) ;int (* seek_func ) (int ,int ,int ) ;} ;
struct TYPE_9__ {int serialno; } ;
struct TYPE_11__ {scalar_t__* dataoffsets; int offset; int end; int* serialnos; scalar_t__* pcmlengths; scalar_t__* offsets; int datasource; TYPE_2__ callbacks; int vi; TYPE_1__ os; } ;
typedef TYPE_3__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__,int,int*,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int*,int,int*,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(OggVorbis_File *VAR_3){
  ogg_int64_t VAR_4=VAR_3->dataoffsets[0],VAR_5,VAR_6=-1;
  int VAR_7=VAR_3->os.serialno;
  int VAR_8=VAR_3->os.serialno;





  ogg_int64_t VAR_9 = FUNC_2(VAR_3,VAR_3->vi);


  if(VAR_3->callbacks.seek_func && VAR_3->callbacks.tell_func){
    (VAR_3->callbacks.seek_func)(VAR_3->datasource,0,VAR_2);
    VAR_3->offset=VAR_3->end=(VAR_3->callbacks.tell_func)(VAR_3->datasource);
  }else{
    VAR_3->offset=VAR_3->end=-1;
  }


  if(VAR_3->end==-1) return(VAR_0);




  VAR_5=FUNC_1(VAR_3,VAR_3->end,VAR_3->serialnos+2,VAR_3->serialnos[1],&VAR_7,&VAR_6);
  if(VAR_5<0)return(VAR_5);


  if(FUNC_0(VAR_3,0,VAR_4,VAR_5,VAR_6,VAR_7,
                              VAR_3->serialnos+2,VAR_3->serialnos[1],0)<0)return(VAR_1);

  VAR_3->offsets[0]=0;
  VAR_3->serialnos[0]=VAR_8;
  VAR_3->dataoffsets[0]=VAR_4;
  VAR_3->pcmlengths[0]=VAR_9;
  VAR_3->pcmlengths[1]-=VAR_9;
  if(VAR_3->pcmlengths[1]<0)VAR_3->pcmlengths[1]=0;

  return(FUNC_3(VAR_3,VAR_4));
}
