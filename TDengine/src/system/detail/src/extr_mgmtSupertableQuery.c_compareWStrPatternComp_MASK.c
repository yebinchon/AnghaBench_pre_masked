
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {char member_0; char member_1; } ;
typedef TYPE_1__ SPatternCompareInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*,int ,TYPE_1__*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int32_t FUNC_2(const void* VAR_1, const void* VAR_2) {
  SPatternCompareInfo VAR_3 = {'%', '_'};

  const wchar_t* VAR_4 = VAR_2;
  const wchar_t* VAR_5 = VAR_1;

  int32_t VAR_6 = FUNC_0(VAR_4, VAR_5, FUNC_1(VAR_5), &VAR_3);

  return (VAR_6 == VAR_0) ? 0 : 1;
}
