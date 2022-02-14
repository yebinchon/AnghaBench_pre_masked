
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int props ;
struct TYPE_3__ {scalar_t__ user_data; int priority; } ;
typedef TYPE_1__ memorystatus_priority_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 memorystatus_priority_properties_t VAR_2;
 VAR_2.priority = VAR_0;
 VAR_2.user_data = 0;

 if (FUNC_2(VAR_1, FUNC_1(), 0, &VAR_2, sizeof(VAR_2))) {
  FUNC_3("memorystatus call to change jetsam priority failed\n");
  FUNC_0(-1);
 }
}
