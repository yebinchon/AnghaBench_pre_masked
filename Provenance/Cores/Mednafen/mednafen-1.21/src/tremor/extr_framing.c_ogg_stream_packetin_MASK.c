
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ogg_stream_state ;
struct TYPE_5__ {int granulepos; int e_o_s; int bytes; int packet; } ;
typedef TYPE_1__ ogg_packet ;
struct TYPE_6__ {int iov_len; int iov_base; } ;
typedef TYPE_2__ ogg_iovec_t ;


 int FUNC_0 (int *,TYPE_2__*,int,int ,int ) ;

int FUNC_1(ogg_stream_state *VAR_0,ogg_packet *VAR_1){
  ogg_iovec_t VAR_2;
  VAR_2.iov_base = VAR_1->packet;
  VAR_2.iov_len = VAR_1->bytes;
  return FUNC_0(VAR_0, &VAR_2, 1, VAR_1->e_o_s, VAR_1->granulepos);
}
