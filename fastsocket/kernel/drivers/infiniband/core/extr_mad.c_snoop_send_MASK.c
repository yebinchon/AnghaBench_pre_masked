
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* snoop_handler ) (TYPE_1__*,struct ib_mad_send_buf*,struct ib_mad_send_wc*) ;} ;
struct ib_mad_snoop_private {int mad_snoop_flags; TYPE_1__ agent; int refcount; } ;
struct ib_mad_send_wc {int dummy; } ;
struct ib_mad_send_buf {int dummy; } ;
struct ib_mad_qp_info {int snoop_table_size; int snoop_lock; struct ib_mad_snoop_private** snoop_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_snoop_private*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,struct ib_mad_send_buf*,struct ib_mad_send_wc*) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_qp_info *VAR_0,
         struct ib_mad_send_buf *VAR_1,
         struct ib_mad_send_wc *VAR_2,
         int VAR_3)
{
 struct ib_mad_snoop_private *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_0->snoop_lock, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0->snoop_table_size; VAR_6++) {
  VAR_4 = VAR_0->snoop_table[VAR_6];
  if (!VAR_4 ||
      !(VAR_4->mad_snoop_flags & VAR_3))
   continue;

  FUNC_0(&VAR_4->refcount);
  FUNC_3(&VAR_0->snoop_lock, VAR_5);
  VAR_4->agent.snoop_handler(&VAR_4->agent,
          VAR_1, VAR_2);
  FUNC_1(VAR_4);
  FUNC_2(&VAR_0->snoop_lock, VAR_5);
 }
 FUNC_3(&VAR_0->snoop_lock, VAR_5);
}
