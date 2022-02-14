
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_snoop_private {int dummy; } ;
struct ib_mad_qp_info {int snoop_table_size; int snoop_lock; int snoop_count; struct ib_mad_snoop_private** snoop_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ib_mad_snoop_private** FUNC_1 (struct ib_mad_snoop_private**,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ib_mad_qp_info *VAR_2,
    struct ib_mad_snoop_private *VAR_3)
{
 struct ib_mad_snoop_private **VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_2->snoop_lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_2->snoop_table_size; VAR_6++)
  if (!VAR_2->snoop_table[VAR_6])
   break;

 if (VAR_6 == VAR_2->snoop_table_size) {

  VAR_4 = FUNC_1(VAR_2->snoop_table,
        sizeof VAR_3 *
        (VAR_2->snoop_table_size + 1),
        VAR_1);
  if (!VAR_4) {
   VAR_6 = -VAR_0;
   goto out;
  }

  VAR_2->snoop_table = VAR_4;
  VAR_2->snoop_table_size++;
 }
 VAR_2->snoop_table[VAR_6] = VAR_3;
 FUNC_0(&VAR_2->snoop_count);
out:
 FUNC_3(&VAR_2->snoop_lock, VAR_5);
 return VAR_6;
}
