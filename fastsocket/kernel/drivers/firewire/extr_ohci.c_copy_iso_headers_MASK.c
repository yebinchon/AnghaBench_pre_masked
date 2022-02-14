
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ header_size; } ;
struct iso_context {int header_length; TYPE_1__ base; scalar_t__ header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,void*,int) ;

__attribute__((used)) static void FUNC_2(struct iso_context *VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_1->header_length;

 if (VAR_3 + VAR_1->base.header_size > VAR_0)
  return;







 if (VAR_1->base.header_size > 0)
  *(u32 *) (VAR_1->header + VAR_3) = FUNC_0(*(u32 *) (VAR_2 + 4));
 if (VAR_1->base.header_size > 4)
  *(u32 *) (VAR_1->header + VAR_3 + 4) = FUNC_0(*(u32 *) VAR_2);
 if (VAR_1->base.header_size > 8)
  FUNC_1(VAR_1->header + VAR_3 + 8, VAR_2 + 8, VAR_1->base.header_size - 8);
 VAR_1->header_length += VAR_1->base.header_size;
}
