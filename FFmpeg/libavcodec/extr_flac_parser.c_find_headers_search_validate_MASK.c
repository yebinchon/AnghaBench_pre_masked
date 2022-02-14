
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int offset; int * link_penalty; int fi; struct TYPE_7__* next; } ;
struct TYPE_6__ {int nb_headers_found; int avctx; TYPE_2__* headers; int wrap_buf_allocated_size; int wrap_buf; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACHeaderMarker ;
typedef int FLACFrameInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_2__* FUNC_2 (int) ;
 int * FUNC_3 (TYPE_1__*,int,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(FLACParseContext *VAR_5, int VAR_6)
{
    FLACFrameInfo VAR_7;
    uint8_t *VAR_8;
    int VAR_9 = 0;
    VAR_8 = FUNC_3(VAR_5, VAR_6,
                                     VAR_4,
                                     &VAR_5->wrap_buf,
                                     &VAR_5->wrap_buf_allocated_size);
    if (FUNC_4(VAR_5->avctx, VAR_8, &VAR_7)) {
        FLACHeaderMarker **VAR_10 = &VAR_5->headers;
        int VAR_11;

        VAR_9 = 0;
        while (*VAR_10) {
            VAR_10 = &(*VAR_10)->next;
            VAR_9++;
        }

        *VAR_10 = FUNC_2(sizeof(**VAR_10));
        if (!*VAR_10) {
            FUNC_1(VAR_5->avctx, VAR_0,
                   "couldn't allocate FLACHeaderMarker\n");
            return FUNC_0(VAR_1);
        }
        (*VAR_10)->fi = VAR_7;
        (*VAR_10)->offset = VAR_6;

        for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
            (*VAR_10)->link_penalty[VAR_11] = VAR_2;

        VAR_5->nb_headers_found++;
        VAR_9++;
    }
    return VAR_9;
}
