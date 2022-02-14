
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int flags; int field_width; int precision; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_2, char *VAR_3, const char *VAR_4, struct printf_spec VAR_5)
{
 int VAR_6, VAR_7;

 if ((unsigned long)VAR_4 < VAR_1)
  VAR_4 = "(null)";

 VAR_6 = FUNC_0(VAR_4, VAR_5.precision);

 if (!(VAR_5.flags & VAR_0)) {
  while (VAR_6 < VAR_5.field_width--) {
   if (VAR_2 < VAR_3)
    *VAR_2 = ' ';
   ++VAR_2;
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  if (VAR_2 < VAR_3)
   *VAR_2 = *VAR_4;
  ++VAR_2; ++VAR_4;
 }
 while (VAR_6 < VAR_5.field_width--) {
  if (VAR_2 < VAR_3)
   *VAR_2 = ' ';
  ++VAR_2;
 }
 return VAR_2;
}
