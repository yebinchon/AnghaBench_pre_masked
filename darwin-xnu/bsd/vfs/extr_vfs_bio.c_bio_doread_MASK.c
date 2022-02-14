
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
struct proc {TYPE_2__* p_stats; } ;
struct buf {int b_rcred; int b_flags; } ;
typedef int kauth_cred_t ;
typedef int daddr64_t ;
typedef struct buf* buf_t ;
struct TYPE_3__ {int ru_inblock; } ;
struct TYPE_4__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 struct buf* FUNC_6 (int ,int ,int,int ,int ,int) ;
 struct proc* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static struct buf *
FUNC_11(vnode_t VAR_5, daddr64_t VAR_6, int VAR_7, kauth_cred_t VAR_8, int VAR_9, int VAR_10)
{
 buf_t VAR_11;

 VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7, 0, 0, VAR_10);






 if (!FUNC_0(VAR_11->b_flags, (VAR_1 | VAR_0))) {
  struct proc *VAR_12;

  VAR_12 = FUNC_7();


  FUNC_3(VAR_11->b_flags, VAR_2 | VAR_9);
  if (FUNC_1(VAR_8) && !FUNC_1(VAR_11->b_rcred)) {
   FUNC_8(VAR_8);
   VAR_11->b_rcred = VAR_8;
  }

  FUNC_4(VAR_11);

  FUNC_10(VAR_4, FUNC_9(VAR_5, VAR_7), VAR_6);


  if (VAR_12 && VAR_12->p_stats) {
   FUNC_2(&VAR_12->p_stats->p_ru.ru_inblock);
  }

  if (VAR_9) {






          VAR_11 = ((void*)0);
  }
 } else if (VAR_9) {
  FUNC_5(VAR_11);
  VAR_11 = ((void*)0);
 }

 FUNC_10(VAR_3, FUNC_9(VAR_5, VAR_7), VAR_6);

 return (VAR_11);
}
