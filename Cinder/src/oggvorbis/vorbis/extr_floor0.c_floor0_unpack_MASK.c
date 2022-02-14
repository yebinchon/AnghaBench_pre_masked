
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int order; int rate; int barkmap; int numbooks; size_t* books; void* ampdB; void* ampbits; } ;
typedef TYPE_2__ vorbis_info_floor0 ;
typedef TYPE_2__ vorbis_info_floor ;
struct TYPE_12__ {TYPE_5__* codec_setup; } ;
typedef TYPE_4__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_13__ {size_t books; TYPE_1__** book_param; } ;
typedef TYPE_5__ codec_setup_info ;
struct TYPE_10__ {scalar_t__ maptype; int dim; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static vorbis_info_floor *FUNC_3 (vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  codec_setup_info *VAR_2=VAR_0->codec_setup;
  int VAR_3;

  vorbis_info_floor0 *VAR_4=FUNC_0(sizeof(*VAR_4));
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
    if(VAR_2->book_param[VAR_4->books[VAR_3]]->maptype==0)goto err_out;
    if(VAR_2->book_param[VAR_4->books[VAR_3]]->dim<1)goto err_out;
  }
  return(VAR_4);

 err_out:
  FUNC_1(VAR_4);
  return(((void*)0));
}
