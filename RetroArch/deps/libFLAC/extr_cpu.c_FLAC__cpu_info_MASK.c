
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int use_asm; } ;
typedef TYPE_1__ FLAC__CPUInfo ;



 int VAR_0 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (FLAC__CPUInfo *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));






 VAR_1->type = VAR_0;
 VAR_1->use_asm = 0;


 switch (VAR_1->type) {
 case 129:
  FUNC_0 (VAR_1);
  break;
 case 128:
  FUNC_2 (VAR_1);
  break;
 default:
  VAR_1->use_asm = 0;
  break;
 }
}
