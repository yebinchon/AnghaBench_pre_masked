
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct qla_hw_data*,int) ;
 int FUNC_3 (struct qla_hw_data*,int ) ;

__attribute__((used)) static void
FUNC_4(struct qla_hw_data *VAR_0, uint8_t *VAR_1,
    uint8_t *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_3(VAR_0, FUNC_2(VAR_0, 0x03ab));
 *VAR_1 = FUNC_0(VAR_3);
 *VAR_2 = FUNC_1(VAR_3);


 if (VAR_3 != 0xDEADDEAD && (*VAR_1 == 0 || *VAR_2 == 0)) {






  VAR_3 = FUNC_3(VAR_0, FUNC_2(VAR_0, 0x009f));
  *VAR_1 = FUNC_0(VAR_3);
  *VAR_2 = FUNC_1(VAR_3);
 }
}
