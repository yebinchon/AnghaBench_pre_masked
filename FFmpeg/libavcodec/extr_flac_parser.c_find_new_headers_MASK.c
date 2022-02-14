
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* headers; int fifo_buf; scalar_t__ nb_headers_found; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACHeaderMarker ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int * FUNC_5 (TYPE_1__*,int,int*) ;

__attribute__((used)) static int FUNC_6(FLACParseContext *VAR_1, int VAR_2)
{
    FLACHeaderMarker *VAR_3;
    int VAR_4, VAR_5 = 0, VAR_6, VAR_7;
    uint8_t *VAR_8;
    VAR_1->nb_headers_found = 0;


    VAR_4 = FUNC_2(VAR_1->fifo_buf) - (VAR_0 - 1);
    VAR_6 = VAR_4 - VAR_2 + 1;
    VAR_8 = FUNC_5(VAR_1, VAR_2, &VAR_6);
    VAR_5 = FUNC_3(VAR_1, VAR_8, VAR_6, VAR_2);
    VAR_2 += VAR_6 - 1;


    if (VAR_2 != VAR_4) {
        uint8_t VAR_9[2];

        VAR_9[0] = VAR_8[VAR_6 - 1];

        VAR_6 = VAR_4 - (VAR_2 + 1) + 1;

        VAR_8 = FUNC_5(VAR_1, VAR_2 + 1, &VAR_6);
        VAR_9[1] = VAR_8[0];

        if ((FUNC_0(VAR_9) & 0xFFFE) == 0xFFF8) {
            VAR_7 = FUNC_4(VAR_1, VAR_2);
            VAR_5 = FUNC_1(VAR_5, VAR_7);
        }
        VAR_2++;


        VAR_7 = FUNC_3(VAR_1, VAR_8, VAR_6, VAR_2);
        VAR_5 = FUNC_1(VAR_5, VAR_7);
        VAR_2 += VAR_6 - 1;
    }


    if (!VAR_5 && VAR_1->headers)
        for (VAR_3 = VAR_1->headers; VAR_3; VAR_3 = VAR_3->next)
            VAR_5++;
    return VAR_5;
}
