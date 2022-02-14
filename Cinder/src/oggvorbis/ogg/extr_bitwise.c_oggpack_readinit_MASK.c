
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* buffer; unsigned char* ptr; int storage; } ;
typedef TYPE_1__ oggpack_buffer ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(oggpack_buffer *VAR_0,unsigned char *VAR_1,int VAR_2){
  FUNC_0(VAR_0,0,sizeof(*VAR_0));
  VAR_0->buffer=VAR_0->ptr=VAR_1;
  VAR_0->storage=VAR_2;
}
