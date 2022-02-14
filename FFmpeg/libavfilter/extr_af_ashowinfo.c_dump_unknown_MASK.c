
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int type; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_1, AVFrameSideData *VAR_2)
{
    FUNC_0(VAR_1, VAR_0, "unknown side data type: %d, size %d bytes", VAR_2->type, VAR_2->size);
}
