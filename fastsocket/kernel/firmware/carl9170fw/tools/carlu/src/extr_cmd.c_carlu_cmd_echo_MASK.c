
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ const uint32_t ;
struct carlu {int dummy; } ;
typedef int message ;
typedef int _message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct carlu*,int ,int *,int,int *,int) ;

int FUNC_1(struct carlu *VAR_2, const uint32_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0,
        (uint8_t *)&VAR_3, sizeof(VAR_3),
        (uint8_t *)&VAR_4, sizeof(VAR_4));

 if (VAR_5 == 0)
  VAR_5 = (VAR_3 == VAR_4) ? 0 : -VAR_1;

 return VAR_5;
}
