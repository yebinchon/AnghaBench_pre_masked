
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlsi_ring {int tail; } ;
struct ring_descr {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ring_descr* FUNC_1 (struct vlsi_ring*) ;

__attribute__((used)) static inline struct ring_descr *FUNC_2(struct vlsi_ring *VAR_0)
{
 FUNC_0(&VAR_0->tail);
 return FUNC_1(VAR_0);
}
