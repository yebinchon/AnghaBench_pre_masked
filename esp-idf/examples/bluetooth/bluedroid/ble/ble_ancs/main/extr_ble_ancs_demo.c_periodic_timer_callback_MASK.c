
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int buffer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void* VAR_2)
{
    FUNC_1(VAR_1);
    if (VAR_0.len > 0) {
        FUNC_0(VAR_0.buffer, VAR_0.len);
        FUNC_2(VAR_0.buffer, 0, VAR_0.len);
        VAR_0.len = 0;
    }
}
