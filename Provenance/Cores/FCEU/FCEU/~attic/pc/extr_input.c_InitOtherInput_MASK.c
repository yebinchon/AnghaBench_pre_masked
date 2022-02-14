
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,void*,int) ;
 int FUNC_2 (int,void*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int * VAR_12 ;

void FUNC_4(void)
{
   void *VAR_13;

   int VAR_14;
   int VAR_15;
   int VAR_16;

   for(VAR_14=0,VAR_15=0;VAR_15<2;VAR_15++)
   {
    VAR_16=0;
    VAR_13=0;
    switch(VAR_4[VAR_15])
    {
     case 130:
     case 129:VAR_13=&VAR_12[VAR_15];break;
     case 131:VAR_13=&VAR_5;break;
     case 132:VAR_13=VAR_7;VAR_14|=1;break;
     case 128:VAR_13=VAR_7;
                                VAR_14|=1;
                                VAR_16=1;
                                break;
    }
    FUNC_1(VAR_15,VAR_4[VAR_15],VAR_13,VAR_16);
   }

   VAR_16=0;
   VAR_13=0;
   switch(VAR_4[2])
   {
    case 134:VAR_13=VAR_7;VAR_14|=1;VAR_16=1;break;
    case 136:VAR_13=VAR_7;VAR_14|=1;VAR_16=1;break;
    case 143:VAR_13=VAR_7;VAR_14|=1;break;
    case 141:VAR_13=VAR_11;break;
    case 138:VAR_13=&VAR_3;break;
    case 137:VAR_13=&VAR_6;break;
    case 135:VAR_13=&VAR_8;break;
    case 133:VAR_13=&VAR_9;break;
    case 142:VAR_13=VAR_0;break;
    case 140:
    case 139:VAR_13=&VAR_2;break;
   }

   FUNC_2(VAR_4[2],VAR_13,VAR_16);
   FUNC_0(VAR_10&VAR_1);

   if(VAR_14)
    FUNC_3();
}
