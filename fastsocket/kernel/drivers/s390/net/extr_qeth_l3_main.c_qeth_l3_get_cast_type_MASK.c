
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; TYPE_2__* dev; } ;
struct TYPE_7__ {int link_type; } ;
struct qeth_card {TYPE_3__ info; } ;
struct TYPE_8__ {TYPE_1__* neighbour; } ;
struct TYPE_6__ {int broadcast; } ;
struct TYPE_5__ {int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (struct sk_buff*) ;

int inline FUNC_3(struct qeth_card *VAR_10, struct sk_buff *VAR_11)
{
 int VAR_12 = VAR_9;

 if (FUNC_1(VAR_11) && FUNC_1(VAR_11)->neighbour) {
  VAR_12 = FUNC_1(VAR_11)->neighbour->type;
  if ((VAR_12 == VAR_7) ||
      (VAR_12 == VAR_8) ||
      (VAR_12 == VAR_6))
   return VAR_12;
  else
   return VAR_9;
 }

 if (VAR_11->protocol == VAR_1)
  return (FUNC_2(VAR_11)[24] == 0xff) ?
    VAR_8 : 0;
 else if (VAR_11->protocol == VAR_0)
  return ((FUNC_2(VAR_11)[16] & 0xf0) == 0xe0) ?
    VAR_8 : 0;

 if (!FUNC_0(VAR_11->data, VAR_11->dev->broadcast, 6))
  return VAR_7;
 else {
  u16 VAR_13;

  VAR_13 = *((u16 *)VAR_11->data);

  switch (VAR_10->info.link_type) {
  case 129:
  case 128:
   if ((VAR_13 == VAR_5) ||
       (VAR_13 == VAR_4))
    return VAR_8;
   break;

  default:
  if ((VAR_13 == VAR_2) ||
       (VAR_13 == VAR_3))
    return VAR_8;
  }
 }
 return VAR_12;
}
