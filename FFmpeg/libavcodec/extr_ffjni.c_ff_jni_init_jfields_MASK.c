
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct FFJniField {int mandatory; int type; int offset; int signature; int method; scalar_t__ name; } ;
typedef int jmethodID ;
typedef int jfieldID ;
typedef int * jclass ;
typedef enum FFJniFieldType { ____Placeholder_FFJniFieldType } FFJniFieldType ;
struct TYPE_12__ {int (* GetStaticMethodID ) (TYPE_1__**,int *,int ,int ) ;int (* GetMethodID ) (TYPE_1__**,int *,int ,int ) ;int (* GetStaticFieldID ) (TYPE_1__**,int *,int ,int ) ;int (* GetFieldID ) (TYPE_1__**,int *,int ,int ) ;int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int * (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* FindClass ) (TYPE_1__**,scalar_t__) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (void*,int ,char*) ;
 int FUNC_2 (TYPE_1__**,int,void*) ;
 int FUNC_3 (TYPE_1__**,void*,struct FFJniField const*,int,void*) ;
 int * FUNC_4 (TYPE_1__**,scalar_t__) ;
 int * FUNC_5 (TYPE_1__**,int *) ;
 int FUNC_6 (TYPE_1__**,int *) ;
 int FUNC_7 (TYPE_1__**,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__**,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__**,int *,int ,int ) ;
 int FUNC_10 (TYPE_1__**,int *,int ,int ) ;

int FUNC_11(JNIEnv *VAR_4, void *VAR_5, const struct FFJniField *VAR_6, int VAR_7, void *VAR_8)
{
    int VAR_9, VAR_10 = 0;
    jclass VAR_11 = ((void*)0);

    for (VAR_9 = 0; VAR_6[VAR_9].name; VAR_9++) {
        int VAR_12 = VAR_6[VAR_9].mandatory;
        enum FFJniFieldType VAR_13 = VAR_6[VAR_9].type;

        if (VAR_13 == VAR_3) {
            jclass VAR_14;

            VAR_11 = ((void*)0);

            VAR_14 = (*VAR_4)->FindClass(VAR_4, VAR_6[VAR_9].name);
            if ((VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_8)) < 0 && VAR_12) {
                goto done;
            }

            VAR_11 = *(jclass*)((uint8_t*)VAR_5 + VAR_6[VAR_9].offset) =
                    VAR_7 ? (*VAR_4)->NewGlobalRef(VAR_4, VAR_14) : VAR_14;

            if (VAR_7) {
                (*VAR_4)->DeleteLocalRef(VAR_4, VAR_14);
            }

        } else {

            if (!VAR_11) {
                VAR_10 = VAR_0;
                break;
            }

            switch(VAR_13) {
            case 131: {
                jfieldID VAR_15 = (*VAR_4)->GetFieldID(VAR_4, VAR_11, VAR_6[VAR_9].method, VAR_6[VAR_9].signature);
                if ((VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_8)) < 0 && VAR_12) {
                    goto done;
                }

                *(jfieldID*)((uint8_t*)VAR_5 + VAR_6[VAR_9].offset) = VAR_15;
                break;
            }
            case 129: {
                jfieldID VAR_16 = (*VAR_4)->GetStaticFieldID(VAR_4, VAR_11, VAR_6[VAR_9].method, VAR_6[VAR_9].signature);
                if ((VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_8)) < 0 && VAR_12) {
                    goto done;
                }

                *(jfieldID*)((uint8_t*)VAR_5 + VAR_6[VAR_9].offset) = VAR_16;
                break;
            }
            case 130: {
                jmethodID VAR_17 = (*VAR_4)->GetMethodID(VAR_4, VAR_11, VAR_6[VAR_9].method, VAR_6[VAR_9].signature);
                if ((VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_8)) < 0 && VAR_12) {
                    goto done;
                }

                *(jmethodID*)((uint8_t*)VAR_5 + VAR_6[VAR_9].offset) = VAR_17;
                break;
            }
            case 128: {
                jmethodID VAR_18 = (*VAR_4)->GetStaticMethodID(VAR_4, VAR_11, VAR_6[VAR_9].method, VAR_6[VAR_9].signature);
                if ((VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_8)) < 0 && VAR_12) {
                    goto done;
                }

                *(jmethodID*)((uint8_t*)VAR_5 + VAR_6[VAR_9].offset) = VAR_18;
                break;
            }
            default:
                FUNC_1(VAR_8, VAR_1, "Unknown JNI field type\n");
                VAR_10 = FUNC_0(VAR_2);
                goto done;
            }

            VAR_10 = 0;
        }
    }

done:
    if (VAR_10 < 0) {

        FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }

    return VAR_10;
}
