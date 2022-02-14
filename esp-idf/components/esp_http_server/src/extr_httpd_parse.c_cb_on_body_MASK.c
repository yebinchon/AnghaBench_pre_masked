
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; scalar_t__ at; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_1__ last; void* error; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_3__*,char const*) ;

__attribute__((used)) static esp_err_t FUNC_4(http_parser *VAR_7, const char *VAR_8, size_t VAR_9)
{
    parser_data_t *VAR_10 = (parser_data_t *) VAR_7->data;


    if (VAR_10->status != VAR_3) {
        FUNC_1(VAR_6, FUNC_2("unexpected state transition"));
        VAR_10->error = VAR_2;
        VAR_10->status = VAR_5;
        return VAR_0;
    }





    if (FUNC_3(VAR_7, VAR_8) != VAR_1) {
        VAR_10->error = VAR_2;
        VAR_10->status = VAR_5;
        return VAR_0;
    }

    VAR_10->last.at = 0;
    VAR_10->last.length = 0;
    VAR_10->status = VAR_4;
    FUNC_0(VAR_6, FUNC_2("body begins"));
    return VAR_1;
}
