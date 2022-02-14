
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ mbstate_t ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__*,char const*,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2 (const char* VAR_1, const char* VAR_2, size_t VAR_3) {
 wchar_t VAR_4, VAR_5;
 mbstate_t VAR_6 = {0};
 mbstate_t VAR_7 = {0};
 size_t VAR_8 = 0;
 size_t VAR_9 = 0;

 if (VAR_3 == 0) {
  return 0;
 }

 do {
  VAR_1 += VAR_8;
  VAR_2 += VAR_9;
  VAR_8 = FUNC_0(&VAR_4, VAR_1, VAR_0, &VAR_6);
  VAR_9 = FUNC_0(&VAR_5, VAR_2, VAR_0, &VAR_7);
  if ((int)VAR_8 < 0 || (int)VAR_9 < 0) {
   break;
  }
  VAR_3 -= VAR_8;
 } while (VAR_3 > 0 && FUNC_1(VAR_4) == FUNC_1(VAR_5) && VAR_4 != 0);

 return FUNC_1(VAR_4) - FUNC_1(VAR_5);
}
