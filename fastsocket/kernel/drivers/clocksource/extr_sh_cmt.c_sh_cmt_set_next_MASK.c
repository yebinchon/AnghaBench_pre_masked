
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {unsigned long max_match_value; unsigned long next_match_value; int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sh_cmt_priv*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sh_cmt_priv *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 > VAR_0->max_match_value)
  FUNC_0("sh_cmt: delta out of range\n");

 FUNC_2(&VAR_0->lock, VAR_2);
 VAR_0->next_match_value = VAR_1;
 FUNC_1(VAR_0, 0);
 FUNC_3(&VAR_0->lock, VAR_2);
}
