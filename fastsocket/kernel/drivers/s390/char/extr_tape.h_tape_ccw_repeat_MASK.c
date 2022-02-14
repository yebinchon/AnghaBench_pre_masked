
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {int cmd_code; scalar_t__ cda; scalar_t__ count; int flags; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;

__attribute__((used)) static inline struct ccw1 *
FUNC_0(struct ccw1 *VAR_1, __u8 VAR_2, int VAR_3)
{
 while (VAR_3-- > 0) {
  VAR_1->cmd_code = VAR_2;
  VAR_1->flags = VAR_0;
  VAR_1->count = 0;
  VAR_1->cda = (__u32)(addr_t) &VAR_1->cmd_code;
  VAR_1++;
 }
 return VAR_1;
}
