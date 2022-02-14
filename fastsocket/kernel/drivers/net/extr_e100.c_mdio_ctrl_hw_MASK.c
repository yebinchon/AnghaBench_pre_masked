
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nic {int netdev; int mdio_lock; TYPE_1__* csr; } ;
struct TYPE_2__ {int mdi_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nic*,int ,int ,int ,char*,char*,int,int,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static u16 FUNC_8(struct nic *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7, u16 VAR_8)
{
 u32 VAR_9 = 0;
 unsigned int VAR_10;
 unsigned long VAR_11;
 FUNC_4(&VAR_4->mdio_lock, VAR_11);
 for (VAR_10 = 100; VAR_10; --VAR_10) {
  if (FUNC_0(&VAR_4->csr->mdi_ctrl) & VAR_3)
   break;
  FUNC_6(20);
 }
 if (FUNC_7(!VAR_10)) {
  FUNC_2(VAR_4->netdev, "e100.mdio_ctrl won't go Ready\n");
  FUNC_5(&VAR_4->mdio_lock, VAR_11);
  return 0;
 }
 FUNC_1((VAR_7 << 16) | (VAR_5 << 21) | VAR_6 | VAR_8, &VAR_4->csr->mdi_ctrl);

 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  FUNC_6(20);
  if ((VAR_9 = FUNC_0(&VAR_4->csr->mdi_ctrl)) & VAR_3)
   break;
 }
 FUNC_5(&VAR_4->mdio_lock, VAR_11);
 FUNC_3(VAR_4, VAR_1, VAR_0, VAR_4->netdev,
       "%s:addr=%d, reg=%d, data_in=0x%04X, data_out=0x%04X\n",
       VAR_6 == VAR_2 ? "READ" : "WRITE",
       VAR_5, VAR_7, VAR_8, VAR_9);
 return (u16)VAR_9;
}
