
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int elements; scalar_t__ type; int str; TYPE_1__** element; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_10__ {int err; char* errstr; } ;
struct TYPE_8__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,void**) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(redisReply *VAR_4, int *VAR_5) {
    redisReply *VAR_6;
    unsigned int VAR_7;


    for(VAR_7=0;VAR_7<VAR_4->elements;VAR_7++) {
        FUNC_3(VAR_2, "TYPE %s", VAR_4->element[VAR_7]->str);
    }


    for(VAR_7=0;VAR_7<VAR_4->elements;VAR_7++) {
        if(FUNC_4(VAR_2, (void**)&VAR_6)!=VAR_0) {
            FUNC_1(VAR_3, "Error getting type for key '%ld' (%d: %s)\n",
                VAR_4->element[VAR_7]->str, VAR_2->err, VAR_2->errstr);
            FUNC_0(1);
        } else if(VAR_6->type != VAR_1) {
            FUNC_1(VAR_3, "Invalid reply type (%ld) for TYPE on key '%s'!\n",
                VAR_6->type, VAR_4->element[VAR_7]->str);
            FUNC_0(1);
        }

        VAR_5[VAR_7] = FUNC_5(VAR_4->element[VAR_7]->str, VAR_6->str);
        FUNC_2(VAR_6);
    }
}
