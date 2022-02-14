
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int*,...) ;
 scalar_t__ FUNC_1 (int*,char*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,...) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static int FUNC_7(UCHAR *VAR_2, UCHAR *VAR_3,UCHAR *VAR_4)
{
  UCHAR VAR_5[100];
  UCHAR VAR_6[100];
  UCHAR *VAR_7=((void*)0),*VAR_8=((void*)0),*VAR_9=((void*)0);
  int VAR_10;

    FUNC_3(VAR_5,0,100);
    FUNC_4(VAR_5, VAR_2);
    FUNC_4(VAR_5, "=");
    VAR_4+=FUNC_6(VAR_5);


    if((VAR_7 = FUNC_0(VAR_4,VAR_5))==((void*)0))
 return VAR_0;


for(VAR_10=1;;VAR_10++) {
  if(FUNC_1(VAR_7-VAR_10,"\n",1)==0)
      break;
  if(FUNC_1(VAR_7-VAR_10,"#",1)==0)
      return VAR_0;
}


     if((VAR_8 = FUNC_0(VAR_7,"\n"))==((void*)0)) {
          VAR_8=VAR_7+FUNC_6(VAR_7);
       }

   FUNC_3(VAR_6,0,100);
   FUNC_2(VAR_6,VAR_7,VAR_8-VAR_7);
   VAR_6[VAR_8-VAR_7]='\0';


   if((VAR_7 = FUNC_0(VAR_6,"="))==((void*)0))
      return VAR_0;
   FUNC_3(VAR_5,0,100);
   FUNC_5(VAR_5,VAR_7+1);


  VAR_9 = VAR_5;
  while(*VAR_9 != 0x00) {
   if(*VAR_9==' ')
     VAR_9++;
         else
   break;
  }

   FUNC_2(VAR_3,VAR_9,FUNC_6(VAR_9));
 return VAR_1;
}
