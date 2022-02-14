
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int headend; } ;
typedef TYPE_1__ oggpack_buffer ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(oggpack_buffer *VAR_0){
  if(VAR_0->headend<1){
    FUNC_0(VAR_0);
    return -1;
  }
  return 0;
}
