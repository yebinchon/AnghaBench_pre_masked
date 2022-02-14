
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* ptr; int pos; } ;
typedef TYPE_1__ oggbyte_buffer ;
typedef int ogg_uint32_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(oggbyte_buffer *VAR_0,ogg_uint32_t VAR_1,int VAR_2){
  int VAR_3;
  FUNC_0(VAR_0,VAR_2);
  for(VAR_3=0;VAR_3<4;VAR_3++){
    FUNC_1(VAR_0,VAR_2);
    VAR_0->ptr[VAR_2-VAR_0->pos]=VAR_1;
    VAR_1>>=8;
    ++VAR_2;
  }
}
