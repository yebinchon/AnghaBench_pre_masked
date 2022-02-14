
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* recv_handler ) (TYPE_1__*,struct ib_mad_recv_wc*) ;} ;
struct ib_mad_snoop_private {int mad_snoop_flags; TYPE_1__ agent; int refcount; } ;
struct ib_mad_recv_wc {int dummy; } ;
struct ib_mad_qp_info {int snoop_table_size; int snoop_lock; struct ib_mad_snoop_private** snoop_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_snoop_private*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,struct ib_mad_recv_wc*) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_qp_info *VAR_0,
         struct ib_mad_recv_wc *VAR_1,
         int VAR_2)
{
 struct ib_mad_snoop_private *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_0->snoop_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0->snoop_table_size; VAR_5++) {
  VAR_3 = VAR_0->snoop_table[VAR_5];
  if (!VAR_3 ||
      !(VAR_3->mad_snoop_flags & VAR_2))
   continue;

  FUNC_0(&VAR_3->refcount);
  FUNC_3(&VAR_0->snoop_lock, VAR_4);
  VAR_3->agent.recv_handler(&VAR_3->agent,
         VAR_1);
  FUNC_1(VAR_3);
  FUNC_2(&VAR_0->snoop_lock, VAR_4);
 }
 FUNC_3(&VAR_0->snoop_lock, VAR_4);
}
