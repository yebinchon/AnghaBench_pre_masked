
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_parser_url {TYPE_1__* field_data; } ;
struct TYPE_2__ {size_t off; scalar_t__ len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,scalar_t__) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, struct http_parser_url *VAR_3)
{
    if (VAR_3->field_data[VAR_0].len) {
        return FUNC_1(&VAR_2[VAR_3->field_data[VAR_0].off], ((void*)0), 10);
    } else {
        if (FUNC_0(&VAR_2[VAR_3->field_data[VAR_1].off], "http", VAR_3->field_data[VAR_1].len) == 0) {
            return 80;
        } else if (FUNC_0(&VAR_2[VAR_3->field_data[VAR_1].off], "https", VAR_3->field_data[VAR_1].len) == 0) {
            return 443;
        }
    }
    return 0;
}
