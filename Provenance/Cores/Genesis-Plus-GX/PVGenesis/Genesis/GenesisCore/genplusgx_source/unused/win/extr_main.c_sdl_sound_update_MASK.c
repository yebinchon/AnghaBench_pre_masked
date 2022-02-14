
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* current_pos; int current_emulated_samples; } ;
struct TYPE_3__ {short** buffer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3()
{
  int VAR_3;
  short* VAR_4;

  int VAR_5 = FUNC_2();

  if (VAR_2)
  {
    FUNC_0();
    VAR_4 = (short*)VAR_0.current_pos;
    for(VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {
        *VAR_4 = VAR_1.buffer[0][VAR_3];
        ++VAR_4;
        *VAR_4 = VAR_1.buffer[1][VAR_3];
        ++VAR_4;
    }
    VAR_0.current_pos = (char*)VAR_4;
    VAR_0.current_emulated_samples += VAR_5 * 2 * sizeof(short);
    FUNC_1();
  }
}
