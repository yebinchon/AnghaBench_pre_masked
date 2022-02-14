
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlan_list_tag {TYPE_1__* buffer; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {unsigned long address; } ;


 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void
FUNC_1( struct tlan_list_tag *VAR_0, struct sk_buff *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;
 VAR_0->buffer[9].address = VAR_2;
 VAR_0->buffer[8].address = FUNC_0(VAR_2);
}
