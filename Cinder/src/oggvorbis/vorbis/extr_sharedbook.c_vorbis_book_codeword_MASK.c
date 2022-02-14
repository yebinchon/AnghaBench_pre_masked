
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long* codelist; scalar_t__ c; } ;
typedef TYPE_1__ codebook ;



long FUNC_0(codebook *VAR_0,int VAR_1){
  if(VAR_0->c)

    return VAR_0->codelist[VAR_1];
  return -1;
}
