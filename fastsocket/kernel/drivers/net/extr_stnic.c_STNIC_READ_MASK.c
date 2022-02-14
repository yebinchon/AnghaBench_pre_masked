
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vhalf ;
typedef int byte ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline byte
FUNC_1 (int VAR_1)
{
  byte VAR_2;

  VAR_2 = (*(vhalf *) (VAR_0 + ((VAR_1) << 1)) >> 8) & 0xff;
  FUNC_0 ();
  return VAR_2;
}
