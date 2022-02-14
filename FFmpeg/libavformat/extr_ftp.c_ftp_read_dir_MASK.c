
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int utf8; } ;
struct TYPE_11__ {char* dir_buffer; int dir_buffer_offset; int dir_buffer_size; int utf8; int conn_data; } ;
typedef TYPE_2__ FTPContext ;
typedef TYPE_3__ AVIODirEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__**) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,TYPE_3__*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_3, AVIODirEntry **VAR_4)
{
    FTPContext *VAR_5 = VAR_3->priv_data;
    char *VAR_6, *VAR_7;
    int VAR_8, VAR_9;

    do {
        VAR_9 = 0;
        VAR_6 = VAR_5->dir_buffer + VAR_5->dir_buffer_offset;
        while (!(VAR_7 = FUNC_6(VAR_6, "\n"))) {
            if (VAR_9)
                return FUNC_0(VAR_1);
            VAR_5->dir_buffer_size -= VAR_5->dir_buffer_offset;
            VAR_5->dir_buffer_offset = 0;
            if (VAR_5->dir_buffer_size)
                FUNC_5(VAR_5->dir_buffer, VAR_6, VAR_5->dir_buffer_size);
            VAR_8 = FUNC_3(VAR_5->conn_data, VAR_5->dir_buffer + VAR_5->dir_buffer_size, VAR_0 - (VAR_5->dir_buffer_size + 1));
            if (VAR_8 < 0)
                return VAR_8;
            if (!VAR_8) {
                *VAR_4 = ((void*)0);
                return 0;
            }
            VAR_5->dir_buffer_size += VAR_8;
            VAR_5->dir_buffer[VAR_5->dir_buffer_size] = 0;
            VAR_6 = VAR_5->dir_buffer;
            VAR_9 = 1;
        }
        VAR_5->dir_buffer_offset += (VAR_7 + 1 - VAR_6);
        VAR_7[0] = 0;
        if (VAR_7 > VAR_6 && VAR_7[-1] == '\r')
            VAR_7[-1] = 0;

        *VAR_4 = FUNC_2();
        if (!*VAR_4)
            return FUNC_0(VAR_2);
        (*VAR_4)->utf8 = VAR_5->utf8;
        VAR_8 = FUNC_4(VAR_3, VAR_6, *VAR_4);
        if (VAR_8) {
            FUNC_1(VAR_4);
            if (VAR_8 < 0)
                return VAR_8;
        }
    } while (VAR_8 > 0);
    return 0;
}
