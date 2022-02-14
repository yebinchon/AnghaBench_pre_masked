
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int elements; scalar_t__ type; unsigned long long integer; TYPE_1__** element; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_10__ {int err; char* errstr; } ;
struct TYPE_8__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,void**) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(redisReply *VAR_5, int *VAR_6,
                        unsigned long long *VAR_7)
{
    redisReply *VAR_8;
    char *VAR_9[] = {"STRLEN","LLEN","SCARD","HLEN","ZCARD"};
    unsigned int VAR_10;


    for(VAR_10=0;VAR_10<VAR_5->elements;VAR_10++) {

        if(VAR_6[VAR_10]==VAR_2)
            continue;

        FUNC_3(VAR_3, "%s %s", VAR_9[VAR_6[VAR_10]],
            VAR_5->element[VAR_10]->str);
    }


    for(VAR_10=0;VAR_10<VAR_5->elements;VAR_10++) {

        if(VAR_6[VAR_10] == VAR_2) {
            VAR_7[VAR_10] = 0;
            continue;
        }


        if(FUNC_4(VAR_3, (void**)&VAR_8)!=VAR_0) {
            FUNC_1(VAR_4, "Error getting size for key '%s' (%d: %s)\n",
                VAR_5->element[VAR_10]->str, VAR_3->err, VAR_3->errstr);
            FUNC_0(1);
        } else if(VAR_8->type != VAR_1) {


            FUNC_1(VAR_4,
                "Warning:  %s on '%s' failed (may have changed type)\n",
                 VAR_9[VAR_6[VAR_10]], VAR_5->element[VAR_10]->str);
            VAR_7[VAR_10] = 0;
        } else {
            VAR_7[VAR_10] = VAR_8->integer;
        }

        FUNC_2(VAR_8);
    }
}
