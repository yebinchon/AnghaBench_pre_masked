
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ucs4_t ;
struct uc_to_mb_fallback_locals {unsigned char* l_outbuf; size_t l_outbytesleft; scalar_t__ l_errno; } ;
struct mb_to_uc_fallback_locals {scalar_t__ l_errno; unsigned char* l_outbuf; size_t l_outbytesleft; TYPE_4__* l_cd; } ;
typedef TYPE_4__* conv_t ;
struct TYPE_10__ {int data; int (* uc_hook ) (int,int ) ;} ;
struct TYPE_9__ {int (* xxx_wctomb ) (TYPE_4__*,unsigned char*,int,size_t) ;} ;
struct TYPE_8__ {int data; int (* uc_to_mb_fallback ) (int,int ,struct uc_to_mb_fallback_locals*,int ) ;} ;
struct TYPE_11__ {TYPE_3__ hooks; TYPE_2__ ofuncs; TYPE_1__ fallbacks; scalar_t__ discard_ilseq; scalar_t__ transliterate; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,unsigned char*,int,size_t) ;
 int FUNC_2 (int,int ,struct uc_to_mb_fallback_locals*,int ) ;
 int FUNC_3 (TYPE_4__*,unsigned char*,int,size_t) ;
 int FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*,int,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_6 (const unsigned int *VAR_4, size_t VAR_5,
                                        void* VAR_6)
{
  struct mb_to_uc_fallback_locals * VAR_7 =
    (struct mb_to_uc_fallback_locals *) VAR_6;

  if (VAR_7->l_errno == 0) {

    conv_t VAR_8 = VAR_7->l_cd;
    unsigned char* VAR_9 = VAR_7->l_outbuf;
    size_t VAR_10 = VAR_7->l_outbytesleft;
    for (; VAR_5 > 0; VAR_4++, VAR_5--) {
      ucs4_t VAR_11 = *VAR_4;
      int VAR_12;
      if (VAR_10 == 0) {
        VAR_7->l_errno = VAR_0;
        break;
      }
      VAR_12 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_9,VAR_11,VAR_10);
      if (VAR_12 != VAR_2)
        goto outcount_ok;

      if ((VAR_11 >> 7) == (0xe0000 >> 7))
        goto outcount_zero;

      if (VAR_8->transliterate) {
        VAR_12 = FUNC_5(VAR_8,VAR_11,VAR_9,VAR_10);
        if (VAR_12 != VAR_2)
          goto outcount_ok;
      }
      if (VAR_8->discard_ilseq) {
        VAR_12 = 0;
        goto outcount_ok;
      }

      else if (VAR_8->fallbacks.uc_to_mb_fallback != ((void*)0)) {
        struct uc_to_mb_fallback_locals VAR_13;
        VAR_13.l_outbuf = VAR_9;
        VAR_13.l_outbytesleft = VAR_10;
        VAR_13.l_errno = 0;
        VAR_8->fallbacks.uc_to_mb_fallback(VAR_11,
                                        VAR_3,
                                        &VAR_13,
                                        VAR_8->fallbacks.data);
        if (VAR_13.l_errno != 0) {
          VAR_7->l_errno = VAR_13.l_errno;
          break;
        }
        VAR_9 = VAR_13.l_outbuf;
        VAR_10 = VAR_13.l_outbytesleft;
        VAR_12 = 0;
        goto outcount_ok;
      }

      VAR_12 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_9,0xFFFD,VAR_10);
      if (VAR_12 != VAR_2)
        goto outcount_ok;
      VAR_7->l_errno = VAR_1;
      break;
    outcount_ok:
      if (VAR_12 < 0) {
        VAR_7->l_errno = VAR_0;
        break;
      }

      if (VAR_8->hooks.uc_hook)
        (*VAR_8->hooks.uc_hook)(VAR_11, VAR_8->hooks.data);

      if (!(VAR_12 <= VAR_10)) FUNC_0();
      VAR_9 += VAR_12; VAR_10 -= VAR_12;
    outcount_zero: ;
    }
    VAR_7->l_outbuf = VAR_9;
    VAR_7->l_outbytesleft = VAR_10;
  }
}
