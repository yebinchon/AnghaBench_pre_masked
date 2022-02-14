
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7134_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct saa7134_dev *VAR_4)
{
 int VAR_5 = VAR_2;
 u32 VAR_6;

 VAR_6 = FUNC_0(0x528 >> 2);
 if (VAR_6 & 0x20)
  VAR_5 = VAR_2 | VAR_3;
 if (VAR_6 & 0x40)
  VAR_5 = VAR_0 | VAR_1;
 return VAR_5;
}
