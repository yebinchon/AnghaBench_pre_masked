
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (char*,...) ;
 int* VAR_3 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5) {
 unsigned int VAR_6;

 switch (*VAR_2++) {
 case 'a': return 7;
 case 'b': return '\b';
 case 'f': return '\f';
 case 'n': return '\n';
 case 'r': return '\r';
 case 't': return '\t';
 case 'v': return '\v';
 case '\'': case '"': case '\\': case '\?': break;
 case 'x': {
  int VAR_7 = 0;
  if ((VAR_3[*VAR_2]&(VAR_0|VAR_1)) == 0) {
   if (*VAR_2 < ' ' || *VAR_2 == 0177)
    FUNC_0("ill-formed hexadecimal escape sequence\n");
   else
    FUNC_0("ill-formed hexadecimal escape sequence `\\x%c'\n", *VAR_2);
   if (*VAR_2 != VAR_5)
    VAR_2++;
   return 0;
  }
  for (VAR_6 = 0; VAR_3[*VAR_2]&(VAR_0|VAR_1); VAR_2++) {
   if (VAR_6 >> (8*VAR_4->size - 4))
    VAR_7 = 1;
   if (VAR_3[*VAR_2]&VAR_0)
    VAR_6 = (VAR_6<<4) + *VAR_2 - '0';
   else
    VAR_6 = (VAR_6<<4) + (*VAR_2&~040) - 'A' + 10;
  }
  if (VAR_7)
   FUNC_2("overflow in hexadecimal escape sequence\n");
  return VAR_6&FUNC_1(8*VAR_4->size);
  }
 case '0': case '1': case '2': case '3':
 case '4': case '5': case '6': case '7':
  VAR_6 = *(VAR_2-1) - '0';
  if (*VAR_2 >= '0' && *VAR_2 <= '7') {
   VAR_6 = (VAR_6<<3) + *VAR_2++ - '0';
   if (*VAR_2 >= '0' && *VAR_2 <= '7')
    VAR_6 = (VAR_6<<3) + *VAR_2++ - '0';
  }
  return VAR_6;
 default:
  if (VAR_2[-1] < ' ' || VAR_2[-1] >= 0177)
   FUNC_2("unrecognized character escape sequence\n");
  else
   FUNC_2("unrecognized character escape sequence `\\%c'\n", VAR_2[-1]);
 }
 return VAR_2[-1];
}
