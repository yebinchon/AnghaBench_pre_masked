
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ata_host {int dev; scalar_t__ private_data; } ;


 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_host *VAR_0)
{
 u32 VAR_1 = (unsigned long)VAR_0->private_data;


 FUNC_0(FUNC_1(VAR_0->dev), 0x60, VAR_1);
}
