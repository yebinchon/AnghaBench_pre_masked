
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linkedit_data_command {int has_splitinfolc; int datasize; int dataoff; int cmdsize; } ;
typedef struct linkedit_data_command KXLDsplitinfolc ;


 int VAR_0 ;
 int FUNC_0 (struct linkedit_data_command*) ;

void
FUNC_1(KXLDsplitinfolc *VAR_1, struct linkedit_data_command *VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    VAR_1->cmdsize = VAR_2->cmdsize;
    VAR_1->dataoff = VAR_2->dataoff;
    VAR_1->datasize = VAR_2->datasize;
    VAR_1->has_splitinfolc = VAR_0;
}
