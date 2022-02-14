
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mincount; } ;
struct arg_rex {scalar_t__ count; TYPE_1__ hdr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct arg_rex *VAR_1)
{
    int VAR_2 = (VAR_1->count < VAR_1->hdr.mincount) ? VAR_0 : 0;






    return VAR_2;
}
