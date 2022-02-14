
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct old_sigaction {int sa_mask; int sa_flags; int sa_restorer; int sa_handler; } const old_sigaction ;
struct TYPE_4__ {int * sig; } ;
struct TYPE_3__ {TYPE_2__ sa_mask; int sa_flags; int sa_restorer; int sa_handler; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int old_sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct old_sigaction const*,int) ;
 int FUNC_3 (int,struct k_sigaction*,struct k_sigaction*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

int
FUNC_5(int VAR_3, const struct old_sigaction *VAR_4,
       struct old_sigaction *VAR_5)
{
 int VAR_6;
 struct k_sigaction VAR_7;
 struct k_sigaction VAR_8;

 if (VAR_4) {
  old_sigset_t VAR_9;

  if (!FUNC_2(VAR_1, VAR_4, sizeof(*VAR_4)) ||
      FUNC_0(VAR_7.sa.sa_handler, &VAR_4->sa_handler) ||
      FUNC_0(VAR_7.sa.sa_restorer, &VAR_4->sa_restorer))
   return -VAR_0;

  FUNC_0(VAR_7.sa.sa_flags, &VAR_4->sa_flags);
  FUNC_0(VAR_9, &VAR_4->sa_mask);
  FUNC_4(&VAR_7.sa.sa_mask, VAR_9);
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4 ? &VAR_7 : ((void*)0), VAR_5 ? &VAR_8 : ((void*)0));

 if (!VAR_6 && VAR_5) {
  if (!FUNC_2(VAR_2, VAR_5, sizeof(*VAR_5)) ||
      FUNC_1(VAR_8.sa.sa_handler, &VAR_5->sa_handler) ||
      FUNC_1(VAR_8.sa.sa_restorer, &VAR_5->sa_restorer))
   return -VAR_0;

  FUNC_1(VAR_8.sa.sa_flags, &VAR_5->sa_flags);
  FUNC_1(VAR_8.sa.sa_mask.sig[0], &VAR_5->sa_mask);
 }

 return VAR_6;
}
