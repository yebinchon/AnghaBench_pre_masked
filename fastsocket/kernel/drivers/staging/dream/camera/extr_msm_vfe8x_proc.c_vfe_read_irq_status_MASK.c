
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {void* cbcrWrPmStats1; void* cbcrWrPmStats0; void* yWrPmStats1; void* yWrPmStats0; } ;
struct TYPE_5__ {void* cbcrWrPmStats1; void* cbcrWrPmStats0; void* yWrPmStats1; void* yWrPmStats0; } ;
struct TYPE_7__ {TYPE_2__ viewPathPmInfo; TYPE_1__ encPathPmInfo; } ;
struct vfe_irq_thread_msg {TYPE_3__ pmInfo; void* camifStatus; void* vfeIrqStatus; } ;
struct TYPE_8__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,void*) ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct vfe_irq_thread_msg*,int ,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct vfe_irq_thread_msg *VAR_4)
{
 uint32_t *VAR_5;

 FUNC_1(VAR_4, 0, sizeof(struct vfe_irq_thread_msg));

 VAR_5 = (uint32_t *)(VAR_3->vfebase + VAR_2);
 VAR_4->vfeIrqStatus = FUNC_2(VAR_5);

 VAR_5 = (uint32_t *)(VAR_3->vfebase + VAR_1);
 VAR_4->camifStatus = FUNC_2(VAR_5);
 FUNC_3(0x7, VAR_3->vfebase + VAR_0);
 FUNC_3(0x3, VAR_3->vfebase + VAR_0);
 FUNC_0("camifStatus  = 0x%x\n", VAR_4->camifStatus);
}
