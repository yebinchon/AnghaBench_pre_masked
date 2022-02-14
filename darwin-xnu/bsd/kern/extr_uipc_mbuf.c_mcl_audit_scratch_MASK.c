
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
typedef int stack ;
struct TYPE_7__ {void** msa_stack; void** msa_pstack; int msa_ptstamp; int msa_tstamp; scalar_t__ msa_depth; scalar_t__ msa_pdepth; int msa_thread; int msa_pthread; } ;
typedef TYPE_1__ mcl_scratch_audit_t ;
struct TYPE_8__ {int * mca_contents; } ;
typedef TYPE_2__ mcache_audit_t ;
struct TYPE_9__ {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (void**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**,void**,int) ;
 int FUNC_4 (void**,int) ;
 int FUNC_5 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_6 (struct timeval*) ;

__attribute__((used)) static void
FUNC_7(mcache_audit_t *VAR_2)
{
 void *VAR_3[VAR_0 + 1];
 mcl_scratch_audit_t *VAR_4;
 struct timeval VAR_5;

 FUNC_2(VAR_2->mca_contents != ((void*)0));
 VAR_4 = FUNC_0(VAR_2);

 VAR_4->msa_pthread = VAR_4->msa_thread;
 VAR_4->msa_thread = FUNC_5();
 FUNC_3(VAR_4->msa_stack, VAR_4->msa_pstack, sizeof (VAR_4->msa_pstack));
 VAR_4->msa_pdepth = VAR_4->msa_depth;
 FUNC_4(VAR_3, sizeof (VAR_3));
 VAR_4->msa_depth = FUNC_1(VAR_3, VAR_0 + 1) - 1;
 FUNC_3(&VAR_3[1], VAR_4->msa_stack, sizeof (VAR_4->msa_stack));

 VAR_4->msa_ptstamp = VAR_4->msa_tstamp;
 FUNC_6(&VAR_5);

 VAR_4->msa_tstamp = ((VAR_5.tv_usec - VAR_1.tv_usec) / 1000);
 if ((VAR_5.tv_sec - VAR_1.tv_sec) > 0)
  VAR_4->msa_tstamp += ((VAR_5.tv_sec - VAR_1.tv_sec) * 1000);
}
