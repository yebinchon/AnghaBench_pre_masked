
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cur_beacon; } ;
struct zd_mac {TYPE_2__ beacon; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_3__ {scalar_t__ len; int data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct zd_mac *VAR_0, struct sk_buff *VAR_1)
{
 if (!VAR_0->beacon.cur_beacon)
  return 0;

 if (VAR_0->beacon.cur_beacon->len != VAR_1->len)
  return 0;

 return !FUNC_0(VAR_1->data, VAR_0->beacon.cur_beacon->data, VAR_1->len);
}
