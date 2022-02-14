
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {unsigned long flags; int lock; int max_match_value; int rate; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct sh_cmt_priv*,int *) ;
 int FUNC_1 (struct sh_cmt_priv*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sh_cmt_priv *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock, VAR_5);

 if (!(VAR_2->flags & (VAR_0 | VAR_1)))
  VAR_4 = FUNC_0(VAR_2, &VAR_2->rate);

 if (VAR_4)
  goto out;
 VAR_2->flags |= VAR_3;


 if ((VAR_3 == VAR_1) && (!(VAR_2->flags & VAR_0)))
  FUNC_1(VAR_2, VAR_2->max_match_value);
 out:
 FUNC_3(&VAR_2->lock, VAR_5);

 return VAR_4;
}
