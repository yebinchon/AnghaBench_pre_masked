
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct FFJniField {int type; int offset; scalar_t__ name; } ;
typedef int * jmethodID ;
typedef int * jfieldID ;
typedef int * jclass ;
typedef enum FFJniFieldType { ____Placeholder_FFJniFieldType } FFJniFieldType ;
struct TYPE_5__ {int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int (* DeleteGlobalRef ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;





 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (TYPE_1__**,int *) ;
 int FUNC_2 (TYPE_1__**,int *) ;

int FUNC_3(JNIEnv *VAR_1, void *VAR_2, const struct FFJniField *VAR_3, int VAR_4, void *VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_3[VAR_6].name; VAR_6++) {
        enum FFJniFieldType VAR_7 = VAR_3[VAR_6].type;

        switch(VAR_7) {
        case 132: {
            jclass VAR_8 = *(jclass*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset);
            if (!VAR_8)
                continue;

            if (VAR_4) {
                (*VAR_1)->DeleteGlobalRef(VAR_1, VAR_8);
            } else {
                (*VAR_1)->DeleteLocalRef(VAR_1, VAR_8);
            }

            *(jclass*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset) = ((void*)0);
            break;
        }
        case 131: {
            *(jfieldID*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset) = ((void*)0);
            break;
        }
        case 129: {
            *(jfieldID*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset) = ((void*)0);
            break;
        }
        case 130: {
            *(jmethodID*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset) = ((void*)0);
            break;
        }
        case 128: {
            *(jmethodID*)((uint8_t*)VAR_2 + VAR_3[VAR_6].offset) = ((void*)0);
            break;
        }
        default:
            FUNC_0(VAR_5, VAR_0, "Unknown JNI field type\n");
        }
    }

    return 0;
}
