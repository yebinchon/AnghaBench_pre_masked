
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vorbis_comment ;
struct TYPE_8__ {int buffer; } ;
typedef TYPE_1__ oggpack_buffer ;
struct TYPE_9__ {int packetno; scalar_t__ granulepos; scalar_t__ e_o_s; scalar_t__ b_o_s; int bytes; int packet; } ;
typedef TYPE_2__ ogg_packet ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(vorbis_comment *VAR_1,
                                          ogg_packet *VAR_2){

  oggpack_buffer VAR_3;

  FUNC_5(&VAR_3);
  if(FUNC_1(&VAR_3,VAR_1)){
    FUNC_4(&VAR_3);
    return VAR_0;
  }

  VAR_2->packet = FUNC_0(FUNC_3(&VAR_3));
  FUNC_2(VAR_2->packet, VAR_3.buffer, FUNC_3(&VAR_3));

  VAR_2->bytes=FUNC_3(&VAR_3);
  VAR_2->b_o_s=0;
  VAR_2->e_o_s=0;
  VAR_2->granulepos=0;
  VAR_2->packetno=1;

  FUNC_4(&VAR_3);
  return 0;
}
