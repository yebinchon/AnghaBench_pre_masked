
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {int dummy; } ;
struct spu {int register_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu*,int,unsigned long) ;
 int FUNC_3 (struct spu*,int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct spu_state *VAR_3, struct spu *VAR_4)
{
 FUNC_0(&VAR_4->register_lock);
 FUNC_2(VAR_4, 0, 0ul);
 FUNC_2(VAR_4, 1, 0ul);
 FUNC_2(VAR_4, 2, 0ul);
 FUNC_3(VAR_4, 0, VAR_0);
 FUNC_3(VAR_4, 1, VAR_1);
 FUNC_3(VAR_4, 2, VAR_2);
 FUNC_1(&VAR_4->register_lock);
}
