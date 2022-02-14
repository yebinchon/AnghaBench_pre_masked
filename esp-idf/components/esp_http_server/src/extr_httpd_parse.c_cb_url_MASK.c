
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* at; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ status; int error; TYPE_1__ last; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static esp_err_t FUNC_4(http_parser *VAR_9,
                        const char *VAR_10, size_t VAR_11)
{
    parser_data_t *VAR_12 = (parser_data_t *) VAR_9->data;

    if (VAR_12->status == VAR_6) {
        FUNC_0(VAR_8, FUNC_3("message begin"));


        VAR_12->last.at = VAR_10;
        VAR_12->last.length = 0;
        VAR_12->status = VAR_7;
    } else if (VAR_12->status != VAR_7) {
        FUNC_1(VAR_8, FUNC_3("unexpected state transition"));
        VAR_12->error = VAR_3;
        VAR_12->status = VAR_5;
        return VAR_0;
    }

    FUNC_0(VAR_8, FUNC_3("processing url = %.*s"), VAR_11, VAR_10);


    if ((VAR_12->last.length += VAR_11) > VAR_4) {
        FUNC_2(VAR_8, FUNC_3("URI length (%d) greater than supported (%d)"),
                 VAR_12->last.length, VAR_4);
        VAR_12->error = VAR_2;
        VAR_12->status = VAR_5;
        return VAR_0;
    }
    return VAR_1;
}
