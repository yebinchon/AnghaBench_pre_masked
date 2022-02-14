
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;

size_t FUNC_2(u8 *VAR_0, size_t VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 size_t VAR_4 = 0;
 int VAR_5;

 while (*VAR_3) {
  if (VAR_4 + 1 >= VAR_1)
   break;
  switch (*VAR_3) {
  case '\\':
   VAR_3++;
   switch (*VAR_3) {
   case '\\':
    VAR_0[VAR_4++] = '\\';
    VAR_3++;
    break;
   case '"':
    VAR_0[VAR_4++] = '"';
    VAR_3++;
    break;
   case 'n':
    VAR_0[VAR_4++] = '\n';
    VAR_3++;
    break;
   case 'r':
    VAR_0[VAR_4++] = '\r';
    VAR_3++;
    break;
   case 't':
    VAR_0[VAR_4++] = '\t';
    VAR_3++;
    break;
   case 'e':
    VAR_0[VAR_4++] = '\033';
    VAR_3++;
    break;
   case 'x':
    VAR_3++;
    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5 < 0) {
     VAR_5 = FUNC_1(*VAR_3);
     if (VAR_5 < 0)
      break;
     VAR_0[VAR_4++] = VAR_5;
     VAR_3++;
    } else {
     VAR_0[VAR_4++] = VAR_5;
     VAR_3 += 2;
    }
    break;
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
    VAR_5 = *VAR_3++ - '0';
    if (*VAR_3 >= '0' && *VAR_3 <= '7')
     VAR_5 = VAR_5 * 8 + (*VAR_3++ - '0');
    if (*VAR_3 >= '0' && *VAR_3 <= '7')
     VAR_5 = VAR_5 * 8 + (*VAR_3++ - '0');
    VAR_0[VAR_4++] = VAR_5;
    break;
   default:
    break;
   }
   break;
  default:
   VAR_0[VAR_4++] = *VAR_3++;
   break;
  }
 }
 if (VAR_1 > VAR_4)
  VAR_0[VAR_4] = '\0';

 return VAR_4;
}
