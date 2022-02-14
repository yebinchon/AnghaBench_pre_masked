
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int name; int type; } ;
typedef TYPE_2__ TypeField ;
struct TYPE_9__ {size_t num_fields; TYPE_2__* fields; } ;
struct TYPE_11__ {scalar_t__ reachable; TYPE_1__ aggregate; int typeid; } ;
typedef TYPE_3__ Type ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__** VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(void) {
    for (int VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
        Type *VAR_5 = VAR_3[VAR_4];
        if (!FUNC_3(VAR_5)) {
            continue;
        }
        FUNC_2("struct tuple%d {", VAR_5->typeid);
        VAR_1++;
        for (size_t VAR_6 = 0; VAR_6 < VAR_5->aggregate.num_fields; VAR_6++) {
            TypeField VAR_7 = VAR_5->aggregate.fields[VAR_6];
            FUNC_2("%s;", FUNC_4(VAR_7.type, VAR_7.name));
        }
        VAR_1--;
        FUNC_2("};");
    }
    for (size_t VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
        if (VAR_2[VAR_8]->reachable == VAR_0) {
            FUNC_1(VAR_2[VAR_8]);
        }
    }
}
