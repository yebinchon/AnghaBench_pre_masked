
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int seekable; char* headers; int chained_options; scalar_t__ listen; int location; int filesize; } ;
typedef TYPE_2__ HTTPContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (char**,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,char const*,int,int **) ;
 int FUNC_7 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(URLContext *VAR_3, const char *VAR_4, int VAR_5,
                     AVDictionary **VAR_6)
{
    HTTPContext *VAR_7 = VAR_3->priv_data;
    int VAR_8;

    if( VAR_7->seekable == 1 )
        VAR_3->is_streamed = 0;
    else
        VAR_3->is_streamed = 1;

    VAR_7->filesize = VAR_2;
    VAR_7->location = FUNC_5(VAR_4);
    if (!VAR_7->location)
        return FUNC_0(VAR_1);
    if (VAR_6)
        FUNC_1(&VAR_7->chained_options, *VAR_6, 0);

    if (VAR_7->headers) {
        int VAR_9 = FUNC_9(VAR_7->headers);
        if (VAR_9 < 2 || FUNC_8("\r\n", VAR_7->headers + VAR_9 - 2)) {
            FUNC_3(VAR_3, VAR_0,
                   "No trailing CRLF found in HTTP header. Adding it.\n");
            VAR_8 = FUNC_4(&VAR_7->headers, VAR_9 + 3);
            if (VAR_8 < 0)
                return VAR_8;
            VAR_7->headers[VAR_9] = '\r';
            VAR_7->headers[VAR_9 + 1] = '\n';
            VAR_7->headers[VAR_9 + 2] = '\0';
        }
    }

    if (VAR_7->listen) {
        return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
    }
    VAR_8 = FUNC_7(VAR_3, VAR_6);
    if (VAR_8 < 0)
        FUNC_2(&VAR_7->chained_options);
    return VAR_8;
}
