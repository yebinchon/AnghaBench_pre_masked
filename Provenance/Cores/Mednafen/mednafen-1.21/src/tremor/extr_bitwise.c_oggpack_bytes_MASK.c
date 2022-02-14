
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long endbyte; int endbit; } ;
typedef TYPE_1__ oggpack_buffer ;



long FUNC_0(oggpack_buffer *VAR_0){
  return(VAR_0->endbyte+(VAR_0->endbit+7)/8);
}
