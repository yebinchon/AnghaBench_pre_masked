
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int q_delta; int q_min; int entries; int lengthlist; int dim; } ;
typedef TYPE_1__ static_codebook ;
struct TYPE_8__ {int minval; int delta; int quantvals; int codelist; int dim; int used_entries; int entries; TYPE_1__ const* c; } ;
typedef TYPE_2__ codebook ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(codebook *VAR_0,const static_codebook *VAR_1){

  FUNC_3(VAR_0,0,sizeof(*VAR_0));
  VAR_0->c=VAR_1;
  VAR_0->entries=VAR_1->entries;
  VAR_0->used_entries=VAR_1->entries;
  VAR_0->dim=VAR_1->dim;
  VAR_0->codelist=FUNC_2(VAR_1->lengthlist,VAR_1->entries,0);

  VAR_0->quantvals=FUNC_0(VAR_1);
  VAR_0->minval=(int)FUNC_4(FUNC_1(VAR_1->q_min));
  VAR_0->delta=(int)FUNC_4(FUNC_1(VAR_1->q_delta));

  return(0);
}
