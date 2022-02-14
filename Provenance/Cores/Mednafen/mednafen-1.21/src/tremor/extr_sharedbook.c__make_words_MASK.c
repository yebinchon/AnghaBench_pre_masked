
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long ogg_uint32_t ;
typedef int marker ;


 int FUNC_0 (long*) ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (long*,int ,int) ;

ogg_uint32_t *FUNC_3(long *VAR_0,long VAR_1,long VAR_2){
  long VAR_3,VAR_4,VAR_5=0;
  ogg_uint32_t VAR_6[33];
  ogg_uint32_t *VAR_7=(ogg_uint32_t *)FUNC_1((VAR_2?VAR_2:VAR_1)*sizeof(*VAR_7));
  FUNC_2(VAR_6,0,sizeof(VAR_6));

  for(VAR_3=0;VAR_3<VAR_1;VAR_3++){
    long VAR_8=VAR_0[VAR_3];
    if(VAR_8>0){
      ogg_uint32_t VAR_9=VAR_6[VAR_8];







      if(VAR_8<32 && (VAR_9>>VAR_8)){

 FUNC_0(VAR_7);
 return(((void*)0));
      }
      VAR_7[VAR_5++]=VAR_9;



      {
 for(VAR_4=VAR_8;VAR_4>0;VAR_4--){

   if(VAR_6[VAR_4]&1){

     if(VAR_4==1)
       VAR_6[1]++;
     else
       VAR_6[VAR_4]=VAR_6[VAR_4-1]<<1;
     break;

   }
   VAR_6[VAR_4]++;
 }
      }




      for(VAR_4=VAR_8+1;VAR_4<33;VAR_4++)
 if((VAR_6[VAR_4]>>1) == VAR_9){
   VAR_9=VAR_6[VAR_4];
   VAR_6[VAR_4]=VAR_6[VAR_4-1]<<1;
 }else
   break;
    }else
      if(VAR_2==0)VAR_5++;
  }






  if(VAR_2 != 1){
    for(VAR_3=1;VAR_3<33;VAR_3++)
      if(VAR_6[VAR_3] & (0xffffffffUL>>(32-VAR_3))){
       FUNC_0(VAR_7);
       return(((void*)0));
      }
  }



  for(VAR_3=0,VAR_5=0;VAR_3<VAR_1;VAR_3++){
    ogg_uint32_t VAR_10=0;
    for(VAR_4=0;VAR_4<VAR_0[VAR_3];VAR_4++){
      VAR_10<<=1;
      VAR_10|=(VAR_7[VAR_5]>>VAR_4)&1;
    }

    if(VAR_2){
      if(VAR_0[VAR_3])
 VAR_7[VAR_5++]=VAR_10;
    }else
      VAR_7[VAR_5++]=VAR_10;
  }

  return(VAR_7);
}
