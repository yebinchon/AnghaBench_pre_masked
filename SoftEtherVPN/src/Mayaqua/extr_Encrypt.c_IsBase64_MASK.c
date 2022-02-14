
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Size; scalar_t__ Buf; } ;
typedef TYPE_1__ BUF ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,int) ;

bool FUNC_1(BUF *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_2->Buf, VAR_2->Size, "-----BEGIN", 0) != VAR_1)
 {
  return 1;
 }

 for (VAR_3 = 0;VAR_3 < VAR_2->Size;VAR_3++)
 {
  char VAR_4 = ((char *)VAR_2->Buf)[VAR_3];
  bool VAR_5 = 0;
  if ('a' <= VAR_4 && VAR_4 <= 'z')
  {
   VAR_5 = 1;
  }
  else if ('A' <= VAR_4 && VAR_4 <= 'Z')
  {
   VAR_5 = 1;
  }
  else if ('0' <= VAR_4 && VAR_4 <= '9')
  {
   VAR_5 = 1;
  }
  else if (VAR_4 == ':' || VAR_4 == '.' || VAR_4 == ';' || VAR_4 == ',')
  {
   VAR_5 = 1;
  }
  else if (VAR_4 == '!' || VAR_4 == '&' || VAR_4 == '#' || VAR_4 == '(' || VAR_4 == ')')
  {
   VAR_5 = 1;
  }
  else if (VAR_4 == '-' || VAR_4 == ' ')
  {
   VAR_5 = 1;
  }
  else if (VAR_4 == 13 || VAR_4 == 10 || VAR_4 == VAR_0)
  {
   VAR_5 = 1;
  }
  else if (VAR_4 == '\t' || VAR_4 == '=' || VAR_4 == '+' || VAR_4 == '/')
  {
   VAR_5 = 1;
  }
  if (VAR_5 == 0)
  {
   return 0;
  }
 }
 return 1;
}
