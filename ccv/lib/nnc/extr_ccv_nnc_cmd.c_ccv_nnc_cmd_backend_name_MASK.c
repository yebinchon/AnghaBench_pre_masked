
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {char const* name; } ;


 int const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;

const char* FUNC_2(const uint32_t VAR_3)
{
 if (VAR_3 == VAR_1)
  return "CCV_NNC_NO_BACKEND";
 const int VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_4 >= 0);
 FUNC_1(VAR_4 < VAR_0);
 return VAR_2[VAR_4].name;
}
