
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_4__ {scalar_t__ used_entries; long* dec_index; } ;
typedef TYPE_1__ codebook ;


 long FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0, oggpack_buffer *VAR_1){
  if(VAR_0->used_entries>0){
    long VAR_2=FUNC_0(VAR_0,VAR_1);
    if(VAR_2>=0)
      return(VAR_0->dec_index[VAR_2]);
  }


  return(-1);
}
