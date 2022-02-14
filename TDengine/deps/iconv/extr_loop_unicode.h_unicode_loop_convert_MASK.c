
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ucs4_t ;
struct uc_to_mb_fallback_locals {unsigned char* l_outbuf; size_t l_outbytesleft; scalar_t__ l_errno; } ;
struct mb_to_uc_fallback_locals {unsigned char* l_outbuf; size_t l_outbytesleft; scalar_t__ l_errno; TYPE_5__* l_cd; } ;
typedef void* state_t ;
typedef int iconv_t ;
typedef TYPE_5__* conv_t ;
struct TYPE_13__ {int data; int (* uc_hook ) (int,int ) ;} ;
struct TYPE_12__ {int (* xxx_wctomb ) (TYPE_5__*,unsigned char*,int,size_t) ;} ;
struct TYPE_11__ {int data; int (* uc_to_mb_fallback ) (int,int ,struct uc_to_mb_fallback_locals*,int ) ;int (* mb_to_uc_fallback ) (char const*,unsigned int,int ,struct mb_to_uc_fallback_locals*,int ) ;} ;
struct TYPE_10__ {int (* xxx_mbtowc ) (TYPE_5__*,int*,unsigned char const*,size_t) ;} ;
struct TYPE_14__ {int iindex; TYPE_4__ hooks; void* istate; TYPE_3__ ofuncs; TYPE_2__ fallbacks; scalar_t__ discard_ilseq; scalar_t__ transliterate; TYPE_1__ ifuncs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_5__*,int*,unsigned char const*,size_t) ;
 int FUNC_5 (char const*,unsigned int,int ,struct mb_to_uc_fallback_locals*,int ) ;
 int FUNC_6 (TYPE_5__*,unsigned char*,int,size_t) ;
 int FUNC_7 (int,int ,struct uc_to_mb_fallback_locals*,int ) ;
 int FUNC_8 (TYPE_5__*,unsigned char*,int,size_t) ;
 int FUNC_9 (int,int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_5__*,int,unsigned char*,size_t) ;

