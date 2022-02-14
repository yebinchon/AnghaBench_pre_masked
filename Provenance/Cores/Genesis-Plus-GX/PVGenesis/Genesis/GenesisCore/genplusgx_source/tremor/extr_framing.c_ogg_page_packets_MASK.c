
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int oggbyte_buffer ;
struct TYPE_3__ {int header; } ;
typedef TYPE_1__ ogg_page ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(ogg_page *VAR_0){
  int VAR_1;
  int VAR_2;
  int VAR_3=0;
  oggbyte_buffer VAR_4;
  FUNC_0(&VAR_4,VAR_0->header);

  VAR_2=FUNC_1(&VAR_4,26);
  for(VAR_1=0;VAR_1<VAR_2;VAR_1++)
    if(FUNC_1(&VAR_4,27+VAR_1)<255)VAR_3++;
  return(VAR_3);
}
