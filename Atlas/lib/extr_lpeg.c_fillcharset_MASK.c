
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; int aux; } ;
struct TYPE_5__ {int* buff; TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;
typedef int* Charset ;
 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,char) ;

__attribute__((used)) static void FUNC_4 (Instruction *VAR_1, Charset VAR_2) {
  switch (VAR_1[0].i.code) {
    case 128: case 129:
      FUNC_0(FUNC_3(VAR_1[1].buff, '\0'));

    case 132: case 130: {
      FUNC_1(VAR_0, VAR_2[VAR_0] = VAR_1[1].buff[VAR_0]);
      break;
    }
    case 133: case 131: {
      FUNC_1(VAR_0, VAR_2[VAR_0] = 0);
      FUNC_2(VAR_2, VAR_1[0].i.aux);
      break;
    }
    default: {
      FUNC_1(VAR_0, VAR_2[VAR_0] = 0xff);
      break;
    }
  }
}
