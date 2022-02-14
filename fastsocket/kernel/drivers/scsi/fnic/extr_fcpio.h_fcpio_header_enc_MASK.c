
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct fcpio_tag {int dummy; } ;
struct fcpio_header {struct fcpio_tag tag; scalar_t__ _resvd; void* status; void* type; } ;



__attribute__((used)) static inline void
FUNC_0(struct fcpio_header *VAR_0,
   u8 VAR_1, u8 VAR_2,
   struct fcpio_tag VAR_3)
{
 VAR_0->type = VAR_1;
 VAR_0->status = VAR_2;
 VAR_0->_resvd = 0;
 VAR_0->tag = VAR_3;
}
