
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* c; } ;
typedef TYPE_2__ codebook ;
struct TYPE_4__ {long* lengthlist; } ;



long FUNC_0(codebook *VAR_0,int VAR_1){
  if(VAR_0->c)

    return VAR_0->c->lengthlist[VAR_1];
  return -1;
}
