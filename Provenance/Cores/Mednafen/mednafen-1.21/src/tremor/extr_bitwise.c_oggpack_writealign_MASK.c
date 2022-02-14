
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int endbit; } ;
typedef TYPE_1__ oggpack_buffer ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(oggpack_buffer *VAR_0){
  int VAR_1=8-VAR_0->endbit;
  if(VAR_1<8)
    FUNC_0(VAR_0,0,VAR_1);
}
