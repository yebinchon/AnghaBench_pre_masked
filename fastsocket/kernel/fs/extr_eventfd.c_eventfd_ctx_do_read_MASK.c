
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventfd_ctx {int flags; int count; } ;
typedef int __u64 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct eventfd_ctx *VAR_1, __u64 *VAR_2)
{
 *VAR_2 = (VAR_1->flags & VAR_0) ? 1 : VAR_1->count;
 VAR_1->count -= *VAR_2;
}
