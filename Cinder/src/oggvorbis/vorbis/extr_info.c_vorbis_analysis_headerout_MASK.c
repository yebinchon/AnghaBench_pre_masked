
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vorbis_info ;
struct TYPE_17__ {TYPE_2__* backend_state; int * vi; } ;
typedef TYPE_1__ vorbis_dsp_state ;
typedef int vorbis_comment ;
struct TYPE_18__ {int * header2; int * header1; int * header; } ;
typedef TYPE_2__ private_state ;
struct TYPE_19__ {int buffer; } ;
typedef TYPE_3__ oggpack_buffer ;
struct TYPE_20__ {int b_o_s; int packetno; scalar_t__ granulepos; scalar_t__ e_o_s; void* bytes; int * packet; } ;
typedef TYPE_4__ ogg_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 void* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;

int FUNC_11(vorbis_dsp_state *VAR_2,
                              vorbis_comment *VAR_3,
                              ogg_packet *VAR_4,
                              ogg_packet *VAR_5,
                              ogg_packet *VAR_6){
  int VAR_7=VAR_1;
  vorbis_info *VAR_8=VAR_2->vi;
  oggpack_buffer VAR_9;
  private_state *VAR_10=VAR_2->backend_state;

  if(!VAR_10){
    VAR_7=VAR_0;
    goto err_out;
  }



  FUNC_10(&VAR_9);
  if(FUNC_4(&VAR_9,VAR_8))goto err_out;


  if(VAR_10->header)FUNC_0(VAR_10->header);
  VAR_10->header=FUNC_1(FUNC_7(&VAR_9));
  FUNC_5(VAR_10->header,VAR_9.buffer,FUNC_7(&VAR_9));
  VAR_4->packet=VAR_10->header;
  VAR_4->bytes=FUNC_7(&VAR_9);
  VAR_4->b_o_s=1;
  VAR_4->e_o_s=0;
  VAR_4->granulepos=0;
  VAR_4->packetno=0;



  FUNC_8(&VAR_9);
  if(FUNC_3(&VAR_9,VAR_3))goto err_out;

  if(VAR_10->header1)FUNC_0(VAR_10->header1);
  VAR_10->header1=FUNC_1(FUNC_7(&VAR_9));
  FUNC_5(VAR_10->header1,VAR_9.buffer,FUNC_7(&VAR_9));
  VAR_5->packet=VAR_10->header1;
  VAR_5->bytes=FUNC_7(&VAR_9);
  VAR_5->b_o_s=0;
  VAR_5->e_o_s=0;
  VAR_5->granulepos=0;
  VAR_5->packetno=1;



  FUNC_8(&VAR_9);
  if(FUNC_2(&VAR_9,VAR_8))goto err_out;

  if(VAR_10->header2)FUNC_0(VAR_10->header2);
  VAR_10->header2=FUNC_1(FUNC_7(&VAR_9));
  FUNC_5(VAR_10->header2,VAR_9.buffer,FUNC_7(&VAR_9));
  VAR_6->packet=VAR_10->header2;
  VAR_6->bytes=FUNC_7(&VAR_9);
  VAR_6->b_o_s=0;
  VAR_6->e_o_s=0;
  VAR_6->granulepos=0;
  VAR_6->packetno=2;

  FUNC_9(&VAR_9);
  return(0);
 err_out:
  FUNC_6(VAR_4,0,sizeof(*VAR_4));
  FUNC_6(VAR_5,0,sizeof(*VAR_5));
  FUNC_6(VAR_6,0,sizeof(*VAR_6));

  if(VAR_10){
    FUNC_9(&VAR_9);
    if(VAR_10->header)FUNC_0(VAR_10->header);
    if(VAR_10->header1)FUNC_0(VAR_10->header1);
    if(VAR_10->header2)FUNC_0(VAR_10->header2);
    VAR_10->header=((void*)0);
    VAR_10->header1=((void*)0);
    VAR_10->header2=((void*)0);
  }
  return(VAR_7);
}
