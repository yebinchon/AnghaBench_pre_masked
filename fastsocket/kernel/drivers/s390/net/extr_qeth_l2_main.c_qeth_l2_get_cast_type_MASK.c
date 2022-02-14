
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct qeth_card {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct qeth_card *VAR_4,
   struct sk_buff *VAR_5)
{
 if (VAR_4->info.type == VAR_0)
  return VAR_3;
 if (FUNC_0(VAR_5->data))
  return VAR_1;
 if (FUNC_1(VAR_5->data))
  return VAR_2;
 return VAR_3;
}
