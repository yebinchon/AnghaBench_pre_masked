
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Integer ;
typedef int byte ;
struct TYPE_22__ {char const* s; int siz; int kind; int idx; } ;
struct TYPE_19__ {int aux; int offset; int code; } ;
struct TYPE_21__ {char* (* f ) (int ,char const*,char const*,char const*) ;TYPE_1__ i; int buff; } ;
struct TYPE_20__ {char const* s; int caplevel; TYPE_3__ const* p; } ;
typedef TYPE_2__ Stack ;
typedef int Opcode ;
typedef TYPE_3__ const Instruction ;
typedef TYPE_4__ Capture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (char const*,TYPE_4__*,int,int) ;
 int FUNC_1 (int) ;
 TYPE_3__ const* FUNC_2 (int ,TYPE_3__ const*) ;
 TYPE_4__* FUNC_3 (int *,TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_3__ const*) ;
 int FUNC_5 (TYPE_3__ const*) ;
 TYPE_3__ const VAR_5 ;
 char const* FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,char const*,int,int) ;
 int FUNC_16 (TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_17 (int *,TYPE_4__*,TYPE_4__*,char const*,char const*,int) ;
 char* FUNC_18 (int ,char const*,char const*,char const*) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int *,int) ;

__attribute__((used)) static const char *FUNC_21 (lua_State *VAR_6,
                          const char *VAR_7, const char *VAR_8, const char *VAR_9,
                          Instruction *VAR_10, Capture *VAR_11, int VAR_12) {
  Stack VAR_13[VAR_3];
  Stack *VAR_14 = VAR_13 + VAR_3;
  Stack *VAR_15 = VAR_13;
  int VAR_16 = VAR_2;
  int VAR_17 = 0;
  const Instruction *VAR_18 = VAR_10;
  VAR_15->p = &VAR_5; VAR_15->s = VAR_8; VAR_15->caplevel = 0; VAR_15++;
  for (;;) {




    switch ((Opcode)VAR_18->i.code) {
      case 146: {
        FUNC_1(VAR_15 == VAR_13 + 1);
        VAR_11[VAR_17].kind = VAR_1;
        VAR_11[VAR_17].s = ((void*)0);
        return VAR_8;
      }
      case 141: {
        FUNC_1(VAR_15 == VAR_13);
        return ((void*)0);
      }
      case 136: {
        FUNC_1(VAR_15 > VAR_13 && (VAR_15 - 1)->s == ((void*)0));
        VAR_18 = (--VAR_15)->p;
        continue;
      }
      case 156: {
        int VAR_19 = VAR_18->i.aux;
        if (VAR_19 > VAR_9 - VAR_8) goto fail;
        else { VAR_18++; VAR_8 += VAR_19; }
        continue;
      }
      case 132: {
        int VAR_20 = VAR_18->i.aux;
        if (VAR_20 > VAR_9 - VAR_8) VAR_18 += VAR_18->i.offset;
        else { VAR_18++; VAR_8 += VAR_20; }
        continue;
      }
      case 153: {
        if ((byte)*VAR_8 != VAR_18->i.aux || VAR_8 >= VAR_9) goto fail;
        else { VAR_18++; VAR_8++; }
        continue;
      }
      case 131: {
        if ((byte)*VAR_8 != VAR_18->i.aux || VAR_8 >= VAR_9) VAR_18 += VAR_18->i.offset;
        else { VAR_18++; VAR_8++; }
        continue;
      }
      case 135: {
        int VAR_21 = (unsigned char)*VAR_8;
        if (!FUNC_19((VAR_18+1)->buff, VAR_21)) goto fail;
        else { VAR_18 += VAR_0; VAR_8++; }
        continue;
      }
      case 130: {
        int VAR_22 = (unsigned char)*VAR_8;
        if (!FUNC_19((VAR_18+1)->buff, VAR_22)) VAR_18 += VAR_18->i.offset;
        else { VAR_18 += VAR_0; VAR_8++; }
        continue;
      }
      case 128: {
        int VAR_23 = (unsigned char)*VAR_8;
        if (!FUNC_19((VAR_18+1)->buff, VAR_23) || VAR_8 >= VAR_9) goto fail;
        else { VAR_18 += VAR_0; VAR_8++; }
        continue;
      }
      case 129: {
        int VAR_24 = (unsigned char)*VAR_8;
        if (!FUNC_19((VAR_18+1)->buff, VAR_24) || VAR_8 >= VAR_9) VAR_18 += VAR_18->i.offset;
        else { VAR_18 += VAR_0; VAR_8++; }
        continue;
      }
      case 134: {
        for (;; VAR_8++) {
          int VAR_25 = (unsigned char)*VAR_8;
          if (!FUNC_19((VAR_18+1)->buff, VAR_25)) break;
        }
        VAR_18 += VAR_0;
        continue;
      }
      case 133: {
        for (; VAR_8 < VAR_9; VAR_8++) {
          int VAR_26 = (unsigned char)*VAR_8;
          if (!FUNC_19((VAR_18+1)->buff, VAR_26)) break;
        }
        VAR_18 += VAR_0;
        continue;
      }
      case 142: {
        const char *VAR_27 = (VAR_18+1)->f((VAR_18+2)->buff, VAR_7, VAR_8, VAR_9);
        if (VAR_27 == ((void*)0)) goto fail;
        VAR_8 = VAR_27;
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 140: {
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 152: {
        if (VAR_15 >= VAR_14)
          return (FUNC_6(VAR_6, "too many pending calls/choices"), (char *)0);
        VAR_15->p = FUNC_2(0, VAR_18);
        VAR_15->s = VAR_8 - VAR_18->i.aux;
        VAR_15->caplevel = VAR_17;
        VAR_15++;
        VAR_18++;
        continue;
      }
      case 154: {
        if (VAR_15 >= VAR_14)
          return (FUNC_6(VAR_6, "too many pending calls/choices"), (char *)0);
        VAR_15->s = ((void*)0);
        VAR_15->p = VAR_18 + 1;
        VAR_15++;
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 149: {
        FUNC_1(VAR_15 > VAR_13 && (VAR_15 - 1)->s != ((void*)0));
        VAR_15--;
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 137: {
        FUNC_1(VAR_15 > VAR_13 && (VAR_15 - 1)->s != ((void*)0));
        (VAR_15 - 1)->s = VAR_8;
        (VAR_15 - 1)->caplevel = VAR_17;
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 155: {
        FUNC_1(VAR_15 > VAR_13 && (VAR_15 - 1)->s != ((void*)0));
        VAR_8 = (--VAR_15)->s;
        VAR_18 += VAR_18->i.offset;
        continue;
      }
      case 144:
        FUNC_1(VAR_15 > VAR_13);
        VAR_15--;

      case 145:
      fail: {
        do {
          FUNC_1(VAR_15 > VAR_13);
          VAR_8 = (--VAR_15)->s;
        } while (VAR_8 == ((void*)0));
        VAR_17 = VAR_15->caplevel;
        VAR_18 = VAR_15->p;
        continue;
      }
      case 150: {
        int VAR_28 = FUNC_7(VAR_6) + 1;
        int VAR_29 = FUNC_17(VAR_6, VAR_11 + VAR_17, VAR_11, VAR_7, VAR_8, VAR_12);
        lua_Integer VAR_30 = FUNC_13(VAR_6, VAR_28) - 1;
        int VAR_31 = FUNC_7(VAR_6) - VAR_28;
        if (VAR_30 == -1) {
          if (!FUNC_12(VAR_6, VAR_28)) {
            FUNC_11(VAR_6, VAR_28 - 1);
            goto fail;
          }
          else if (FUNC_8(VAR_6, VAR_28))
            VAR_30 = VAR_8 - VAR_7;
        }
        if (VAR_30 < VAR_8 - VAR_7 || VAR_30 > VAR_9 - VAR_7)
          FUNC_6(VAR_6, "invalid position returned by match-time capture");
        VAR_8 = VAR_7 + VAR_30;
        VAR_17 -= VAR_29;
        FUNC_10(VAR_6, VAR_28);
        if (VAR_31 > 0) {
          if ((VAR_17 += VAR_31 + 1) >= VAR_16) {
            VAR_11 = FUNC_3(VAR_6, VAR_11, VAR_17, VAR_12);
            VAR_16 = 2 * VAR_17;
          }
          FUNC_0(VAR_8, VAR_11 + VAR_17 - VAR_31 - 1, VAR_31, VAR_28);
        }
        VAR_18++;
        continue;
      }
      case 151: {
        const char *VAR_32 = VAR_8 - FUNC_5(VAR_18);
        FUNC_1(VAR_17 > 0);
        if (VAR_11[VAR_17 - 1].siz == 0 &&
            VAR_32 - VAR_11[VAR_17 - 1].s < VAR_4) {
          VAR_11[VAR_17 - 1].siz = VAR_32 - VAR_11[VAR_17 - 1].s + 1;
          VAR_18++;
          continue;
        }
        else {
          VAR_11[VAR_17].siz = 1;
          goto capture;
        }
      }
      case 148: case 147:
        VAR_11[VAR_17].siz = 1;
        goto capture;
      case 138:
        VAR_11[VAR_17].siz = 0;
        goto capture;
      case 143:
        VAR_11[VAR_17].siz = FUNC_5(VAR_18) + 1;
      capture: {
        VAR_11[VAR_17].s = VAR_8 - FUNC_5(VAR_18);
        VAR_11[VAR_17].idx = VAR_18->i.offset;
        VAR_11[VAR_17].kind = FUNC_4(VAR_18);
        if (++VAR_17 >= VAR_16) {
          VAR_11 = FUNC_3(VAR_6, VAR_11, VAR_17, VAR_12);
          VAR_16 = 2 * VAR_17;
        }
        VAR_18++;
        continue;
      }
      case 139: {
        FUNC_9(VAR_6, FUNC_14(VAR_12), VAR_18->i.offset);
        FUNC_6(VAR_6, "reference to %s outside a grammar", FUNC_20(VAR_6, -1));
      }
      default: FUNC_1(0); return ((void*)0);
    }
  }
}
