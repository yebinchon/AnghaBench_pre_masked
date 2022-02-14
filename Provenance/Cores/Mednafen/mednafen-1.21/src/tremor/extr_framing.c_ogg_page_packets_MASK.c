
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* header; } ;
typedef TYPE_1__ ogg_page ;



int FUNC_0(const ogg_page *VAR_0){
  int VAR_1,VAR_2=VAR_0->header[26],VAR_3=0;
  for(VAR_1=0;VAR_1<VAR_2;VAR_1++)
    if(VAR_0->header[27+VAR_1]<255)VAR_3++;
  return(VAR_3);
}
