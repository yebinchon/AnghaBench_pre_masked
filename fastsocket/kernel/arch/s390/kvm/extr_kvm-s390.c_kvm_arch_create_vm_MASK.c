
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sca_block {int dummy; } ;
struct TYPE_4__ {int list; int lock; } ;
struct TYPE_5__ {struct sca_block* sca; int dbf; TYPE_1__ float_int; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_6__ {int pid; } ;


 int VAR_0 ;
 struct kvm* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int,char*,char*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct kvm*) ;
 struct kvm* FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,int) ;

struct kvm *FUNC_12(void)
{
 struct kvm *VAR_4;
 int VAR_5;
 char VAR_6[16];

 VAR_5 = FUNC_9();
 if (VAR_5)
  goto out_nokvm;

 VAR_5 = -VAR_0;
 VAR_4 = FUNC_8(sizeof(struct kvm), VAR_1);
 if (!VAR_4)
  goto out_nokvm;

 VAR_4->arch.sca = (struct sca_block *) FUNC_6(VAR_1);
 if (!VAR_4->arch.sca)
  goto out_nosca;

 FUNC_11(VAR_6, "kvm-%u", VAR_2->pid);

 VAR_4->arch.dbf = FUNC_3(VAR_6, 8, 2, 8 * sizeof(long));
 if (!VAR_4->arch.dbf)
  goto out_nodbf;

 FUNC_10(&VAR_4->arch.float_int.lock);
 FUNC_1(&VAR_4->arch.float_int.list);

 FUNC_4(VAR_4->arch.dbf, &VAR_3);
 FUNC_2(VAR_4, 3, "%s", "vm created");

 return VAR_4;
out_nodbf:
 FUNC_5((unsigned long)(VAR_4->arch.sca));
out_nosca:
 FUNC_7(VAR_4);
out_nokvm:
 return FUNC_0(VAR_5);
}
