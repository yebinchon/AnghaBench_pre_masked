
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char*** VAR_0 ;
 size_t FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char const*,unsigned char) ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;

__attribute__((used)) static void FUNC_2(unsigned char VAR_4)
{
 const char **VAR_5 = VAR_0[ FUNC_0(VAR_4) ];

 switch ((unsigned long) VAR_5) {
 case 129:
  FUNC_1("%s[%02x] ", VAR_1, VAR_4);
  break;
 case 130:
  FUNC_1("%s(notext)[%02x] ", VAR_2, VAR_4);
  break;
 case 128:
  FUNC_1("%s[%02x] ", VAR_3, VAR_4);
  break;
 default:
  if (VAR_5[VAR_4 & 0x1f] != VAR_2)
   FUNC_1("%s[%02x] ", VAR_5[VAR_4 & 0x1f], VAR_4);
  else
   FUNC_1("%s[%02x] ", VAR_2, VAR_4);
  break;
 }
}
