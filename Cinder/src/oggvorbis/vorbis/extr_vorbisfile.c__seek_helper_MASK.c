
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(OggVorbis_File *VAR_3,ogg_int64_t VAR_4){
  if(VAR_3->datasource){
    if(!(VAR_3->callbacks.seek_func)||
       (VAR_3->callbacks.seek_func)(VAR_3->datasource, VAR_4, VAR_2) == -1)
      return VAR_1;
    VAR_3->offset=VAR_4;
    FUNC_0(&VAR_3->oy);
  }else{

    return VAR_0;
  }
  return 0;
}
