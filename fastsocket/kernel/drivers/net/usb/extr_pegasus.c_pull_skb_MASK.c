
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff** rx_pool; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(pegasus_t * VAR_1)
{
 int VAR_2;
 struct sk_buff *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1->rx_pool[VAR_2] != ((void*)0))) {
   VAR_3 = VAR_1->rx_pool[VAR_2];
   VAR_1->rx_pool[VAR_2] = ((void*)0);
   return VAR_3;
  }
 }
 return ((void*)0);
}
