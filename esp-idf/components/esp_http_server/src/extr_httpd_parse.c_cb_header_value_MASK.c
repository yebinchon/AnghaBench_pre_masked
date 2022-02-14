
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* at; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ status; TYPE_1__ last; int error; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,size_t,char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_3(http_parser *VAR_7, const char *VAR_8, size_t VAR_9)
{
    parser_data_t *VAR_10 = (parser_data_t *) VAR_7->data;


    if (VAR_10->status == VAR_4) {

        VAR_10->last.at = VAR_8;
        VAR_10->last.length = 0;
        VAR_10->status = VAR_5;

        if (VAR_9 == 0) {







            char *VAR_11 = (char *)VAR_10->last.at;

            while (*(--VAR_11) != ':');

            while (*(++VAR_11) == ' ');

            VAR_10->last.at = VAR_11;
        }
    } else if (VAR_10->status != VAR_5) {
        FUNC_1(VAR_6, FUNC_2("unexpected state transition"));
        VAR_10->error = VAR_2;
        VAR_10->status = VAR_3;
        return VAR_0;
    }

    FUNC_0(VAR_6, FUNC_2("processing value = %.*s"), VAR_9, VAR_8);


    VAR_10->last.length += VAR_9;
    return VAR_1;
}
