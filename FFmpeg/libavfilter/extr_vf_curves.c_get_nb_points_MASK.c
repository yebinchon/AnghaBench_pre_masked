
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypoint {struct keypoint* next; } ;



__attribute__((used)) static int FUNC_0(const struct keypoint *VAR_0)
{
    int VAR_1 = 0;
    while (VAR_0) {
        VAR_1++;
        VAR_0 = VAR_0->next;
    }
    return VAR_1;
}
