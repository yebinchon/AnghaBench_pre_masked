
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_queue {int n_bd; int n_win; int low_mark; int high_mark; scalar_t__ read_ptr; scalar_t__ write_ptr; int id; } ;
struct il_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_1, struct il_queue *VAR_2, int VAR_3, u32 VAR_4)
{




 FUNC_1(VAR_0 & (VAR_0 - 1));

 VAR_2->n_bd = VAR_0;

 VAR_2->n_win = VAR_3;
 VAR_2->id = VAR_4;



 FUNC_0(!FUNC_2(VAR_3));

 VAR_2->low_mark = VAR_2->n_win / 4;
 if (VAR_2->low_mark < 4)
  VAR_2->low_mark = 4;

 VAR_2->high_mark = VAR_2->n_win / 8;
 if (VAR_2->high_mark < 2)
  VAR_2->high_mark = 2;

 VAR_2->write_ptr = VAR_2->read_ptr = 0;

 return 0;
}
