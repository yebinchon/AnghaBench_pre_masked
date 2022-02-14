
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* rc_peek_t ) (int ,int,void*) ;
struct TYPE_3__ {int size; int is_bcd; int address; } ;
typedef TYPE_1__ rc_memref_t ;
__attribute__((used)) static unsigned FUNC_0(rc_memref_t* VAR_0, rc_peek_t VAR_1, void* VAR_2) {
  unsigned VAR_3;

  switch (VAR_0->size)
  {
    case 137:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 0) & 1;
      break;

    case 136:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 1) & 1;
      break;

    case 135:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 2) & 1;
      break;

    case 134:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 3) & 1;
      break;

    case 133:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 4) & 1;
      break;

    case 132:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 5) & 1;
      break;

    case 131:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 6) & 1;
      break;

    case 130:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 7) & 1;
      break;

    case 128:
      VAR_3 = VAR_1(VAR_0->address, 1, VAR_2) & 0x0f;
      break;

    case 129:
      VAR_3 = (VAR_1(VAR_0->address, 1, VAR_2) >> 4) & 0x0f;
      break;

    case 138:
      VAR_3 = VAR_1(VAR_0->address, 1, VAR_2);

      if (VAR_0->is_bcd) {
         VAR_3 = ((VAR_3 >> 4) & 0x0f) * 10 + (VAR_3 & 0x0f);
      }

      break;

    case 141:
      VAR_3 = VAR_1(VAR_0->address, 2, VAR_2);

      if (VAR_0->is_bcd) {
         VAR_3 = ((VAR_3 >> 12) & 0x0f) * 1000
               + ((VAR_3 >> 8) & 0x0f) * 100
               + ((VAR_3 >> 4) & 0x0f) * 10
               + ((VAR_3 >> 0) & 0x0f) * 1;
      }

      break;

    case 140:
      VAR_3 = VAR_1(VAR_0->address, 4, VAR_2);

      if (VAR_0->is_bcd) {
        VAR_3 = ((VAR_3 >> 20) & 0x0f) * 100000
              + ((VAR_3 >> 16) & 0x0f) * 10000
              + ((VAR_3 >> 12) & 0x0f) * 1000
              + ((VAR_3 >> 8) & 0x0f) * 100
              + ((VAR_3 >> 4) & 0x0f) * 10
              + ((VAR_3 >> 0) & 0x0f) * 1;
      }

      break;

    case 139:
      VAR_3 = VAR_1(VAR_0->address, 4, VAR_2);

      if (VAR_0->is_bcd) {
        VAR_3 = ((VAR_3 >> 28) & 0x0f) * 10000000
              + ((VAR_3 >> 24) & 0x0f) * 1000000
              + ((VAR_3 >> 20) & 0x0f) * 100000
              + ((VAR_3 >> 16) & 0x0f) * 10000
              + ((VAR_3 >> 12) & 0x0f) * 1000
              + ((VAR_3 >> 8) & 0x0f) * 100
              + ((VAR_3 >> 4) & 0x0f) * 10
              + ((VAR_3 >> 0) & 0x0f) * 1;
      }

      break;

    default:
      VAR_3 = 0;
      break;
  }

  return VAR_3;
}
