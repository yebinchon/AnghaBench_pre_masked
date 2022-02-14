
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct idt77252_dev {int pcidev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct idt77252_dev*,struct sk_buff*,int ) ;
 int FUNC_7 (struct idt77252_dev*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_9(struct idt77252_dev *VAR_1, struct sk_buff *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_4(VAR_1->pcidev, FUNC_0(VAR_2),
           FUNC_8(VAR_2) - VAR_2->data,
           VAR_0);

 VAR_4 = FUNC_6(VAR_1, VAR_2, FUNC_2(VAR_3));
 if (VAR_4) {
  FUNC_5(VAR_1->pcidev, FUNC_0(VAR_2),
     FUNC_8(VAR_2) - VAR_2->data,
     VAR_0);
  FUNC_7(VAR_1, VAR_2);
  FUNC_3(VAR_2);
 }
}
