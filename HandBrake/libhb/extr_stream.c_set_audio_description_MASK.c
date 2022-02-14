
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* native_name; char* eng_name; char* iso639_2; } ;
typedef TYPE_3__ iso639_lang_t ;
struct TYPE_7__ {int iso639_2; int simple; } ;
struct TYPE_8__ {TYPE_1__ lang; } ;
struct TYPE_10__ {TYPE_2__ config; } ;
typedef TYPE_4__ hb_audio_t ;


 int FUNC_0 (int ,int,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(hb_audio_t *VAR_0, iso639_lang_t *VAR_1)
{
    FUNC_0( VAR_0->config.lang.simple,
              sizeof( VAR_0->config.lang.simple ), "%s",
              FUNC_1( VAR_1->native_name ) ? VAR_1->native_name : VAR_1->eng_name );
    FUNC_0( VAR_0->config.lang.iso639_2,
              sizeof( VAR_0->config.lang.iso639_2 ), "%s", VAR_1->iso639_2 );
}
