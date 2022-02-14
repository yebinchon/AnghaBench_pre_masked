
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_info {int mi_status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline__ int
FUNC_0(const struct media_info * VAR_2)
{
    if ((VAR_2->mi_status & VAR_1) == 0) {
 return (1);
    }
    return ((VAR_2->mi_status & VAR_0) != 0);
}
