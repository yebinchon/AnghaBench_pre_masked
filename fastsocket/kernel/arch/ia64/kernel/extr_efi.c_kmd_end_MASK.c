
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int num_pages; scalar_t__ start; } ;
typedef TYPE_1__ kern_memdesc_t ;


 int VAR_0 ;

__attribute__((used)) static inline u64
FUNC_0(kern_memdesc_t *VAR_1)
{
 return (VAR_1->start + (VAR_1->num_pages << VAR_0));
}
