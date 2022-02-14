
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
struct TYPE_10__ {scalar_t__ type; int elements; TYPE_1__** element; } ;
typedef TYPE_3__ redisReply ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_4__ redisContext ;
typedef int redisCallback ;
struct TYPE_9__ {int invalid; int * channels; int * patterns; } ;
struct TYPE_12__ {TYPE_2__ sub; TYPE_4__ c; } ;
typedef TYPE_5__ redisAsyncContext ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_8__ {scalar_t__ type; char* str; scalar_t__ integer; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char FUNC_9 (char) ;

__attribute__((used)) static int FUNC_10(redisAsyncContext *VAR_5, redisReply *VAR_6, redisCallback *VAR_7) {
    redisContext *VAR_8 = &(VAR_5->c);
    dict *VAR_9;
    dictEntry *VAR_10;
    int VAR_11;
    char *VAR_12;
    sds VAR_13;



    if (VAR_6->type == VAR_1) {
        FUNC_1(VAR_6->elements >= 2);
        FUNC_1(VAR_6->element[0]->type == VAR_3);
        VAR_12 = VAR_6->element[0]->str;
        VAR_11 = (FUNC_9(VAR_12[0]) == 'p') ? 1 : 0;

        if (VAR_11)
            VAR_9 = VAR_5->sub.patterns;
        else
            VAR_9 = VAR_5->sub.channels;


        FUNC_1(VAR_6->element[1]->type == VAR_3);
        VAR_13 = FUNC_7(VAR_6->element[1]->str,VAR_6->element[1]->len);
        VAR_10 = FUNC_3(VAR_9,VAR_13);
        if (VAR_10 != ((void*)0)) {
            FUNC_5(VAR_7,FUNC_4(VAR_10),sizeof(*VAR_7));


            if (FUNC_8(VAR_12+VAR_11,"unsubscribe") == 0) {
                FUNC_2(VAR_9,VAR_13);



                FUNC_1(VAR_6->element[2]->type == VAR_2);
                if (VAR_6->element[2]->integer == 0)
                    VAR_8->flags &= ~VAR_4;
            }
        }
        FUNC_6(VAR_13);
    } else {

        FUNC_0(&VAR_5->sub.invalid,VAR_7);
    }
    return VAR_0;
}
