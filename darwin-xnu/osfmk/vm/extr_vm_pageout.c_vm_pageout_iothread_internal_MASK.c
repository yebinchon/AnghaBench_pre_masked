
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct cq {size_t id; } ;
struct TYPE_10__ {scalar_t__ pgo_inited; scalar_t__ pgo_lowpriority; int pgo_tid; } ;
struct TYPE_9__ {scalar_t__ vm_restricted_to_single_processor; } ;
struct TYPE_8__ {int * vmct_minpages; } ;
struct TYPE_7__ {int thread_id; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct cq*) ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void
FUNC_6(struct cq *VAR_6)
{
 thread_t VAR_7 = FUNC_0();

 VAR_7->options |= VAR_1;

 FUNC_3();

 VAR_3.pgo_tid = VAR_7->thread_id;
 VAR_3.pgo_lowpriority = VAR_2;
 VAR_3.pgo_inited = VAR_2;

 FUNC_4();

 if (VAR_4.vm_restricted_to_single_processor == VAR_2)
  FUNC_2();


 FUNC_1(FUNC_0(), "VM_compressor");



 FUNC_5(VAR_6);


}
