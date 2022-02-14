
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef TYPE_1__ VDPAUPixFmtMap ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const VDPAUPixFmtMap *VAR_1)
{
    int VAR_2 = 0;
    while (VAR_1->pix_fmt != VAR_0) {
        VAR_1++;
        VAR_2++;
    }
    return VAR_2;
}
