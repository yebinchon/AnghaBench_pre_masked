
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlsi_ring {int mask; struct ring_descr* rd; int head; int tail; } ;
struct ring_descr {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline struct ring_descr *FUNC_1(struct vlsi_ring *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->tail) & VAR_0->mask;
 return (((VAR_1+1) & VAR_0->mask) == (FUNC_0(&VAR_0->head) & VAR_0->mask)) ? ((void*)0) : &VAR_0->rd[VAR_1];
}
