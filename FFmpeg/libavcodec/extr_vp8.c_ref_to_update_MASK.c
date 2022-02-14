
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; } ;
typedef TYPE_1__ VP8Context ;
typedef int VP56RangeCoder ;
typedef int VP56Frame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static VP56Frame FUNC_1(VP8Context *VAR_5, int VAR_6, VP56Frame VAR_7)
{
    VP56RangeCoder *VAR_8 = &VAR_5->c;

    if (VAR_6)
        return VAR_0;

    switch (FUNC_0(VAR_8, 2)) {
    case 1:
        return VAR_4;
    case 2:
        return (VAR_7 == VAR_1) ? VAR_2 : VAR_1;
    }
    return VAR_3;
}
