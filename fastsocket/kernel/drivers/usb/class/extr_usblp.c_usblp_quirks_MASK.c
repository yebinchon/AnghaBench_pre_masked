
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ vendorId; scalar_t__ productId; unsigned int quirks; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0 (__u16 VAR_1, __u16 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].vendorId; VAR_3++) {
  if (VAR_1 == VAR_0[VAR_3].vendorId &&
      VAR_2 == VAR_0[VAR_3].productId)
   return VAR_0[VAR_3].quirks;
  }
 return 0;
}
