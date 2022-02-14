
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int const code; int offset; int aux; } ;
struct TYPE_12__ {char* (* f ) (int ,char const*,char const*,char const*) ;TYPE_1__ i; int buff; } ;
struct TYPE_11__ {char const* s; TYPE_3__ const* p; } ;
typedef TYPE_2__ Stack ;
typedef int Opcode ;
typedef TYPE_3__ const Instruction ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ const* FUNC_1 (int ,TYPE_3__ const*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (TYPE_3__ const*) ;
 char* FUNC_5 (int ,char const*,char const*,char const*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1, Instruction *VAR_2, const Instruction *VAR_3,
                   Instruction *VAR_4, int VAR_5, int VAR_6) {
  static const char VAR_7[] = "";
  Stack VAR_8[VAR_0];
  int VAR_9 = 0;
  while (VAR_3 != VAR_4) {
    switch ((Opcode)VAR_3->i.code) {
      case 136: {
        VAR_3 = VAR_8[--VAR_9].p;
        continue;
      }
      case 151: {
        if (VAR_9 >= VAR_0)
          return FUNC_3(VAR_1, "too many pending calls/choices");
        VAR_8[VAR_9].p = FUNC_1(0, VAR_3);
        VAR_8[VAR_9++].s = VAR_7;
        VAR_3++;
        continue;
      }
      case 153: {
        FUNC_0((VAR_3 + 1)->i.code != 136);
        if (VAR_9 >= VAR_0)
          return FUNC_3(VAR_1, "too many pending calls/choices");
        VAR_8[VAR_9].s = ((void*)0);
        VAR_8[VAR_9++].p = VAR_3 + 1;
        goto dojmp;
      }
      case 139: {
        int VAR_10;
        if (VAR_5 == 0)
          goto fail;
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
          if (VAR_8[VAR_10].s == ((void*)0) && VAR_8[VAR_10].p == VAR_3 + 1)
            return FUNC_3(VAR_1, "%s is left recursive", FUNC_6(VAR_1, VAR_6));
        }
        if (VAR_9 >= VAR_0)
          return FUNC_3(VAR_1, "too many pending calls/choices");
        VAR_8[VAR_9].s = ((void*)0);
        VAR_8[VAR_9++].p = VAR_3 + 1;
        VAR_3 = VAR_2 + FUNC_2(VAR_1, VAR_5, VAR_3->i.offset);
        continue;
      }
      case 154:
      case 148: {
        FUNC_0(VAR_9 > 0 && VAR_3->i.offset > 0);
        VAR_9--;
        goto dojmp;
      }
      case 137: {
        FUNC_0(VAR_9 > 0);
        if (VAR_3->i.offset > 0) goto dojmp;
        else {
          FUNC_0(VAR_5 != 0);
          VAR_9--;
          VAR_3++;
          continue;
        }
      }
      case 132:
      case 131:
      case 130:
      case 129:
      case 140:
      dojmp: {
        VAR_3 += VAR_3->i.offset;
        continue;
      }
      case 155:
      case 152:
      case 135:
      case 128:
      case 143:
        goto fail;
      case 144: {
        if (VAR_3->i.aux) {
          FUNC_0((VAR_3 - 1)->i.code == 154 && (VAR_3 - 1)->i.offset == 2);
          VAR_3++;
          continue;
        }

      }
      fail: {
        do {
          if (VAR_9-- == 0)
            return 1;
        } while (VAR_8[VAR_9].s == ((void*)0));
        VAR_3 = VAR_8[VAR_9].p;
        continue;
      }
      case 134: case 133:
      case 138: case 150:
      case 147: case 146:
      case 142: {
        VAR_3 += FUNC_4(VAR_3);
        continue;
      }
      case 149: {
        goto fail;
      }
      case 141: {
        const char *VAR_11 = (VAR_3+1)->f((VAR_3+2)->buff, VAR_7, VAR_7, VAR_7);
        if (VAR_11 == ((void*)0)) goto fail;
        VAR_3 += VAR_3->i.offset;
        continue;
      }
      case 145:
      default: FUNC_0(0); return 0;
    }
  }
  FUNC_0(VAR_9 == 0);
  return 0;
}
