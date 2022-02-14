
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ogg_uint32_t ;
struct TYPE_13__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ogg_page ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_12__ {scalar_t__ (* tell_func ) (int ) ;int (* seek_func ) (int ,int ,int ) ;} ;
struct TYPE_14__ {scalar_t__ current_serialno; scalar_t__ offset; scalar_t__ end; int datasource; TYPE_1__ callbacks; } ;
typedef TYPE_3__ OggVorbis_File ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(OggVorbis_File *VAR_2){
  ogg_uint32_t VAR_3=VAR_2->current_serialno;
  ogg_uint32_t VAR_4;
  ogg_int64_t VAR_5=VAR_2->offset, VAR_6;
  ogg_page VAR_7={0,0,0,0};




  (VAR_2->callbacks.seek_func)(VAR_2->datasource,0,VAR_1);
  VAR_2->offset=VAR_2->end=(VAR_2->callbacks.tell_func)(VAR_2->datasource);



  VAR_6=FUNC_1(VAR_2,&VAR_7);
  if(VAR_6<0)return(VAR_6);


  VAR_4=FUNC_4(&VAR_7);
  FUNC_3(&VAR_7);

  if(VAR_4!=VAR_3){



    if(FUNC_0(VAR_2,0,0,VAR_6+1,VAR_3,0)<0)return(VAR_0);

  }else{


    if(FUNC_0(VAR_2,0,VAR_6,VAR_6+1,VAR_3,0))return(VAR_0);

  }


  FUNC_2(VAR_2,VAR_5);
  return(FUNC_5(VAR_2,0));
}
