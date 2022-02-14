
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int headbit; int headptr; int headend; } ;
typedef TYPE_1__ oggpack_buffer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(oggpack_buffer *VAR_0,int VAR_1){
  VAR_1+=VAR_0->headbit;
  VAR_0->headbit=VAR_1&7;
  VAR_0->headptr+=VAR_1/8;
  if((VAR_0->headend-=VAR_1/8)<1)FUNC_0(VAR_0);
}
