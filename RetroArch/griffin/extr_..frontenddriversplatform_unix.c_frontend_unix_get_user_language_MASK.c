
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * jstring ;
typedef enum retro_language { ____Placeholder_retro_language } retro_language ;
struct TYPE_10__ {scalar_t__ getUserLanguageString; TYPE_1__* activity; } ;
struct TYPE_9__ {char* (* GetStringUTFChars ) (TYPE_2__**,int *,int ) ;int (* ReleaseStringUTFChars ) (TYPE_2__**,int *,char const*) ;} ;
struct TYPE_8__ {int clazz; } ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (TYPE_2__**,int *,int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 char* FUNC_1 (char*) ;
 TYPE_2__** FUNC_2 () ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (TYPE_2__**,int *,int ) ;
 int FUNC_5 (TYPE_2__**,int *,char const*) ;

enum retro_language FUNC_6(void)
{
   enum retro_language VAR_2 = VAR_0;
   return VAR_2;
}
