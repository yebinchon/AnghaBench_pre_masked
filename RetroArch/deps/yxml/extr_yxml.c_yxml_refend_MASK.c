
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;
typedef int uint64_t ;


 int FUNC_0 (char,unsigned char,char,char,unsigned char) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__,unsigned int) ;

__attribute__((used)) static yxml_ret_t FUNC_4(yxml_t *VAR_1, yxml_ret_t VAR_2) {
 unsigned char *VAR_3 = (unsigned char *)VAR_1->data;
 unsigned VAR_4 = 0;
 if(*VAR_3 == '#') {
  if(VAR_3[1] == 'x')
   for(VAR_3 += 2; FUNC_1((unsigned)*VAR_3); VAR_3++)
    VAR_4 = (VAR_4<<4) + (*VAR_3 <= '9' ? *VAR_3-'0' : (*VAR_3|32)-'a' + 10);
  else
   for(VAR_3++; FUNC_2((unsigned)*VAR_3); VAR_3++)
    VAR_4 = (VAR_4*10) + (*VAR_3-'0');
  if(*VAR_3)
   VAR_4 = 0;
 } else {
  uint64_t VAR_5 = FUNC_0(VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4]);
  VAR_4 =
   VAR_5 == FUNC_0('l','t', 0, 0, 0) ? '<' :
   VAR_5 == FUNC_0('g','t', 0, 0, 0) ? '>' :
   VAR_5 == FUNC_0('a','m','p', 0, 0) ? '&' :
   VAR_5 == FUNC_0('a','p','o','s',0) ? '\'':
   VAR_5 == FUNC_0('q','u','o','t',0) ? '"' : 0;
 }


 if(!VAR_4 || VAR_4 > 0x10FFFF || VAR_4 == 0xFFFE || VAR_4 == 0xFFFF || (VAR_4-0xDFFF) < 0x7FF)
  return VAR_0;
 FUNC_3(VAR_1->data, VAR_4);
 return VAR_2;
}
