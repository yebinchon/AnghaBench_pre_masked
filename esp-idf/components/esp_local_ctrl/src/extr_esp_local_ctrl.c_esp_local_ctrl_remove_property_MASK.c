
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int esp_err_t ;
struct TYPE_4__ {struct TYPE_4__* name; int ctx; int (* ctx_free_fn ) (int ) ;} ;
struct TYPE_3__ {size_t props_count; TYPE_2__** props; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ) ;

esp_err_t FUNC_4(const char *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(VAR_2, "Property %s not found", VAR_4);
        return VAR_0;
    }


    if (VAR_3->props[VAR_5]->ctx_free_fn) {
        VAR_3->props[VAR_5]->ctx_free_fn(
            VAR_3->props[VAR_5]->ctx);
    }
    FUNC_2(VAR_3->props[VAR_5]->name);
    FUNC_2(VAR_3->props[VAR_5]);
    VAR_3->props[VAR_5++] = ((void*)0);



    for (uint32_t VAR_6 = VAR_5; VAR_6 < VAR_3->props_count; VAR_6++) {
        if (VAR_3->props[VAR_6] == ((void*)0)) {
            break;
        }
        VAR_3->props[VAR_6-1] = VAR_3->props[VAR_6];
    }
    VAR_3->props_count--;
    return VAR_1;
}
