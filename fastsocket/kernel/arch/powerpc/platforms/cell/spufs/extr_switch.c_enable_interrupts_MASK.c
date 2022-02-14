
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {int dummy; } ;
struct spu {int register_lock; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu*,int,unsigned long) ;
 int FUNC_3 (struct spu*,int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct spu_state *VAR_5, struct spu *VAR_6)
{
 unsigned long VAR_7 = VAR_1 |
     VAR_2;
 FUNC_0(&VAR_6->register_lock);
 FUNC_3(VAR_6, 0, VAR_0);
 FUNC_3(VAR_6, 1, VAR_3);
 FUNC_3(VAR_6, 2, VAR_4);
 FUNC_2(VAR_6, 0, 0ul);
 FUNC_2(VAR_6, 1, VAR_7);
 FUNC_2(VAR_6, 2, 0ul);
 FUNC_1(&VAR_6->register_lock);
}
