
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24123_state {int dummy; } ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct cx24123_state *VAR_2,
 fe_spectral_inversion_t *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x1b) >> 7;

 if (VAR_4 == 0) {
  FUNC_1("read inversion off\n");
  *VAR_3 = VAR_0;
 } else {
  FUNC_1("read inversion on\n");
  *VAR_3 = VAR_1;
 }

 return 0;
}
