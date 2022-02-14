
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmpbuffer ;
typedef int UCHAR ;
struct TYPE_5__ {int ZoneType; int eAuthenMode; int eEncryptionStatus; } ;
struct TYPE_6__ {TYPE_1__ config_file; } ;
typedef TYPE_2__* PSDevice ;


 scalar_t__ FUNC_0 (char*,int *,int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(PSDevice VAR_4) {
  int VAR_5=0;
  UCHAR VAR_6[100];
  UCHAR *VAR_7=((void*)0);


 VAR_4->config_file.ZoneType = -1;
 VAR_4->config_file.eAuthenMode = -1;
 VAR_4->config_file.eEncryptionStatus = -1;

  if((VAR_7=FUNC_1(VAR_4)) ==((void*)0)) {
     VAR_5 =-1;
     return VAR_5;
  }


{
    FUNC_4(VAR_6,0,sizeof(VAR_6));
    if(FUNC_0("ZONETYPE",VAR_6,VAR_7) ==VAR_0) {
    if(FUNC_3(VAR_6,"USA",3)==0) {
      VAR_4->config_file.ZoneType=VAR_3;
    }
    else if(FUNC_3(VAR_6,"JAPAN",5)==0) {
      VAR_4->config_file.ZoneType=VAR_2;
    }
    else if(FUNC_3(VAR_6,"EUROPE",6)==0) {
     VAR_4->config_file.ZoneType=VAR_1;
    }
    else {
      FUNC_5("Unknown Zonetype[%s]?\n",VAR_6);
   }
 }
}



  {
 FUNC_4(VAR_6,0,sizeof(VAR_6));
       if(FUNC_0("AUTHENMODE",VAR_6,VAR_7)==VAR_0) {
  VAR_4->config_file.eAuthenMode = (int) FUNC_6(VAR_6, ((void*)0), 10);
       }

 FUNC_4(VAR_6,0,sizeof(VAR_6));
       if(FUNC_0("ENCRYPTIONMODE",VAR_6,VAR_7)==VAR_0) {
  VAR_4->config_file.eEncryptionStatus= (int) FUNC_6(VAR_6, ((void*)0), 10);
       }
  }


  FUNC_2(VAR_7);
  return VAR_5;
}
