
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pre_parsed; int paused; } ;
typedef TYPE_1__ parser_data_t ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__ http_parser ;


 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static size_t FUNC_4(http_parser *VAR_1, size_t VAR_2)
{
    parser_data_t *VAR_3 = (parser_data_t *) VAR_1->data;



    VAR_2 = FUNC_2(VAR_2, VAR_3->pre_parsed);
    VAR_3->pre_parsed -= VAR_2;
    FUNC_0(VAR_0, FUNC_1("skip pre-parsed data of size = %d"), VAR_2);

    FUNC_3(VAR_1, 0);
    VAR_3->paused = 0;
    FUNC_0(VAR_0, FUNC_1("un-paused"));
    return VAR_2;
}
