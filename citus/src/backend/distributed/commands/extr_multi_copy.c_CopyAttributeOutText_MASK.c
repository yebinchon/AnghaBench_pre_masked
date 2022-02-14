
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* delim; int file_encoding; scalar_t__ need_transcoding; } ;
typedef TYPE_1__* CopyOutState ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 char* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(CopyOutState VAR_0, char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char VAR_4 = '\0';
 char VAR_5 = VAR_0->delim[0];

 if (VAR_0->need_transcoding)
 {
  VAR_2 = FUNC_2(VAR_1, FUNC_3(VAR_1), VAR_0->file_encoding);
 }
 else
 {
  VAR_2 = VAR_1;
 }
 VAR_3 = VAR_2;
 while ((VAR_4 = *VAR_2) != '\0')
 {
  if ((unsigned char) VAR_4 < (unsigned char) 0x20)
  {







   switch (VAR_4)
   {
    case '\b':
     VAR_4 = 'b';
     break;
    case '\f':
     VAR_4 = 'f';
     break;
    case '\n':
     VAR_4 = 'n';
     break;
    case '\r':
     VAR_4 = 'r';
     break;
    case '\t':
     VAR_4 = 't';
     break;
    case '\v':
     VAR_4 = 'v';
     break;
    default:

     if (VAR_4 == VAR_5)
      break;

     VAR_2++;
     continue;
   }

   FUNC_0(VAR_0, VAR_3, VAR_2);
   FUNC_1(VAR_0, '\\');
   FUNC_1(VAR_0, VAR_4);
   VAR_3 = ++VAR_2;
  }
  else if (VAR_4 == '\\' || VAR_4 == VAR_5)
  {
   FUNC_0(VAR_0, VAR_3, VAR_2);
   FUNC_1(VAR_0, '\\');
   VAR_3 = VAR_2++;
  }
  else
  {
   VAR_2++;
  }
 }

 FUNC_0(VAR_0, VAR_3, VAR_2);
}
