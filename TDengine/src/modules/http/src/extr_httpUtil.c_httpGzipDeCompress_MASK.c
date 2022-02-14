
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int avail_in; scalar_t__ total_out; scalar_t__ total_in; int avail_out; int * next_in; int * next_out; scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; int member_0; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ voidpf ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ free_func ;
typedef int dummyHead ;
typedef scalar_t__ alloc_func ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(char *VAR_4, int32_t VAR_5, char *VAR_6, int32_t *VAR_7) {
  int VAR_8 = 0;
  z_stream VAR_9 = {0};

  static char VAR_10[2] = {
          0x8 + 0x7 * 0x10,
          (((0x8 + 0x7 * 0x10) * 0x100 + 30) / 31 * 31) & 0xFF,
  };

  VAR_9.zalloc = (alloc_func) 0;
  VAR_9.zfree = (free_func) 0;
  VAR_9.opaque = (voidpf) 0;
  VAR_9.next_in = (Bytef *) VAR_4;
  VAR_9.avail_in = 0;
  VAR_9.next_out = (Bytef *) VAR_6;
  if (FUNC_2(&VAR_9, 47) != VAR_2) {
    return -1;
  }

  while (VAR_9.total_out < *VAR_7 && VAR_9.total_in < VAR_5) {
    VAR_9.avail_in = VAR_9.avail_out = VAR_5;
    if ((VAR_8 = FUNC_0(&VAR_9, VAR_1)) == VAR_3) {
      break;
    }

    if (VAR_8 != VAR_2) {
      if (VAR_8 == VAR_0) {
        VAR_9.next_in = (Bytef *) VAR_10;
        VAR_9.avail_in = sizeof(VAR_10);
        if ((VAR_8 = FUNC_0(&VAR_9, VAR_1)) != VAR_2) {
          return -2;
        }
      } else return -3;
    }
  }

  if (FUNC_1(&VAR_9) != VAR_2) {
    return -4;
  }
  *VAR_7 = VAR_9.total_out;

  return 0;
}
