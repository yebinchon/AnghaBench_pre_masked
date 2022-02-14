
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cardstate {int dummy; } ;
struct bc_state {int corrupted; scalar_t__ ignore; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct bc_state*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0,
         struct cardstate *VAR_1,
         struct bc_state *VAR_2)
{
 if (VAR_0)
  FUNC_0(VAR_0);

 if (VAR_2->ignore)
  --VAR_2->ignore;
 else {
  ++VAR_2->corrupted;
  FUNC_1(VAR_2);
 }
}
