
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ FineSignature ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(double VAR_4, FineSignature **VAR_5, FineSignature **VAR_6, int VAR_7, int *VAR_8, int VAR_9)
{
    int VAR_10;


    VAR_10 = ((int) 0.5 + VAR_7 * VAR_4)
          -((int) 0.5 + (VAR_7-1) * VAR_4);

    if (VAR_9 == VAR_0) {
        if (VAR_4 >= 1.0) {
            if ((*VAR_5)->next) {
                *VAR_5 = (*VAR_5)->next;
            } else {
                return VAR_1;
            }

            if (VAR_10 == 1) {
                if ((*VAR_6)->next) {
                    *VAR_6 = (*VAR_6)->next;
                    (*VAR_8)++;
                } else {
                    return VAR_1;
                }
            } else {
                if ((*VAR_6)->next && (*VAR_6)->next->next) {
                    *VAR_6 = (*VAR_6)->next->next;
                    (*VAR_8)++;
                } else {
                    return VAR_1;
                }
            }
        } else {
            if ((*VAR_6)->next) {
                *VAR_6 = (*VAR_6)->next;
                (*VAR_8)++;
            } else {
                return VAR_1;
            }

            if (VAR_10 == 1) {
                if ((*VAR_5)->next) {
                    *VAR_5 = (*VAR_5)->next;
                } else {
                    return VAR_1;
                }
            } else {
                if ((*VAR_5)->next && (*VAR_5)->next->next) {
                    *VAR_5 = (*VAR_5)->next->next;
                } else {
                    return VAR_1;
                }
            }
        }
        return VAR_0;
    } else {
        if (VAR_4 >= 1.0) {
            if ((*VAR_5)->prev) {
                *VAR_5 = (*VAR_5)->prev;
            } else {
                return VAR_3;
            }

            if (VAR_10 == 1) {
                if ((*VAR_6)->prev) {
                    *VAR_6 = (*VAR_6)->prev;
                    (*VAR_8)++;
                } else {
                    return VAR_3;
                }
            } else {
                if ((*VAR_6)->prev && (*VAR_6)->prev->prev) {
                    *VAR_6 = (*VAR_6)->prev->prev;
                    (*VAR_8)++;
                } else {
                    return VAR_3;
                }
            }
        } else {
            if ((*VAR_6)->prev) {
                *VAR_6 = (*VAR_6)->prev;
                (*VAR_8)++;
            } else {
                return VAR_3;
            }

            if (VAR_10 == 1) {
                if ((*VAR_5)->prev) {
                    *VAR_5 = (*VAR_5)->prev;
                } else {
                    return VAR_3;
                }
            } else {
                if ((*VAR_5)->prev && (*VAR_5)->prev->prev) {
                    *VAR_5 = (*VAR_5)->prev->prev;
                } else {
                    return VAR_3;
                }
            }
        }
        return VAR_2;
    }
}
