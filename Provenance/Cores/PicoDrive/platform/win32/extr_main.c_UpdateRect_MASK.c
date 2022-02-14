
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wi ;
struct TYPE_4__ {int cbSize; int rcClient; } ;
typedef TYPE_1__ WINDOWINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(void)
{
  WINDOWINFO VAR_2;
  FUNC_1(&VAR_2, 0, sizeof(VAR_2));
  VAR_2.cbSize = sizeof(VAR_2);
  FUNC_0(VAR_1, &VAR_2);
  VAR_0 = VAR_2.rcClient;
}
