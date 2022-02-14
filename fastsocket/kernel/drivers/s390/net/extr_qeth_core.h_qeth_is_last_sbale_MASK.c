
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_buffer_element {int eflags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct qdio_buffer_element *VAR_1)
{
 return VAR_1->eflags & VAR_0;
}
