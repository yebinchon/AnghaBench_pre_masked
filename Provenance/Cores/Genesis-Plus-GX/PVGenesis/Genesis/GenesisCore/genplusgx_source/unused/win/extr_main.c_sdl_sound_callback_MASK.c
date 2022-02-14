
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Uint8 ;
struct TYPE_2__ {int current_emulated_samples; int * buffer; int * current_pos; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, Uint8 *VAR_2, int VAR_3)
{
  if(VAR_0.current_emulated_samples < VAR_3) {
    FUNC_1(VAR_2, 0, VAR_3);
  }
  else {
    FUNC_0(VAR_2, VAR_0.buffer, VAR_3);

    do {
      VAR_0.current_emulated_samples -= VAR_3;
    } while(VAR_0.current_emulated_samples > 2 * VAR_3);
    FUNC_0(VAR_0.buffer,
           VAR_0.current_pos - VAR_0.current_emulated_samples,
           VAR_0.current_emulated_samples);
    VAR_0.current_pos = VAR_0.buffer + VAR_0.current_emulated_samples;
  }
}
