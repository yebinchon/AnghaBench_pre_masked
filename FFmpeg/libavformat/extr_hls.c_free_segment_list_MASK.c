
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist {scalar_t__ n_segments; int segments; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct playlist *VAR_0)
{
    FUNC_1(VAR_0->segments, VAR_0->n_segments);
    FUNC_0(&VAR_0->segments);
    VAR_0->n_segments = 0;
}
