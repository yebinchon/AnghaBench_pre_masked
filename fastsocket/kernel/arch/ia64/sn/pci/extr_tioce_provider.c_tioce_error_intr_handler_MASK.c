
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int bs_persist_busnum; int bs_persist_segment; } ;
struct tioce_common {TYPE_1__ ce_pcibus; } ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_2, void *VAR_3)
{
 struct tioce_common *VAR_4 = VAR_3;
 struct ia64_sal_retval VAR_5;
 VAR_5.status = 0;
 VAR_5.v0 = 0;

 FUNC_0(VAR_5, (u64) VAR_1,
   VAR_4->ce_pcibus.bs_persist_segment,
   VAR_4->ce_pcibus.bs_persist_busnum, 0, 0, 0, 0, 0);

 if (VAR_5.v0)
  FUNC_1("tioce_error_intr_handler:  Fatal TIOCE error");

 return VAR_0;
}
