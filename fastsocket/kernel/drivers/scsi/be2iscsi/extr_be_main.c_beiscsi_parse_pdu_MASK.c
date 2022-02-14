
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {TYPE_1__* session; } ;
typedef scalar_t__ itt_t ;
struct TYPE_2__ {int age; } ;



__attribute__((used)) static void FUNC_0(struct iscsi_conn *VAR_0, itt_t VAR_1,
         int *VAR_2, int *VAR_3)
{
 *VAR_2 = (int)VAR_1;
 if (VAR_3)
  *VAR_3 = VAR_0->session->age;
}
