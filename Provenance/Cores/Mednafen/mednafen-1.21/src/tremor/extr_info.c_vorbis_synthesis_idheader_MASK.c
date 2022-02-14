
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_3__ {int b_o_s; int bytes; int packet; } ;
typedef TYPE_1__ ogg_packet ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(ogg_packet *VAR_0){
  oggpack_buffer VAR_1;
  char VAR_2[6];

  if(VAR_0){
    FUNC_4(&VAR_1,VAR_0->packet,VAR_0->bytes);

    if(!VAR_0->b_o_s)
      return(0);

    if(FUNC_3(&VAR_1,8) != 1)
      return 0;

    FUNC_2(VAR_2,0,6);
    FUNC_0(&VAR_1,VAR_2,6);
    if(FUNC_1(VAR_2,"vorbis",6))
      return 0;

    return 1;
  }

  return 0;
}
