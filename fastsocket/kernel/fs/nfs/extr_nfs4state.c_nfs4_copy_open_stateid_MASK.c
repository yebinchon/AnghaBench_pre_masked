
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_state {TYPE_2__* owner; int stateid; int seqlock; } ;
typedef int nfs4_stateid ;
struct TYPE_3__ {int list; } ;
struct TYPE_4__ {TYPE_1__ so_sequence; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(nfs4_stateid *VAR_1, struct nfs4_state *VAR_2)
{
 int VAR_3;
 int VAR_4;

 do {
  VAR_4 = FUNC_2(&VAR_2->seqlock);
  FUNC_1(VAR_1, &VAR_2->stateid);
  VAR_3 = 0;
  FUNC_4();
  if (!FUNC_0(&VAR_2->owner->so_sequence.list))
   VAR_3 = -VAR_0;
 } while (FUNC_3(&VAR_2->seqlock, VAR_4));
 return VAR_3;
}
