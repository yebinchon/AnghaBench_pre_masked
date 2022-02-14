
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7164_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int,int,int,int) ;
 int FUNC_1 (int ) ;

u32 FUNC_2(struct saa7164_dev *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(1, "Device running firmware version %d.%d.%d.%d (0x%x)\n",
  (VAR_2 & 0x0000fc00) >> 10,
  (VAR_2 & 0x000003e0) >> 5,
  (VAR_2 & 0x0000001f),
  (VAR_2 & 0xffff0000) >> 16,
  VAR_2);

 return VAR_2;
}
