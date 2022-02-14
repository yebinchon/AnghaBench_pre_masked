
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_5__ {TYPE_1__* c; int * codelist; } ;
typedef TYPE_2__ codebook ;
struct TYPE_4__ {int entries; int* lengthlist; } ;


 int FUNC_0 (int *,int ,int) ;

int FUNC_1(codebook *VAR_0, int VAR_1, oggpack_buffer *VAR_2){
  if(VAR_1<0 || VAR_1>=VAR_0->c->entries)return(0);
  FUNC_0(VAR_2,VAR_0->codelist[VAR_1],VAR_0->c->lengthlist[VAR_1]);
  return(VAR_0->c->lengthlist[VAR_1]);
}
