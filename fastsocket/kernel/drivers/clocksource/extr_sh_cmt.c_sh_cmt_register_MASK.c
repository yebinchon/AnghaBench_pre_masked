
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {int width; int max_match_value; int match_value; int lock; } ;


 int FUNC_0 (struct sh_cmt_priv*,char*,unsigned long) ;
 int FUNC_1 (struct sh_cmt_priv*,char*,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sh_cmt_priv *VAR_0, char *VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 if (VAR_0->width == (sizeof(VAR_0->max_match_value) * 8))
  VAR_0->max_match_value = ~0;
 else
  VAR_0->max_match_value = (1 << VAR_0->width) - 1;

 VAR_0->match_value = VAR_0->max_match_value;
 FUNC_2(&VAR_0->lock);

 if (VAR_2)
  FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_3);

 return 0;
}
