
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pcf50633 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct pcf50633*,int ) ;

__attribute__((used)) static int FUNC_2(struct pcf50633 *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_6 = (VAR_4 << 2) | (VAR_5 & VAR_0);

 FUNC_0(VAR_3->dev, "adc result = %d\n", VAR_6);

 return VAR_6;
}
