
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* ptr; size_t pos; } ;
typedef TYPE_1__ oggbyte_buffer ;
typedef int ogg_int64_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ogg_int64_t FUNC_2(oggbyte_buffer *VAR_0,int VAR_1){
  ogg_int64_t VAR_2;
  unsigned char VAR_3[7];
  int VAR_4;
  FUNC_0(VAR_0,VAR_1);
  for(VAR_4=0;VAR_4<7;VAR_4++){
    FUNC_1(VAR_0,VAR_1);
    VAR_3[VAR_4]=VAR_0->ptr[VAR_1++ -VAR_0->pos];
  }

  FUNC_1(VAR_0,VAR_1);
  VAR_2=VAR_0->ptr[VAR_1-VAR_0->pos];

  for(VAR_4=6;VAR_4>=0;--VAR_4)
    VAR_2= VAR_2<<8 | VAR_3[VAR_4];

  return VAR_2;
}
