
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; char* buffer; int storage; } ;
typedef TYPE_1__ oggpack_buffer ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(oggpack_buffer *VAR_1){
  FUNC_1(VAR_1,0,sizeof(*VAR_1));
  VAR_1->ptr=VAR_1->buffer=FUNC_0(VAR_0);
  VAR_1->buffer[0]='\0';
  VAR_1->storage=VAR_0;
}
