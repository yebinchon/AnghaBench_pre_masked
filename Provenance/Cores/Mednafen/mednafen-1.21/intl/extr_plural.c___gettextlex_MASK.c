
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long num; int op; } ;
typedef TYPE_1__ YYSTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_0 (YYSTYPE *VAR_18, const char **VAR_19)
{
  const char *VAR_20 = *VAR_19;
  int VAR_21;

  while (1)
    {
      if (VAR_20[0] == '\0')
 {
   *VAR_19 = VAR_20;
   return VAR_5;
 }

      if (VAR_20[0] != ' ' && VAR_20[0] != '\t')
 break;

      ++VAR_20;
    }

  VAR_21 = *VAR_20++;
  switch (VAR_21)
    {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      {
 unsigned long int VAR_22 = VAR_21 - '0';
 while (VAR_20[0] >= '0' && VAR_20[0] <= '9')
   {
     VAR_22 *= 10;
     VAR_22 += VAR_20[0] - '0';
     ++VAR_20;
   }
 VAR_18->num = VAR_22;
 VAR_21 = VAR_4;
      }
      break;

    case '=':
      if (VAR_20[0] == '=')
 {
   ++VAR_20;
   VAR_18->op = VAR_8;
   VAR_21 = VAR_2;
 }
      else
 VAR_21 = VAR_6;
      break;

    case '!':
      if (VAR_20[0] == '=')
 {
   ++VAR_20;
   VAR_18->op = VAR_16;
   VAR_21 = VAR_2;
 }
      break;

    case '&':
    case '|':
      if (VAR_20[0] == VAR_21)
 ++VAR_20;
      else
 VAR_21 = VAR_6;
      break;

    case '<':
      if (VAR_20[0] == '=')
 {
   ++VAR_20;
   VAR_18->op = VAR_11;
 }
      else
 VAR_18->op = VAR_12;
      VAR_21 = VAR_1;
      break;

    case '>':
      if (VAR_20[0] == '=')
 {
   ++VAR_20;
   VAR_18->op = VAR_9;
 }
      else
 VAR_18->op = VAR_10;
      VAR_21 = VAR_1;
      break;

    case '*':
      VAR_18->op = VAR_15;
      VAR_21 = VAR_3;
      break;

    case '/':
      VAR_18->op = VAR_7;
      VAR_21 = VAR_3;
      break;

    case '%':
      VAR_18->op = VAR_14;
      VAR_21 = VAR_3;
      break;

    case '+':
      VAR_18->op = VAR_17;
      VAR_21 = VAR_0;
      break;

    case '-':
      VAR_18->op = VAR_13;
      VAR_21 = VAR_0;
      break;

    case 'n':
    case '?':
    case ':':
    case '(':
    case ')':

      break;

    case ';':
    case '\n':
    case '\0':

      --VAR_20;
      VAR_21 = VAR_5;
      break;

    default:
      VAR_21 = VAR_6;



      break;
    }

  *VAR_19 = VAR_20;

  return VAR_21;
}
