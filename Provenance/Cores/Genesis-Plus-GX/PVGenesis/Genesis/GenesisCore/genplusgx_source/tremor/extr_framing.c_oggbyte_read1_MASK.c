
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* ptr; int pos; } ;
typedef TYPE_1__ oggbyte_buffer ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static unsigned char FUNC_2(oggbyte_buffer *VAR_0,int VAR_1){
  FUNC_0(VAR_0,VAR_1);
  FUNC_1(VAR_0,VAR_1);
  return VAR_0->ptr[VAR_1-VAR_0->pos];
}
