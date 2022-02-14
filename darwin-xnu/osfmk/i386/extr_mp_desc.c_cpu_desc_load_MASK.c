
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct real_descriptor {int dummy; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_13__ {TYPE_4__ cdi_idtu; TYPE_3__ cdi_gdtu; TYPE_2__ cdi_idtb; TYPE_1__ cdi_gdtb; } ;
typedef TYPE_5__ cpu_desc_index_t ;
struct TYPE_14__ {scalar_t__ cpu_number; TYPE_5__ cpu_desc_index; } ;
typedef TYPE_6__ cpu_data_t ;
struct TYPE_15__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_7__* FUNC_0 (int ) ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (uintptr_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,uintptr_t) ;

void
FUNC_7(cpu_data_t *VAR_14)
{
 cpu_desc_index_t *VAR_15 = &VAR_14->cpu_desc_index;

 FUNC_4(VAR_1);


 FUNC_4(VAR_4);
 FUNC_6(VAR_12, (uintptr_t) VAR_14);
 FUNC_4(VAR_6);
 FUNC_6(VAR_13, (uintptr_t) VAR_14);






 FUNC_0(VAR_11)->access &= ~VAR_0;


 VAR_15->cdi_gdtb.size = sizeof(struct real_descriptor)*VAR_9 - 1;
 VAR_15->cdi_gdtu.size = VAR_15->cdi_gdtb.size;
 VAR_15->cdi_idtb.size = 0x1000 + VAR_14->cpu_number;
 VAR_15->cdi_idtu.size = VAR_15->cdi_idtb.size;

 FUNC_4(VAR_3);
 FUNC_1((uintptr_t *) &VAR_15->cdi_gdtu);
 FUNC_4(VAR_5);
 FUNC_2((uintptr_t *) &VAR_15->cdi_idtu);
 FUNC_4(VAR_7);
 FUNC_3(VAR_10);
 FUNC_4(VAR_8);
 FUNC_5(VAR_11);




 FUNC_4(VAR_2);
}
