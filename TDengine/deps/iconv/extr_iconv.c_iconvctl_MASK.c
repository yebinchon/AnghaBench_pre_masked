
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iconv_hooks {int * data; int * wc_hook; int * uc_hook; } ;
struct iconv_fallbacks {int * data; int * wc_to_mb_fallback; int * mb_to_wc_fallback; int * uc_to_mb_fallback; int * mb_to_uc_fallback; } ;
typedef int iconv_t ;
typedef TYPE_2__* conv_t ;
struct TYPE_3__ {int loop_convert; } ;
struct TYPE_4__ {int transliterate; int discard_ilseq; struct iconv_fallbacks fallbacks; struct iconv_hooks hooks; TYPE_1__ lfuncs; int oindex; int iindex; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0 (iconv_t VAR_4, int VAR_5, void* VAR_6)
{
  conv_t VAR_7 = (conv_t) VAR_4;
  switch (VAR_5) {
    case 128:
      *(int *)VAR_6 =
        ((VAR_7->lfuncs.loop_convert == VAR_2
          && VAR_7->iindex == VAR_7->oindex)
         || VAR_7->lfuncs.loop_convert == VAR_3
         ? 1 : 0);
      return 0;
    case 133:
      *(int *)VAR_6 = VAR_7->transliterate;
      return 0;
    case 129:
      VAR_7->transliterate = (*(const int *)VAR_6 ? 1 : 0);
      return 0;
    case 134:
      *(int *)VAR_6 = VAR_7->discard_ilseq;
      return 0;
    case 132:
      VAR_7->discard_ilseq = (*(const int *)VAR_6 ? 1 : 0);
      return 0;
    case 130:
      if (VAR_6 != ((void*)0)) {
        VAR_7->hooks = *(const struct iconv_hooks *)VAR_6;
      } else {
        VAR_7->hooks.uc_hook = ((void*)0);
        VAR_7->hooks.wc_hook = ((void*)0);
        VAR_7->hooks.data = ((void*)0);
      }
      return 0;
    case 131:
      if (VAR_6 != ((void*)0)) {
        VAR_7->fallbacks = *(const struct iconv_fallbacks *)VAR_6;
      } else {
        VAR_7->fallbacks.mb_to_uc_fallback = ((void*)0);
        VAR_7->fallbacks.uc_to_mb_fallback = ((void*)0);
        VAR_7->fallbacks.mb_to_wc_fallback = ((void*)0);
        VAR_7->fallbacks.wc_to_mb_fallback = ((void*)0);
        VAR_7->fallbacks.data = ((void*)0);
      }
      return 0;
    default:
      VAR_1 = VAR_0;
      return -1;
  }
}
