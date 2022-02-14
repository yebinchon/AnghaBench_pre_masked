
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; } ;
typedef TYPE_1__ oggpack_buffer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(oggpack_buffer *VAR_0){
  if(VAR_0->buffer)FUNC_0(VAR_0->buffer);
  FUNC_1(VAR_0,0,sizeof(*VAR_0));
}
