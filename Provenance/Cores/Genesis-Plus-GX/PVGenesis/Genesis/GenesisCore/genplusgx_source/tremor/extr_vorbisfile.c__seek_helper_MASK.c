
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ogg_int64_t ;
struct TYPE_4__ {int (* seek_func ) (scalar_t__,int ,int ) ;} ;
struct TYPE_5__ {int oy; int offset; scalar_t__ datasource; TYPE_1__ callbacks; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(OggVorbis_File *VAR_1,ogg_int64_t VAR_2){
  if(VAR_1->datasource){
    (VAR_1->callbacks.seek_func)(VAR_1->datasource, VAR_2, VAR_0);
    VAR_1->offset=VAR_2;
    FUNC_0(VAR_1->oy);
  }else{

    return;
  }
}
