
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dac_info {int data; int (* dac_read_regs ) (int ,int *,int) ;} ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct dac_info *VAR_0, u8 VAR_1)
{
 u8 VAR_2[2] = {VAR_1, 0};
 VAR_0->dac_read_regs(VAR_0->data, VAR_2, 1);
 return VAR_2[1];
}
