
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int jstring ;
typedef int * jobject ;
typedef int jmethodID ;
typedef int jclass ;
typedef int jboolean ;
struct TYPE_19__ {int gamename; int peripheral; int region; int cdinfo; int date; int version; int itemnum; int company; int system; } ;
struct TYPE_18__ {char* (* GetStringUTFChars ) (TYPE_1__**,int *,int *) ;int * (* NewObject ) (TYPE_1__**,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;int (* NewStringUTF ) (TYPE_1__**,int ) ;int (* GetMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* FindClass ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ GameInfo ;


 int FUNC_0 (char const*,TYPE_2__*) ;
 char* FUNC_1 (TYPE_1__**,int *,int *) ;
 int FUNC_2 (TYPE_1__**,int ) ;
 int FUNC_3 (TYPE_1__**,int ) ;
 int FUNC_4 (TYPE_1__**,int ) ;
 int * FUNC_5 (TYPE_1__**,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__**,char*) ;
 int FUNC_7 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_8 (TYPE_1__**,int ) ;
 int FUNC_9 (TYPE_1__**,int ) ;
 int FUNC_10 (TYPE_1__**,int ) ;
 int FUNC_11 (TYPE_1__**,int ) ;
 int FUNC_12 (TYPE_1__**,int ) ;
 int FUNC_13 (TYPE_1__**,int ) ;

jobject FUNC_14( JNIEnv* VAR_0, jobject VAR_1, jobject VAR_2 )
{
    jmethodID VAR_3;
    jboolean VAR_4;
    jclass VAR_5;
    jstring VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    GameInfo VAR_15;
    const char * VAR_16 = (*VAR_0)->GetStringUTFChars(VAR_0, VAR_2, &VAR_4);

    if (! FUNC_0(VAR_16, &VAR_15))
    {
       return ((void*)0);
    }

    VAR_5 = (*VAR_0)->FindClass(VAR_0, "org/yabause/android/GameInfo");
    VAR_3 = (*VAR_0)->GetMethodID(VAR_0, VAR_5, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

    VAR_6 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.system);
    VAR_7 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.company);
    VAR_8 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.itemnum);
    VAR_9 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.version);
    VAR_10 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.date);
    VAR_11 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.cdinfo);
    VAR_12 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.region);
    VAR_13 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.peripheral);
    VAR_14 = (*VAR_0)->NewStringUTF(VAR_0, VAR_15.gamename);

    return (*VAR_0)->NewObject(VAR_0, VAR_5, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
}
