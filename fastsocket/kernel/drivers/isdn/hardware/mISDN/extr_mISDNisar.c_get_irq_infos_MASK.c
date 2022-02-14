
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isar_hw {int clsb; int cmsb; int iis; int name; int hw; int (* read_reg ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct isar_hw *VAR_3)
{
 VAR_3->iis = VAR_3->read_reg(VAR_3->hw, VAR_2);
 VAR_3->cmsb = VAR_3->read_reg(VAR_3->hw, VAR_0);
 VAR_3->clsb = VAR_3->read_reg(VAR_3->hw, VAR_1);
 FUNC_0("%s: rcv_mbox(%02x,%02x,%d)\n", VAR_3->name,
  VAR_3->iis, VAR_3->cmsb, VAR_3->clsb);
}
