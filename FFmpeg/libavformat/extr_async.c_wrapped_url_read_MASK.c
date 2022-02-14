
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_4__ {int inner_io_error; int inner; } ;
typedef TYPE_2__ Context ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
    URLContext *VAR_3 = VAR_0;
    Context *VAR_4 = VAR_3->priv_data;
    int VAR_5;

    VAR_5 = FUNC_0(VAR_4->inner, VAR_1, VAR_2);
    VAR_4->inner_io_error = VAR_5 < 0 ? VAR_5 : 0;

    return VAR_5;
}
