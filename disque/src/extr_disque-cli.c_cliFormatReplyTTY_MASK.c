
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_3__ {int type; char* str; unsigned int elements; struct TYPE_3__** element; int len; int integer; } ;
typedef TYPE_1__ redisReply ;
typedef int _prefixfmt ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char,unsigned int) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 (char*,char*,char*,...) ;
 char* FUNC_6 (char*,char*,int ) ;
 char* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static sds FUNC_12(redisReply *VAR_1, char *VAR_2) {
    sds VAR_3 = FUNC_7();
    switch (VAR_1->type) {
    case 132:
        VAR_3 = FUNC_5(VAR_3,"(error) %s\n", VAR_1->str);
    break;
    case 129:
        VAR_3 = FUNC_3(VAR_3,VAR_1->str);
        VAR_3 = FUNC_3(VAR_3,"\n");
    break;
    case 131:
        VAR_3 = FUNC_5(VAR_3,"(integer) %lld\n",VAR_1->integer);
    break;
    case 128:


        VAR_3 = FUNC_6(VAR_3,VAR_1->str,VAR_1->len);
        VAR_3 = FUNC_3(VAR_3,"\n");
    break;
    case 130:
        VAR_3 = FUNC_3(VAR_3,"(nil)\n");
    break;
    case 133:
        if (VAR_1->elements == 0) {
            VAR_3 = FUNC_3(VAR_3,"(empty list or set)\n");
        } else {
            unsigned int VAR_4, VAR_5 = 0;
            char VAR_6[16];
            char VAR_7[16];
            sds VAR_8;
            sds VAR_9;


            VAR_4 = VAR_1->elements;
            do {
                VAR_5++;
                VAR_4 /= 10;
            } while(VAR_4);


            FUNC_2(VAR_6,' ',VAR_5+2);
            VAR_6[VAR_5+2] = '\0';
            VAR_8 = FUNC_3(FUNC_10(VAR_2),VAR_6);


            FUNC_11(VAR_7,sizeof(VAR_7),"%%s%%%ud) ",VAR_5);

            for (VAR_4 = 0; VAR_4 < VAR_1->elements; VAR_4++) {


                VAR_3 = FUNC_5(VAR_3,VAR_7,VAR_4 == 0 ? "" : VAR_2,VAR_4+1);


                VAR_9 = FUNC_12(VAR_1->element[VAR_4],VAR_8);
                VAR_3 = FUNC_4(VAR_3,VAR_9,FUNC_9(VAR_9));
                FUNC_8(VAR_9);
            }
            FUNC_8(VAR_8);
        }
    break;
    default:
        FUNC_1(VAR_0,"Unknown reply type: %d\n", VAR_1->type);
        FUNC_0(1);
    }
    return VAR_3;
}
