
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 int VAR_11 ;

uint32 FUNC_1(void)
{
        int VAR_12;
        unsigned long VAR_13;
 static int VAR_14=0;
        VAR_13=0;

 VAR_14^=1;
        if(!VAR_11)
         FUNC_0();
        for(VAR_12=0;VAR_12<6;VAR_12++)
  if((VAR_12>=4 && VAR_14) || VAR_12<4)
          if(VAR_6&VAR_5[VAR_12]) VAR_13|=(1<<VAR_12&3)<<((VAR_4-1)<<3);

        if(VAR_7<=VAR_8*.25) VAR_13|=VAR_1<<((VAR_4-1)<<3);
        else if(VAR_7>=VAR_8*1.75) VAR_13|=VAR_2<<((VAR_4-1)<<3);
        if(VAR_9<=VAR_10*.25) VAR_13|=VAR_3<<((VAR_4-1)<<3);
        else if(VAR_9>=VAR_10*1.75) VAR_13|=VAR_0<<((VAR_4-1)<<3);

        return VAR_13;
}
