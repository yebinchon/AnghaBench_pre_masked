
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int order; int rate; int barkmap; int numbooks; scalar_t__* books; void* ampdB; void* ampbits; } ;
typedef TYPE_1__ vorbis_info_floor0 ;
typedef TYPE_1__ vorbis_info_floor ;
struct TYPE_9__ {scalar_t__ codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_10__ {scalar_t__ books; } ;
typedef TYPE_4__ codec_setup_info ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static vorbis_info_floor *FUNC_3 (vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  codec_setup_info *VAR_2=(codec_setup_info *)VAR_0->codec_setup;
  int VAR_3;

  vorbis_info_floor0 *VAR_4=(vorbis_info_floor0 *)FUNC_0(sizeof(*VAR_4));
  VAR_4->order=FUNC_2(VAR_1,8);
  VAR_4->rate=FUNC_2(VAR_1,16);
  VAR_4->barkmap=FUNC_2(VAR_1,16);
  VAR_4->ampbits=FUNC_2(VAR_1,6);
  VAR_4->ampdB=FUNC_2(VAR_1,8);
  VAR_4->numbooks=FUNC_2(VAR_1,4)+1;

  if(VAR_4->order<1)goto err_out;
  if(VAR_4->rate<1)goto err_out;
  if(VAR_4->barkmap<1)goto err_out;
  if(VAR_4->numbooks<1)goto err_out;

  for(VAR_3=0;VAR_3<VAR_4->numbooks;VAR_3++){
    VAR_4->books[VAR_3]=FUNC_2(VAR_1,8);
    if(VAR_4->books[VAR_3]<0 || VAR_4->books[VAR_3]>=VAR_2->books)goto err_out;
  }
  return(VAR_4);

 err_out:
  FUNC_1(VAR_4);
  return(((void*)0));
}
