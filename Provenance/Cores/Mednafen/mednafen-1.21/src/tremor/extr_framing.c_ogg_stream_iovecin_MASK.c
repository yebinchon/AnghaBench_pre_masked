
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* lacing_vals; int lacing_fill; int e_o_s; int packetno; int * granule_vals; int granulepos; scalar_t__ body_fill; scalar_t__ body_data; scalar_t__ body_returned; } ;
typedef TYPE_1__ ogg_stream_state ;
struct TYPE_9__ {long iov_len; int iov_base; } ;
typedef TYPE_2__ ogg_iovec_t ;
typedef int ogg_int64_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,long) ;
 scalar_t__ FUNC_1 (TYPE_1__*,long) ;
 int FUNC_2 (scalar_t__,int ,long) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

int FUNC_5(ogg_stream_state *VAR_1, ogg_iovec_t *VAR_2, int VAR_3,
                       long VAR_4, ogg_int64_t VAR_5){

  long VAR_6 = 0, VAR_7;
  int VAR_8;

  if(FUNC_4(VAR_1)) return -1;
  if(!VAR_2) return 0;

  for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8){
    if(VAR_2[VAR_8].iov_len>VAR_0) return -1;
    if(VAR_6>VAR_0-(long)VAR_2[VAR_8].iov_len) return -1;
    VAR_6 += (long)VAR_2[VAR_8].iov_len;
  }
  VAR_7=VAR_6/255+1;

  if(VAR_1->body_returned){




    VAR_1->body_fill-=VAR_1->body_returned;
    if(VAR_1->body_fill)
      FUNC_3(VAR_1->body_data,VAR_1->body_data+VAR_1->body_returned,
              VAR_1->body_fill);
    VAR_1->body_returned=0;
  }


  if(FUNC_0(VAR_1,VAR_6) || FUNC_1(VAR_1,VAR_7))
    return -1;






  for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
    FUNC_2(VAR_1->body_data+VAR_1->body_fill, VAR_2[VAR_8].iov_base, VAR_2[VAR_8].iov_len);
    VAR_1->body_fill += (int)VAR_2[VAR_8].iov_len;
  }


  for(VAR_8=0;VAR_8<VAR_7-1;VAR_8++){
    VAR_1->lacing_vals[VAR_1->lacing_fill+VAR_8]=255;
    VAR_1->granule_vals[VAR_1->lacing_fill+VAR_8]=VAR_1->granulepos;
  }
  VAR_1->lacing_vals[VAR_1->lacing_fill+VAR_8]=VAR_6%255;
  VAR_1->granulepos=VAR_1->granule_vals[VAR_1->lacing_fill+VAR_8]=VAR_5;


  VAR_1->lacing_vals[VAR_1->lacing_fill]|= 0x100;

  VAR_1->lacing_fill+=VAR_7;


  VAR_1->packetno++;

  if(VAR_4)VAR_1->e_o_s=1;

  return(0);
}
