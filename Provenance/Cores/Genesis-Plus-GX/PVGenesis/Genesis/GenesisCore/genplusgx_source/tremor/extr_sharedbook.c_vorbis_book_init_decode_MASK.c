
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int entries; scalar_t__* lengthlist; int dim; } ;
typedef TYPE_1__ static_codebook ;
typedef int ogg_uint32_t ;
struct TYPE_9__ {int entries; int used_entries; int* codelist; int* dec_index; char* dec_codelengths; int dec_firsttablen; int* dec_firsttable; char dec_maxlength; int binarypoint; int valuelist; int dim; } ;
typedef TYPE_2__ codebook ;


 int FUNC_0 (TYPE_1__ const*,int,int*,int *) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (scalar_t__*,int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int**,int,int,int ) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_2__*) ;

int FUNC_11(codebook *VAR_1,const static_codebook *VAR_2){
  int VAR_3,VAR_4,VAR_5=0,VAR_6;
  int *VAR_7;
  FUNC_8(VAR_1,0,sizeof(*VAR_1));


  for(VAR_3=0;VAR_3<VAR_2->entries;VAR_3++)
    if(VAR_2->lengthlist[VAR_3]>0)
      VAR_5++;

  VAR_1->entries=VAR_2->entries;
  VAR_1->used_entries=VAR_5;
  VAR_1->dim=VAR_2->dim;

  if(VAR_5>0){
    ogg_uint32_t *VAR_8=FUNC_2(VAR_2->lengthlist,VAR_2->entries,VAR_1->used_entries);
    ogg_uint32_t **VAR_9=(ogg_uint32_t **)FUNC_6(sizeof(*VAR_9)*VAR_5);

    if(VAR_8==((void*)0))goto err_out;

    for(VAR_3=0;VAR_3<VAR_5;VAR_3++){
      VAR_8[VAR_3]=FUNC_7(VAR_8[VAR_3]);
      VAR_9[VAR_3]=VAR_8+VAR_3;
    }

    FUNC_9(VAR_9,VAR_5,sizeof(*VAR_9),VAR_0);

    VAR_7=(int *)FUNC_6(VAR_5*sizeof(*VAR_7));
    VAR_1->codelist=(ogg_uint32_t *)FUNC_5(VAR_5*sizeof(*VAR_1->codelist));

    for(VAR_3=0;VAR_3<VAR_5;VAR_3++){
      int VAR_10=VAR_9[VAR_3]-VAR_8;
      VAR_7[VAR_10]=VAR_3;
    }

    for(VAR_3=0;VAR_3<VAR_5;VAR_3++)
      VAR_1->codelist[VAR_7[VAR_3]]=VAR_8[VAR_3];
    FUNC_4(VAR_8);



    VAR_1->valuelist=FUNC_0(VAR_2,VAR_5,VAR_7,&VAR_1->binarypoint);
    VAR_1->dec_index=(int *)FUNC_5(VAR_5*sizeof(*VAR_1->dec_index));

    for(VAR_5=0,VAR_3=0;VAR_3<VAR_2->entries;VAR_3++)
      if(VAR_2->lengthlist[VAR_3]>0)
 VAR_1->dec_index[VAR_7[VAR_5++]]=VAR_3;

    VAR_1->dec_codelengths=(char *)FUNC_5(VAR_5*sizeof(*VAR_1->dec_codelengths));
    for(VAR_5=0,VAR_3=0;VAR_3<VAR_2->entries;VAR_3++)
      if(VAR_2->lengthlist[VAR_3]>0)
 VAR_1->dec_codelengths[VAR_7[VAR_5++]]=VAR_2->lengthlist[VAR_3];

    VAR_1->dec_firsttablen=FUNC_1(VAR_1->used_entries)-4;
    if(VAR_1->dec_firsttablen<5)VAR_1->dec_firsttablen=5;
    if(VAR_1->dec_firsttablen>8)VAR_1->dec_firsttablen=8;

    VAR_6=1<<VAR_1->dec_firsttablen;
    VAR_1->dec_firsttable=(ogg_uint32_t *)FUNC_3(VAR_6,sizeof(*VAR_1->dec_firsttable));
    VAR_1->dec_maxlength=0;

    for(VAR_3=0;VAR_3<VAR_5;VAR_3++){
      if(VAR_1->dec_maxlength<VAR_1->dec_codelengths[VAR_3])
 VAR_1->dec_maxlength=VAR_1->dec_codelengths[VAR_3];
      if(VAR_1->dec_codelengths[VAR_3]<=VAR_1->dec_firsttablen){
 ogg_uint32_t VAR_11=FUNC_7(VAR_1->codelist[VAR_3]);
 for(VAR_4=0;VAR_4<(1<<(VAR_1->dec_firsttablen-VAR_1->dec_codelengths[VAR_3]));VAR_4++)
   VAR_1->dec_firsttable[VAR_11|(VAR_4<<VAR_1->dec_codelengths[VAR_3])]=VAR_3+1;
      }
    }



    {
      ogg_uint32_t VAR_12=0xfffffffeUL<<(31-VAR_1->dec_firsttablen);
      long VAR_13=0,VAR_14=0;

      for(VAR_3=0;VAR_3<VAR_6;VAR_3++){
 ogg_uint32_t VAR_15=VAR_3<<(32-VAR_1->dec_firsttablen);
 if(VAR_1->dec_firsttable[FUNC_7(VAR_15)]==0){
   while((VAR_13+1)<VAR_5 && VAR_1->codelist[VAR_13+1]<=VAR_15)VAR_13++;
   while( VAR_14<VAR_5 && VAR_15>=(VAR_1->codelist[VAR_14]&VAR_12))VAR_14++;




   {
     unsigned long VAR_16=VAR_13;
     unsigned long VAR_17=VAR_5-VAR_14;

     if(VAR_16>0x7fff)VAR_16=0x7fff;
     if(VAR_17>0x7fff)VAR_17=0x7fff;
     VAR_1->dec_firsttable[FUNC_7(VAR_15)]=
       0x80000000UL | (VAR_16<<15) | VAR_17;
   }
 }
      }
    }
  }

  return(0);
 err_out:
  FUNC_10(VAR_1);
  return(-1);
}
