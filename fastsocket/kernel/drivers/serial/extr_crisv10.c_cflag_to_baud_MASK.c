
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int
FUNC_0(unsigned int VAR_2)
{
 static int VAR_3[] = {
  0, 50, 75, 110, 134, 150, 200, 300, 600, 1200, 1800, 2400,
  4800, 9600, 19200, 38400 };

 static int VAR_4[] = {
  0, 57600, 115200, 230400, 460800, 921600, 1843200, 6250000,
                0, 0, 0, 0, 0, 0, 0, 0 };

 if (VAR_2 & VAR_1)
  return VAR_4[(VAR_2 & VAR_0) & ~VAR_1];
 else
  return VAR_3[VAR_2 & VAR_0];
}
