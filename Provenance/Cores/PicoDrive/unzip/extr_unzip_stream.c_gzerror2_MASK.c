
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int z_err; } ;
typedef TYPE_1__ gz_stream ;
typedef scalar_t__ gzFile ;


 int VAR_0 ;

int FUNC_0(gzFile VAR_1)
{
    gz_stream *VAR_2 = (gz_stream*)VAR_1;

    if (VAR_2 == ((void*)0))
        return VAR_0;

    return VAR_2->z_err;
}
