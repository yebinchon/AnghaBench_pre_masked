
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int chained_options; scalar_t__ hd; int end_chunked_post; int inflate_buffer; int inflate_stream; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_0)
{
    int VAR_1 = 0;
    HTTPContext *VAR_2 = VAR_0->priv_data;






    if (VAR_2->hd && !VAR_2->end_chunked_post)

        VAR_1 = FUNC_3(VAR_0, VAR_0->flags);

    if (VAR_2->hd)
        FUNC_2(&VAR_2->hd);
    FUNC_0(&VAR_2->chained_options);
    return VAR_1;
}
