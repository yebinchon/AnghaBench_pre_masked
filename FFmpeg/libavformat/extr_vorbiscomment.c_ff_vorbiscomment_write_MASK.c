
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int chapter_time ;
typedef int chapter_number ;
struct TYPE_9__ {int den; int num; } ;
struct TYPE_8__ {int * metadata; TYPE_4__ time_base; int start; } ;
struct TYPE_7__ {char const* key; char const* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef TYPE_2__ AVChapter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_4__,int ) ;
 int FUNC_6 (int **,char const*,int) ;
 int FUNC_7 (int **,char) ;
 int FUNC_8 (int **,int) ;
 int FUNC_9 (char*,int,char*,int,...) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char const*) ;

int FUNC_12(uint8_t **VAR_3, AVDictionary **VAR_4,
                           const char *VAR_5,
                           AVChapter **VAR_6, unsigned int VAR_7)
{
    int VAR_8 = 0;
    FUNC_8(VAR_3, FUNC_11(VAR_5));
    FUNC_6(VAR_3, VAR_5, FUNC_11(VAR_5));
    if (VAR_6 && VAR_7) {
        for (int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            VAR_8 += FUNC_1(VAR_6[VAR_9]->metadata) + 1;
        }
    }
    if (*VAR_4) {
        int VAR_10 = FUNC_1(*VAR_4) + VAR_8;
        AVDictionaryEntry *VAR_11 = ((void*)0);
        FUNC_8(VAR_3, VAR_10);
        while ((VAR_11 = FUNC_2(*VAR_4, "", VAR_11, VAR_0))) {
            int64_t VAR_12 = FUNC_11(VAR_11->key);
            int64_t VAR_13 = FUNC_11(VAR_11->value);
            if (VAR_12+1+VAR_13 > VAR_2)
                return FUNC_0(VAR_1);
            FUNC_8(VAR_3, VAR_12+1+VAR_13);
            FUNC_6(VAR_3, VAR_11->key, VAR_12);
            FUNC_7(VAR_3, '=');
            FUNC_6(VAR_3, VAR_11->value, VAR_13);
        }
        for (int VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
            AVChapter *VAR_15 = VAR_6[VAR_14];
            char VAR_16[13];
            char VAR_17[4];
            int VAR_18, VAR_19, VAR_20, VAR_21;

            VAR_20 = FUNC_4(VAR_15->start, VAR_15->time_base.num, VAR_15->time_base.den);
            VAR_18 = VAR_20 / 3600;
            VAR_19 = (VAR_20 / 60) % 60;
            VAR_21 = FUNC_5(VAR_15->start, VAR_15->time_base, FUNC_3( 1, 1000)) % 1000;
            VAR_20 = VAR_20 % 60;
            FUNC_9(VAR_17, sizeof(VAR_17), "%03d", VAR_14);
            FUNC_9(VAR_16, sizeof(VAR_16), "%02d:%02d:%02d.%03d", VAR_18, VAR_19, VAR_20, VAR_21);
            FUNC_8(VAR_3, 10+1+12);
            FUNC_6(VAR_3, "CHAPTER", 7);
            FUNC_6(VAR_3, VAR_17, 3);
            FUNC_7(VAR_3, '=');
            FUNC_6(VAR_3, VAR_16, 12);

            VAR_11 = ((void*)0);
            while ((VAR_11 = FUNC_2(VAR_6[VAR_14]->metadata, "", VAR_11, VAR_0))) {
                int64_t VAR_22 = !FUNC_10(VAR_11->key, "title") ? 4 : FUNC_11(VAR_11->key);
                int64_t VAR_23 = FUNC_11(VAR_11->value);
                if (VAR_22+1+VAR_23+10 > VAR_2)
                    return FUNC_0(VAR_1);
                FUNC_8(VAR_3, 10+VAR_22+1+VAR_23);
                FUNC_6(VAR_3, "CHAPTER", 7);
                FUNC_6(VAR_3, VAR_17, 3);
                if (!FUNC_10(VAR_11->key, "title"))
                    FUNC_6(VAR_3, "NAME", 4);
                else
                    FUNC_6(VAR_3, VAR_11->key, VAR_22);
                FUNC_7(VAR_3, '=');
                FUNC_6(VAR_3, VAR_11->value, VAR_23);
            }
        }
    } else
        FUNC_8(VAR_3, 0);
    return 0;
}
