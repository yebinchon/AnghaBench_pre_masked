
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vcc; } ;
struct TYPE_3__ {int (* pop ) (TYPE_1__*,struct sk_buff*) ;} ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3 (struct sk_buff * VAR_0)
{
 if (FUNC_0(VAR_0)->vcc->pop)
  FUNC_0(VAR_0)->vcc->pop (FUNC_0(VAR_0)->vcc, VAR_0);
 else
  FUNC_1 (VAR_0);
}
