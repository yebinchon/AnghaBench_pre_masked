
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {scalar_t__ cda; int count; int flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;


 int VAR_0 ;

__attribute__((used)) static inline struct ccw1 *
FUNC_0(struct ccw1 *VAR_1, __u8 VAR_2, __u16 VAR_3, void *VAR_4)
{
 VAR_1->cmd_code = VAR_2;
 VAR_1->flags = VAR_0;
 VAR_1->count = VAR_3;
 VAR_1->cda = (__u32)(addr_t) VAR_4;
 return VAR_1 + 1;
}
