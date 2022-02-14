
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct hfc_pci {int lock; } ;
struct bchannel {int nr; struct hfc_pci* hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct bchannel*) ;
 int FUNC_1 (struct bchannel*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct bchannel *VAR_1)
{
 struct hfc_pci *VAR_2 = VAR_1->hw;
 u_long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_1->nr, VAR_0);
 FUNC_3(&VAR_2->lock, VAR_3);
}
