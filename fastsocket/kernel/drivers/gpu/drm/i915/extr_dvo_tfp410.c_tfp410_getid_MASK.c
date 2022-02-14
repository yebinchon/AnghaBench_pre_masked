
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dvo_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct intel_dvo_device*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct intel_dvo_device *VAR_0, int VAR_1)
{
 uint8_t VAR_2, VAR_3;

 if (FUNC_0(VAR_0, VAR_1+0, &VAR_2) &&
     FUNC_0(VAR_0, VAR_1+1, &VAR_3))
  return ((VAR_3 << 8) & 0xFF00) | (VAR_2 & 0x00FF);

 return -1;
}
