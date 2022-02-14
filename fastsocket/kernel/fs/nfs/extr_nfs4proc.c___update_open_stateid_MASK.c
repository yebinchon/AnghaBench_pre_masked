
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {TYPE_1__* owner; int seqlock; int flags; int stateid; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;
struct TYPE_2__ {int so_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (struct nfs4_state*,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs4_state*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct nfs4_state *VAR_1, nfs4_stateid *VAR_2, const nfs4_stateid *VAR_3, fmode_t VAR_4)
{




 FUNC_6(&VAR_1->seqlock);
 if (VAR_3 != ((void*)0)) {
  FUNC_0(&VAR_1->stateid, VAR_3);
  FUNC_2(VAR_0, &VAR_1->flags);
 }
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_1, VAR_2, VAR_4);
 FUNC_7(&VAR_1->seqlock);
 FUNC_3(&VAR_1->owner->so_lock);
 FUNC_5(VAR_1, VAR_4);
 FUNC_4(&VAR_1->owner->so_lock);
}
