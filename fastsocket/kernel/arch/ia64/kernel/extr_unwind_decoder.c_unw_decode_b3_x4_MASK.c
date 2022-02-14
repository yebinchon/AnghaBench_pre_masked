
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (unsigned char**) ;
 unsigned char* FUNC_5 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_7 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_8 (unsigned char*,unsigned char,void*) ;

__attribute__((used)) static unsigned char *
FUNC_9 (unsigned char *VAR_2, unsigned char VAR_3, void *VAR_4)
{
  unw_word VAR_5, VAR_6, VAR_7;

  if ((VAR_3 & 0x10) == 0)
    {
      VAR_5 = FUNC_4 (&VAR_2);
      VAR_6 = FUNC_4 (&VAR_2);
      FUNC_2(VAR_0, VAR_5, VAR_6, VAR_4);
    }
  else if ((VAR_3 & 0x07) == 0)
    {
      VAR_7 = FUNC_4 (&VAR_2);
      if ((VAR_3 & 0x08) != 0)
 FUNC_1(VAR_1, VAR_7, VAR_4);
      else
 FUNC_3(VAR_1, VAR_7, VAR_4);
    }
  else
    switch (VAR_3 & 0x7)
      {
      case 1: return FUNC_5 (VAR_2, VAR_3, VAR_4);
      case 2: return FUNC_6 (VAR_2, VAR_3, VAR_4);
      case 3: return FUNC_7 (VAR_2, VAR_3, VAR_4);
      case 4: return FUNC_8 (VAR_2, VAR_3, VAR_4);
      default: FUNC_0(VAR_3); break;
      }
  return VAR_2;
}
