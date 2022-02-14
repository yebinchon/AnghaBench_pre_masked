
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int id_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int,int) ;
 int FUNC_1 (char*,int,int *,int *,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_4)
{
 static char VAR_5[3+0xe*3+0x3*3+0x30*3+3];
 int VAR_6, VAR_7 = 1;

 if (VAR_2 & VAR_0) {
  FUNC_2(VAR_5, "CD|");
  VAR_7 = 0;
 }
 else if (VAR_2 & VAR_1)
  FUNC_2(VAR_5, "MS|");
 else FUNC_2(VAR_5, "MD|");
 VAR_6 = 3;

 if (!(VAR_2 & VAR_1)) {
  VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_3 + 0x80, 0x0e, VAR_7);
  VAR_5[VAR_6] = '|'; VAR_6++;
  VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_3 + 0xf0, 0x03, VAR_7);
  VAR_5[VAR_6] = '|'; VAR_6++;
  VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_3 + 0x50, 0x30, VAR_7);
  VAR_5[VAR_6] = 0;
  if (VAR_6 > 5)
   return VAR_5;
  VAR_6 = 3;
 }


 FUNC_1(VAR_5 + 3, sizeof(VAR_5) - 3, ((void*)0), ((void*)0), VAR_4);

 return VAR_5;
}
