
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 struct pio_device* VAR_1 ;
 int FUNC_1 (struct pio_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_2);
 struct pio_device *VAR_4 = &VAR_1[VAR_3 >> 5];

 FUNC_1(VAR_4, VAR_0, 1 << (VAR_3 & 0x1f));
}
