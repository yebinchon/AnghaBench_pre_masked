
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ sizebytes; scalar_t__ pos; } ;
typedef TYPE_1__ ebml_master ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_1, ebml_master VAR_2)
{
    int64_t VAR_3 = FUNC_1(VAR_1);

    if (FUNC_0(VAR_1, VAR_2.pos - VAR_2.sizebytes, VAR_0) < 0)
        return;
    FUNC_2(VAR_1, VAR_3 - VAR_2.pos, VAR_2.sizebytes);
    FUNC_0(VAR_1, VAR_3, VAR_0);
}
