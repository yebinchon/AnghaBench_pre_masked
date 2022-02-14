
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypoint {double x; double y; struct keypoint* next; } ;


 struct keypoint* FUNC_0 (int) ;

__attribute__((used)) static struct keypoint *FUNC_1(double VAR_0, double VAR_1, struct keypoint *VAR_2)
{
    struct keypoint *VAR_3 = FUNC_0(sizeof(*VAR_3));

    if (!VAR_3)
        return ((void*)0);
    VAR_3->x = VAR_0;
    VAR_3->y = VAR_1;
    VAR_3->next = VAR_2;
    return VAR_3;
}
