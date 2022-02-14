
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int previous; int pin; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
        FUNC_1(VAR_2[VAR_3].pin);
        FUNC_2(VAR_2[VAR_3].pin, VAR_0);
        FUNC_3(VAR_2[VAR_3].pin, VAR_1);
        VAR_2[VAR_3].previous = VAR_1;
    }
}
