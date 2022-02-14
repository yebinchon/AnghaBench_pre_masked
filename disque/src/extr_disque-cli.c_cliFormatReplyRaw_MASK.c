
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_4__ {int type; char* str; int len; size_t elements; struct TYPE_4__** element; int integer; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_5__ {int mb_delim; } ;
 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

__attribute__((used)) static sds FUNC_8(redisReply *VAR_2) {
    sds VAR_3 = FUNC_5(), VAR_4;
    size_t VAR_5;

    switch (VAR_2->type) {
    case 130:

        break;
    case 132:
        VAR_3 = FUNC_3(VAR_3,VAR_2->str,VAR_2->len);
        VAR_3 = FUNC_3(VAR_3,"\n",1);
        break;
    case 129:
    case 128:
        VAR_3 = FUNC_3(VAR_3,VAR_2->str,VAR_2->len);
        break;
    case 131:
        VAR_3 = FUNC_4(VAR_3,"%lld",VAR_2->integer);
        break;
    case 133:
        for (VAR_5 = 0; VAR_5 < VAR_2->elements; VAR_5++) {
            if (VAR_5 > 0) VAR_3 = FUNC_2(VAR_3,VAR_0.mb_delim);
            VAR_4 = FUNC_8(VAR_2->element[VAR_5]);
            VAR_3 = FUNC_3(VAR_3,VAR_4,FUNC_7(VAR_4));
            FUNC_6(VAR_4);
        }
        break;
    default:
        FUNC_1(VAR_1,"Unknown reply type: %d\n", VAR_2->type);
        FUNC_0(1);
    }
    return VAR_3;
}
