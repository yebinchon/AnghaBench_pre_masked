
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct AUHeaders {int dummy; } ;
struct TYPE_6__ {void* index; void* size; } ;
struct TYPE_5__ {int au_headers_length_bytes; int sizelength; int indexlength; int nb_au_headers; int au_headers_allocated; TYPE_3__* au_headers; } ;
typedef TYPE_1__ PayloadContext ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6(PayloadContext *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    GetBitContext VAR_9;

    if (VAR_5 < 2)
        return VAR_0;



    VAR_6 = FUNC_1(VAR_4);

    if (VAR_6 > VAR_2)
      return -1;

    VAR_3->au_headers_length_bytes = (VAR_6 + 7) / 8;


    VAR_4 += 2;
    VAR_5 -= 2;

    if (VAR_5 < VAR_3->au_headers_length_bytes)
        return VAR_0;

    FUNC_5(&VAR_9, VAR_4, VAR_3->au_headers_length_bytes * 8);


    VAR_7 = VAR_3->sizelength + VAR_3->indexlength;
    if (VAR_7 <= 0 || (VAR_6 % VAR_7 != 0))
        return -1;

    VAR_3->nb_au_headers = VAR_6 / VAR_7;
    if (!VAR_3->au_headers || VAR_3->au_headers_allocated < VAR_3->nb_au_headers) {
        FUNC_2(VAR_3->au_headers);
        VAR_3->au_headers = FUNC_3(sizeof(struct AUHeaders) * VAR_3->nb_au_headers);
        if (!VAR_3->au_headers)
            return FUNC_0(VAR_1);
        VAR_3->au_headers_allocated = VAR_3->nb_au_headers;
    }

    for (VAR_8 = 0; VAR_8 < VAR_3->nb_au_headers; ++VAR_8) {
        VAR_3->au_headers[VAR_8].size = FUNC_4(&VAR_9, VAR_3->sizelength);
        VAR_3->au_headers[VAR_8].index = FUNC_4(&VAR_9, VAR_3->indexlength);
    }

    return 0;
}
