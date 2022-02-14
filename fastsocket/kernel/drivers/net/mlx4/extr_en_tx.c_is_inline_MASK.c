
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int nr_frags; } ;


 void* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, void **VAR_2)
{
 void *VAR_3;

 if (VAR_0 && !FUNC_1(VAR_1) && VAR_1->len <= VAR_0) {
  if (FUNC_2(VAR_1)->nr_frags == 1) {
   VAR_3 = FUNC_0(VAR_1);
   if (FUNC_3(!VAR_3))
    return 0;

   if (VAR_2)
    *VAR_2 = VAR_3;

   return 1;
  } else if (FUNC_3(FUNC_2(VAR_1)->nr_frags))
   return 0;
  else
   return 1;
 }

 return 0;
}
