
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {struct device* next; } ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct device *VAR_7;

 for (VAR_7 = VAR_5.dev; VAR_7; VAR_7 = VAR_7->next)
  FUNC_0(VAR_7);


 if (VAR_6.c_lflag & (VAR_2|VAR_1|VAR_0))
  FUNC_1(VAR_3, VAR_4, &VAR_6);
}
