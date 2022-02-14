
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {scalar_t__ cda; int count; scalar_t__ flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;



__attribute__((used)) static inline struct ccw1 *
FUNC_0(struct ccw1 *VAR_0, __u8 VAR_1, __u16 VAR_2, void *VAR_3)
{
 VAR_0->cmd_code = VAR_1;
 VAR_0->flags = 0;
 VAR_0->count = VAR_2;
 VAR_0->cda = (__u32)(addr_t) VAR_3;
 return VAR_0 + 1;
}