__attribute__((used)) static size_t FUNC_11 (iconv_t VAR_8,
                                    const char* * VAR_9, size_t *VAR_10,
                                    char* * VAR_11, size_t *VAR_12)
{
  conv_t VAR_13 = (conv_t) VAR_8;
  size_t VAR_14 = 0;
  const unsigned char* VAR_15 = (const unsigned char*) *VAR_9;
  size_t VAR_16 = *VAR_10;
  unsigned char* VAR_17 = (unsigned char*) *VAR_11;
  size_t VAR_18 = *VAR_12;
  while (VAR_16 > 0) {
    state_t VAR_19 = VAR_13->istate;
    ucs4_t VAR_20;
    int VAR_21;
    int VAR_22;
    VAR_21 = VAR_13->ifuncs.xxx_mbtowc(VAR_13,&VAR_20,VAR_15,VAR_16);
    if (VAR_21 < 0) {
      if ((unsigned int)(-1-VAR_21) % 2 == (unsigned int)(-1-VAR_3) % 2) {

        VAR_21 = FUNC_0(VAR_21);
        if (VAR_13->discard_ilseq) {
          switch (VAR_13->iindex) {
            case 138: case 137: case 135:
            case 130: case 129: case 128:
            case 136: case 134:
              VAR_21 += 4; break;
            case 143: case 142: case 140:
            case 133: case 132: case 131:
            case 141: case 139:
              VAR_21 += 2; break;
            default:
              VAR_21 += 1; break;
          }
          goto outcount_zero;
        }

        else if (VAR_13->fallbacks.mb_to_uc_fallback != ((void*)0)) {
          unsigned int VAR_23;
          struct mb_to_uc_fallback_locals VAR_24;
          switch (VAR_13->iindex) {
            case 138: case 137: case 135:
            case 130: case 129: case 128:
            case 136: case 134:
              VAR_23 = 4; break;
            case 143: case 142: case 140:
            case 133: case 132: case 131:
            case 141: case 139:
              VAR_23 = 2; break;
            default:
              VAR_23 = 1; break;
          }
          VAR_24.l_cd = VAR_13;
          VAR_24.l_outbuf = VAR_17;
          VAR_24.l_outbytesleft = VAR_18;
          VAR_24.l_errno = 0;
          VAR_13->fallbacks.mb_to_uc_fallback((const char*)VAR_15+VAR_21, VAR_23,
                                          VAR_6,
                                          &VAR_24,
                                          VAR_13->fallbacks.data);
          if (VAR_24.l_errno != 0) {
            VAR_15 += VAR_21; VAR_16 -= VAR_21;
            VAR_5 = VAR_24.l_errno;
            VAR_14 = -1;
            break;
          }
          VAR_21 += VAR_23;
          VAR_17 = VAR_24.l_outbuf;
          VAR_18 = VAR_24.l_outbytesleft;
          VAR_14 += 1;
          goto outcount_zero;
        }

        VAR_15 += VAR_21; VAR_16 -= VAR_21;
        VAR_5 = VAR_1;
        VAR_14 = -1;
        break;
      }
      if (VAR_21 == FUNC_2(0)) {

        VAR_5 = VAR_2;
        VAR_14 = -1;
        break;
      }

      VAR_21 = FUNC_1(VAR_21);
    } else {

      if (VAR_18 == 0) {
        VAR_13->istate = VAR_19;
        VAR_5 = VAR_0;
        VAR_14 = -1;
        break;
      }
      VAR_22 = VAR_13->ofuncs.xxx_wctomb(VAR_13,VAR_17,VAR_20,VAR_18);
      if (VAR_22 != VAR_4)
        goto outcount_ok;

      if ((VAR_20 >> 7) == (0xe0000 >> 7))
        goto outcount_zero;

      VAR_14++;
      if (VAR_13->transliterate) {
        VAR_22 = FUNC_10(VAR_13,VAR_20,VAR_17,VAR_18);
        if (VAR_22 != VAR_4)
          goto outcount_ok;
      }
      if (VAR_13->discard_ilseq) {
        VAR_22 = 0;
        goto outcount_ok;
      }

      else if (VAR_13->fallbacks.uc_to_mb_fallback != ((void*)0)) {
        struct uc_to_mb_fallback_locals VAR_25;
        VAR_25.l_outbuf = VAR_17;
        VAR_25.l_outbytesleft = VAR_18;
        VAR_25.l_errno = 0;
        VAR_13->fallbacks.uc_to_mb_fallback(VAR_20,
                                        VAR_7,
                                        &VAR_25,
                                        VAR_13->fallbacks.data);
        if (VAR_25.l_errno != 0) {
          VAR_13->istate = VAR_19;
          VAR_5 = VAR_25.l_errno;
          return -1;
        }
        VAR_17 = VAR_25.l_outbuf;
        VAR_18 = VAR_25.l_outbytesleft;
        VAR_22 = 0;
        goto outcount_ok;
      }

      VAR_22 = VAR_13->ofuncs.xxx_wctomb(VAR_13,VAR_17,0xFFFD,VAR_18);
      if (VAR_22 != VAR_4)
        goto outcount_ok;
      VAR_13->istate = VAR_19;
      VAR_5 = VAR_1;
      VAR_14 = -1;
      break;
    outcount_ok:
      if (VAR_22 < 0) {
        VAR_13->istate = VAR_19;
        VAR_5 = VAR_0;
        VAR_14 = -1;
        break;
      }

      if (VAR_13->hooks.uc_hook)
        (*VAR_13->hooks.uc_hook)(VAR_20, VAR_13->hooks.data);

      if (!(VAR_22 <= VAR_18)) FUNC_3();
      VAR_17 += VAR_22; VAR_18 -= VAR_22;
    }
  outcount_zero:
    if (!(VAR_21 <= VAR_16)) FUNC_3();
    VAR_15 += VAR_21; VAR_16 -= VAR_21;
  }
  *VAR_9 = (const char*) VAR_15;
  *VAR_10 = VAR_16;
  *VAR_11 = (char*) VAR_17;
  *VAR_12 = VAR_18;
  return VAR_14;
}
