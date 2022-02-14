
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meth_private {int phy_addr; int meth_lock; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;




 unsigned long FUNC_1 (struct meth_private*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct meth_private *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5;

 if(VAR_1->phy_addr>=0&&VAR_1->phy_addr<32)
  return 0;
 FUNC_2(&VAR_1->meth_lock, VAR_5);
 for (VAR_2=0;VAR_2<32;++VAR_2){
  VAR_1->phy_addr=VAR_2;
  VAR_3=FUNC_1(VAR_1,2);
  VAR_4=FUNC_1(VAR_1,3);
  if(VAR_3!=0xffff&&VAR_3!=0x0000){
   FUNC_0("PHY code: %x\n",(VAR_3<<12)|(VAR_4>>4));
   break;
  }
 }
 FUNC_3(&VAR_1->meth_lock, VAR_5);
 if(VAR_1->phy_addr<32) {
  return 0;
 }
 FUNC_0("Oopsie! PHY is not known!\n");
 VAR_1->phy_addr=-1;
 return -VAR_0;
}
