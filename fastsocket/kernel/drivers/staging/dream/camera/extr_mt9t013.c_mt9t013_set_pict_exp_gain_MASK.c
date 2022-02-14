
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_3(uint16_t VAR_2, uint32_t VAR_3)
{
 int32_t VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1->addr,
   VAR_0,
   0x10CC | 0x0002);

 FUNC_0(5);


 return VAR_4;
}
