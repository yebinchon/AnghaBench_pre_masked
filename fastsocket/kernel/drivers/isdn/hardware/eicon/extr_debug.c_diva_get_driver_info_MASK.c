
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t dword ;
typedef int diva_os_spin_lock_magic_t ;
typedef void* byte ;
struct TYPE_5__ {int sec; int usec; TYPE_1__* hDbg; scalar_t__* drvName; } ;
struct TYPE_4__ {scalar_t__* drvTag; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (void**,scalar_t__*,int) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (scalar_t__*) ;

int FUNC_6 (dword VAR_2, byte* VAR_3, int VAR_4) {
  diva_os_spin_lock_magic_t VAR_5;
  byte* VAR_6 = VAR_3;
  int VAR_7;

  if (!VAR_3 || !VAR_2 || (VAR_4 < 17) ||
      (VAR_2 >= FUNC_0(VAR_0))) {
    return (-1);
  }

  FUNC_1 (&VAR_1, &VAR_5, "driver info");

  if (VAR_0[VAR_2].hDbg) {
    *VAR_6++ = 1;
    *VAR_6++ = (byte)VAR_0[VAR_2].sec;
    *VAR_6++ = (byte)(VAR_0[VAR_2].sec >> 8);
    *VAR_6++ = (byte)(VAR_0[VAR_2].sec >> 16);
    *VAR_6++ = (byte)(VAR_0[VAR_2].sec >> 24);

    *VAR_6++ = (byte)(VAR_0[VAR_2].usec/1000);
    *VAR_6++ = (byte)((VAR_0[VAR_2].usec/1000) >> 8);
    *VAR_6++ = (byte)((VAR_0[VAR_2].usec/1000) >> 16);
    *VAR_6++ = (byte)((VAR_0[VAR_2].usec/1000) >> 24);

    VAR_4 -= 9;

    if ((VAR_7 = FUNC_4(FUNC_5(VAR_0[VAR_2].drvName), (size_t)(VAR_4-1)))) {
      FUNC_3 (VAR_6, VAR_0[VAR_2].drvName, VAR_7);
      VAR_6 += VAR_7;
      VAR_4 -= VAR_7;
      if ((VAR_4 >= 4) && VAR_0[VAR_2].hDbg->drvTag[0]) {
        *VAR_6++ = '(';
        VAR_4 -= 1;
        if ((VAR_7 = FUNC_4(FUNC_5(VAR_0[VAR_2].hDbg->drvTag), (size_t)(VAR_4-2)))) {
          FUNC_3 (VAR_6, VAR_0[VAR_2].hDbg->drvTag, VAR_7);
          VAR_6 += VAR_7;
          VAR_4 -= VAR_7;
          if (VAR_4 >= 2) {
            *VAR_6++ = ')';
            VAR_4--;
          }
        }
      }
    }
  }
  *VAR_6++ = 0;

  FUNC_2 (&VAR_1, &VAR_5, "driver info");

  return (VAR_6 - VAR_3);
}
