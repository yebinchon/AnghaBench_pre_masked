
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_info {int mi_active; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int
FUNC_0(const struct media_info * VAR_1)
{
    return ((VAR_1->mi_active & VAR_0) != 0);
}
