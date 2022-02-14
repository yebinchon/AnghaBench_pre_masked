
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dec_firsttable; scalar_t__ dec_codelengths; scalar_t__ dec_index; scalar_t__ codelist; scalar_t__ valuelist; } ;
typedef TYPE_1__ codebook ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(codebook *VAR_0){


  if(VAR_0->valuelist)FUNC_0(VAR_0->valuelist);
  if(VAR_0->codelist)FUNC_0(VAR_0->codelist);

  if(VAR_0->dec_index)FUNC_0(VAR_0->dec_index);
  if(VAR_0->dec_codelengths)FUNC_0(VAR_0->dec_codelengths);
  if(VAR_0->dec_firsttable)FUNC_0(VAR_0->dec_firsttable);

  FUNC_1(VAR_0,0,sizeof(*VAR_0));
}
