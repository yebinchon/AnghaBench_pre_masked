
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {struct lbuf* l_redrive_next; } ;


 int VAR_0 ;
 struct lbuf* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct lbuf *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2, VAR_4);
 VAR_3->l_redrive_next = VAR_1;
 VAR_1 = VAR_3;
 FUNC_1(&VAR_2, VAR_4);

 FUNC_2(VAR_0);
}
