
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* word; long long count; } ;
typedef TYPE_1__ VOCAB ;
struct TYPE_9__ {char* word; long long count; struct TYPE_9__* next; } ;
typedef TYPE_2__ HASHREC ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (TYPE_2__**,char*) ;
 TYPE_2__** FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;
 long long VAR_4 ;
 long long VAR_5 ;
 int FUNC_6 (char*,char*,long long) ;
 int FUNC_7 (TYPE_1__*,long long,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int VAR_8 ;

int FUNC_10() {
    long long VAR_9 = 0, VAR_10 = 0, VAR_11 = 12500;

    char VAR_12[VAR_2 + 1];
    HASHREC **VAR_13 = FUNC_4();
    HASHREC *VAR_14;
    VOCAB *VAR_15;
    FILE *VAR_16 = VAR_7;

    FUNC_1(VAR_6, "BUILDING VOCABULARY\n");
    if (VAR_8 > 1) FUNC_1(VAR_6, "Processed %lld tokens.", VAR_9);

    while ( ! FUNC_0(VAR_16)) {

        int VAR_17 = FUNC_2(VAR_12, VAR_16);
        if (VAR_17) continue;
        if (FUNC_9(VAR_12, "<unk>") == 0) {
            FUNC_1(VAR_6, "\nError, <unk> vector found in corpus.\nPlease remove <unk>s from your corpus (e.g. cat text8 | sed -e 's/<unk>/<raw_unk>/g' > text8.new)");
            return 1;
        }
        FUNC_3(VAR_13, VAR_12);
        if (((++VAR_9)%100000) == 0) if (VAR_8 > 1) FUNC_1(VAR_6,"\033[11G%lld tokens.", VAR_9);
    }
    if (VAR_8 > 1) FUNC_1(VAR_6, "\033[0GProcessed %lld tokens.\n", VAR_9);
    VAR_15 = FUNC_5(sizeof(VOCAB) * VAR_11);
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        VAR_14 = VAR_13[VAR_9];
        while (VAR_14 != ((void*)0)) {
            VAR_15[VAR_10].word = VAR_14->word;
            VAR_15[VAR_10].count = VAR_14->count;
            VAR_10++;
            if (VAR_10>=VAR_11) {
                VAR_11 += 2500;
                VAR_15 = (VOCAB *)FUNC_8(VAR_15, sizeof(VOCAB) * VAR_11);
            }
            VAR_14 = VAR_14->next;
        }
    }
    if (VAR_8 > 1) FUNC_1(VAR_6, "Counted %lld unique words.\n", VAR_10);
    if (VAR_4 > 0 && VAR_4 < VAR_10)


        FUNC_7(VAR_15, VAR_10, sizeof(VOCAB), VAR_0);
    else VAR_4 = VAR_10;
    FUNC_7(VAR_15, VAR_4, sizeof(VOCAB), VAR_1);

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        if (VAR_15[VAR_9].count < VAR_5) {
            if (VAR_8 > 0) FUNC_1(VAR_6, "Truncating vocabulary at min count %lld.\n",VAR_5);
            break;
        }
        FUNC_6("%s %lld\n",VAR_15[VAR_9].word,VAR_15[VAR_9].count);
    }

    if (VAR_9 == VAR_4 && VAR_4 < VAR_10) if (VAR_8 > 0) FUNC_1(VAR_6, "Truncating vocabulary at size %lld.\n", VAR_4);
    FUNC_1(VAR_6, "Using vocabulary of size %lld.\n\n", VAR_9);
    return 0;
}
