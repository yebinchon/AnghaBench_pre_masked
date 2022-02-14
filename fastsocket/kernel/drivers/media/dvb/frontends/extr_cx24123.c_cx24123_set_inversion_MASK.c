
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24123_state {int dummy; } ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;



 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct cx24123_state *VAR_1,
 fe_spectral_inversion_t VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1, 0x0e);
 u8 VAR_4 = FUNC_0(VAR_1, 0x10);

 switch (VAR_2) {
 case 129:
  FUNC_2("inversion off\n");
  FUNC_1(VAR_1, 0x0e, VAR_3 & ~0x80);
  FUNC_1(VAR_1, 0x10, VAR_4 | 0x80);
  break;
 case 128:
  FUNC_2("inversion on\n");
  FUNC_1(VAR_1, 0x0e, VAR_3 | 0x80);
  FUNC_1(VAR_1, 0x10, VAR_4 | 0x80);
  break;
 case 130:
  FUNC_2("inversion auto\n");
  FUNC_1(VAR_1, 0x10, VAR_4 & ~0x80);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
