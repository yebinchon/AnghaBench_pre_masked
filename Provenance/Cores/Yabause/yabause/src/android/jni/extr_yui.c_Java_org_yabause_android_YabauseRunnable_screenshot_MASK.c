
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
typedef int jobject ;
struct TYPE_3__ {int height; int width; int stride; } ;
typedef int JNIEnv ;
typedef TYPE_1__ AndroidBitmapInfo ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,void**) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_3( JNIEnv* VAR_2, jobject VAR_3, jobject VAR_4 )
{
    u32 * VAR_5;
    AndroidBitmapInfo VAR_6;
    void * VAR_7;
    int VAR_8, VAR_9;

    FUNC_0(VAR_2, VAR_4, &VAR_6);

    FUNC_1(VAR_2, VAR_4, &VAR_7);

    VAR_5 = VAR_0;

    for(VAR_9 = 0;VAR_9 < VAR_6.height;VAR_9++) {
        for(VAR_8 = 0;VAR_8 < VAR_6.width;VAR_8++) {
            *((uint32_t *) VAR_7 + VAR_8) = *(VAR_5 + VAR_8);
        }
        VAR_7 += VAR_6.stride;
        VAR_5 += VAR_1;
    }

    FUNC_2(VAR_2, VAR_4);
}
