
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
typedef TYPE_1__ jsmntok_t ;
struct TYPE_10__ {int pos; int toksuper; } ;
typedef TYPE_2__ jsmn_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(jsmn_parser *VAR_4, const char *VAR_5,
  size_t VAR_6, jsmntok_t *VAR_7, size_t VAR_8) {
 jsmntok_t *VAR_9;
 int VAR_10;

 VAR_10 = VAR_4->pos;

 for (; VAR_4->pos < VAR_6 && VAR_5[VAR_4->pos] != '\0'; VAR_4->pos++) {
  switch (VAR_5[VAR_4->pos]) {


   case ':':

   case '\t' : case '\r' : case '\n' : case ' ' :
   case ',' : case ']' : case '}' :
    goto found;
  }
  if (VAR_5[VAR_4->pos] < 32 || VAR_5[VAR_4->pos] >= 127) {
   VAR_4->pos = VAR_10;
   return VAR_0;
  }
 }






found:
 if (VAR_7 == ((void*)0)) {
  VAR_4->pos--;
  return 0;
 }
 VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_8);
 if (VAR_9 == ((void*)0)) {
  VAR_4->pos = VAR_10;
  return VAR_1;
 }
 FUNC_1(VAR_9, VAR_3, VAR_10, VAR_4->pos);



 VAR_4->pos--;
 return 0;
}
