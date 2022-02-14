
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long (* read_func ) (char*,int,int ,scalar_t__) ;} ;
struct TYPE_5__ {int oy; scalar_t__ datasource; TYPE_1__ callbacks; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,long) ;
 long FUNC_2 (char*,int,int ,scalar_t__) ;

__attribute__((used)) static long FUNC_3(OggVorbis_File *VAR_2){
  VAR_1=0;
  if(!(VAR_2->callbacks.read_func))return(-1);
  if(VAR_2->datasource){
    char *VAR_3=FUNC_0(&VAR_2->oy,VAR_0);
    long VAR_4=(VAR_2->callbacks.read_func)(VAR_3,1,VAR_0,VAR_2->datasource);
    if(VAR_4>0)FUNC_1(&VAR_2->oy,VAR_4);
    if(VAR_4==0 && VAR_1)return(-1);
    return(VAR_4);
  }else
    return(0);
}
