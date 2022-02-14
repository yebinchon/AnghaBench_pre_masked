
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_19__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_20__ {int links; int* dataoffsets; int* pcmlengths; int* offsets; int offset; scalar_t__* serialnos; void* vc; void* vi; int os; } ;
typedef TYPE_3__ OggVorbis_File ;


 scalar_t__ FUNC_0 (TYPE_3__*,void*,void*,int *,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 long FUNC_15 (void*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_16(OggVorbis_File *VAR_0, ogg_int64_t VAR_1){
  ogg_page VAR_2={0,0,0,0};
  int VAR_3;
  ogg_int64_t VAR_4;

  VAR_0->vi=FUNC_4(VAR_0->vi,VAR_0->links*sizeof(*VAR_0->vi));
  VAR_0->vc=FUNC_4(VAR_0->vc,VAR_0->links*sizeof(*VAR_0->vc));
  VAR_0->dataoffsets=FUNC_3(VAR_0->links*sizeof(*VAR_0->dataoffsets));
  VAR_0->pcmlengths=FUNC_3(VAR_0->links*2*sizeof(*VAR_0->pcmlengths));

  for(VAR_3=0;VAR_3<VAR_0->links;VAR_3++){
    if(VAR_3==0){

      VAR_0->dataoffsets[VAR_3]=VAR_1;
      FUNC_5(VAR_0,VAR_1);

    }else{



      FUNC_5(VAR_0,VAR_0->offsets[VAR_3]);
      if(FUNC_0(VAR_0,VAR_0->vi+VAR_3,VAR_0->vc+VAR_3,((void*)0),((void*)0))<0){
     VAR_0->dataoffsets[VAR_3]=-1;
      }else{
 VAR_0->dataoffsets[VAR_3]=VAR_0->offset;
      }
    }



    if(VAR_0->dataoffsets[VAR_3]!=-1){
      ogg_int64_t VAR_5=0,VAR_6;
      long VAR_7=-1;
      int VAR_8;

      FUNC_12(VAR_0->os,VAR_0->serialnos[VAR_3]);

      while(1){
 ogg_packet VAR_9={0,0,0,0,0,0};

 VAR_4=FUNC_1(VAR_0,&VAR_2,-1);
 if(VAR_4<0)


   break;

 if(FUNC_9(&VAR_2)!=VAR_0->serialnos[VAR_3])
   break;

 VAR_6=FUNC_7(&VAR_2);


 FUNC_11(VAR_0->os,&VAR_2);
 while((VAR_8=FUNC_10(VAR_0->os,&VAR_9))){
   if(VAR_8>0){
     long VAR_10=FUNC_15(VAR_0->vi+VAR_3,&VAR_9);
     if(VAR_7!=-1)
       VAR_5+=(VAR_7+VAR_10)>>2;
     VAR_7=VAR_10;
   }
 }
 FUNC_6(&VAR_9);

 if(VAR_6!=-1){

   VAR_5= VAR_6-VAR_5;
   break;
 }
      }



      if(VAR_5<0)VAR_5=0;

      VAR_0->pcmlengths[VAR_3*2]=VAR_5;
    }



    {
      ogg_int64_t VAR_11=VAR_0->offsets[VAR_3+1];
      FUNC_5(VAR_0,VAR_11);

      while(1){
 VAR_4=FUNC_2(VAR_0,&VAR_2);
 if(VAR_4<0){

   FUNC_14(VAR_0->vi+VAR_3);
   FUNC_13(VAR_0->vc+VAR_3);
   break;
 }
 if(FUNC_7(&VAR_2)!=-1){
   VAR_0->pcmlengths[VAR_3*2+1]=FUNC_7(&VAR_2)-VAR_0->pcmlengths[VAR_3*2];
   break;
 }
 VAR_0->offset=VAR_4;
      }
    }
  }
  FUNC_8(&VAR_2);
}
