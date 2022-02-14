
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* filelen; void* fileofs; } ;
typedef TYPE_1__ q1_lump_t ;
struct TYPE_4__ {TYPE_1__* lumps; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void FUNC_3 (int VAR_2, void *VAR_3, int VAR_4)
{
 q1_lump_t *VAR_5;

 VAR_5 = &VAR_0->lumps[VAR_2];

 VAR_5->fileofs = FUNC_0(FUNC_2(VAR_1));
 VAR_5->filelen = FUNC_0(VAR_4);
 FUNC_1(VAR_1, VAR_3, (VAR_4+3)&~3);
}
