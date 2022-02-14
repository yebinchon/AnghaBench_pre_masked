
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iosapic {int lock; int addr; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct iosapic *VAR_0, unsigned int VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_0->addr, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
