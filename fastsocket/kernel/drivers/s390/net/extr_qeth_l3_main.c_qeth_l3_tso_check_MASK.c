
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int doff; } ;


 unsigned long VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct sk_buff *VAR_1)
{
 int VAR_2 = ((unsigned long)FUNC_0(VAR_1) + FUNC_0(VAR_1)->doff * 4) -
  (unsigned long)VAR_1->data;
 return (((unsigned long)VAR_1->data & VAR_0) !=
  (((unsigned long)VAR_1->data + VAR_2) & VAR_0));
}
