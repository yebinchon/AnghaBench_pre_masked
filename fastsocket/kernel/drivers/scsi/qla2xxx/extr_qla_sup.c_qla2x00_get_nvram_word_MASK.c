
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*,int) ;

__attribute__((used)) static uint16_t
FUNC_1(struct qla_hw_data *VAR_1, uint32_t VAR_2)
{
 uint16_t VAR_3;
 uint32_t VAR_4;

 VAR_4 = VAR_2 << 16;
 VAR_4 |= VAR_0;
 VAR_3 = FUNC_0(VAR_1, VAR_4);

 return (VAR_3);
}
