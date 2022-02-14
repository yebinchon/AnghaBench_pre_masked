
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t code; int aux; int offset; } ;
struct TYPE_10__ {TYPE_1__ i; int buff; } ;
typedef int Opcode ;
typedef TYPE_2__ Instruction ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__ const*,TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_6 (const Instruction *VAR_0, const Instruction *VAR_1) {
  const char *const VAR_2[] = {
    "any", "char", "set", "zset",
    "testany", "testchar", "testset", "testzset",
    "span", "spanz",
    "ret", "end",
    "choice", "jmp", "call", "open_call",
    "commit", "partial_commit", "back_commit", "failtwice", "fail", "giveup",
     "func",
     "fullcapture", "emptycapture", "emptycaptureidx", "opencapture",
     "closecapture", "closeruntime"
  };
  FUNC_4("%02ld: %s ", (long)(VAR_1 - VAR_0), VAR_2[VAR_1->i.code]);
  switch ((Opcode)VAR_1->i.code) {
    case 147: {
      FUNC_4("'%c'", VAR_1->i.aux);
      break;
    }
    case 131: {
      FUNC_4("'%c'", VAR_1->i.aux);
      FUNC_5(VAR_0, VAR_1);
      break;
    }
    case 150: {
      FUNC_4("* %d", VAR_1->i.aux);
      break;
    }
    case 132: {
      FUNC_4("* %d", VAR_1->i.aux);
      FUNC_5(VAR_0, VAR_1);
      break;
    }
    case 140: case 137:
    case 142: case 141:
    case 145: case 144: {
      FUNC_2(FUNC_0(VAR_1));
      FUNC_4("(n = %d)  (off = %d)", FUNC_1(VAR_1), VAR_1->i.offset);
      break;
    }
    case 135: case 128: case 134: case 133: {
      FUNC_3((VAR_1+1)->buff);
      break;
    }
    case 130: case 129: {
      FUNC_3((VAR_1+1)->buff);
      FUNC_5(VAR_0, VAR_1);
      break;
    }
    case 138: {
      FUNC_4("-> %d", VAR_1->i.offset);
      break;
    }
    case 146: {
      FUNC_5(VAR_0, VAR_1);
      FUNC_4(" (%d)", VAR_1->i.aux);
      break;
    }
    case 139: case 148: case 143:
    case 136: case 149: {
      FUNC_5(VAR_0, VAR_1);
      break;
    }
    default: break;
  }
  FUNC_4("\n");
}
