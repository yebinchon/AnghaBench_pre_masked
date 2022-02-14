
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {struct hermes hw; } ;
struct hermes_idstring {int len; int val; } ;
typedef unsigned char s32 ;
typedef int list ;
struct TYPE_2__ {int (* read_ltv ) (struct hermes*,int ,int ,int,int *,struct hermes_idstring*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct hermes*,int ,int ,int,int *,struct hermes_idstring*) ;

int FUNC_5(struct orinoco_private *VAR_3,
          int *VAR_4, s32 *VAR_5, int VAR_6)
{
 struct hermes *VAR_7 = &VAR_3->hw;
 struct hermes_idstring VAR_8;
 unsigned char *VAR_9 = (unsigned char *)&VAR_8.val;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 if (FUNC_2(VAR_3, &VAR_13) != 0)
  return -VAR_0;

 VAR_10 = VAR_7->ops->read_ltv(VAR_7, VAR_2, VAR_1,
    sizeof(VAR_8), ((void*)0), &VAR_8);
 FUNC_3(VAR_3, &VAR_13);

 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_0(VAR_8.len);
 *VAR_4 = VAR_11;
 VAR_11 = FUNC_1(VAR_11, VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_5[VAR_12] = (VAR_9[VAR_12] & 0x7f) * 500000;

 return 0;
}
