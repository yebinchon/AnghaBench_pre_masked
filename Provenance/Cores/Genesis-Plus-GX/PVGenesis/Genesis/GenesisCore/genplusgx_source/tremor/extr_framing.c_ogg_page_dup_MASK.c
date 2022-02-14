
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* body; void* header; int body_len; int header_len; } ;
typedef TYPE_1__ ogg_page ;


 void* FUNC_0 (void*) ;

void FUNC_1(ogg_page *VAR_0,ogg_page *VAR_1){
  VAR_0->header_len=VAR_1->header_len;
  VAR_0->body_len=VAR_1->body_len;
  VAR_0->header=FUNC_0(VAR_1->header);
  VAR_0->body=FUNC_0(VAR_1->body);
}
