
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mbuf_t ;


 unsigned char* FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,unsigned char,char*) ;

void
FUNC_5(mbuf_t VAR_0, size_t VAR_1, size_t VAR_2)
{
 mbuf_t VAR_3;
 size_t VAR_4, VAR_5;
 size_t VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9;

 VAR_6 = FUNC_3(VAR_0);

 if (VAR_1 > VAR_6)
  return;

 VAR_8 = (VAR_6 - VAR_1 > VAR_2) ? VAR_2 : VAR_6 - VAR_1;
 VAR_3 = VAR_0;
 VAR_7 = FUNC_1(VAR_3);
 VAR_9 = FUNC_0(VAR_3);
 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_8; VAR_4++, VAR_5++) {
  if (VAR_5 >= VAR_7) {
   VAR_3 = FUNC_2(VAR_3);
   if (VAR_3 == 0)
    break;
   VAR_9 = FUNC_0(VAR_3);
   VAR_7 = FUNC_1(VAR_3);
   VAR_5 = 0;
  }
  if (VAR_4 >= VAR_1) {
   FUNC_4("%02x%s", VAR_9[VAR_5], VAR_4 % 2 ? " " : "");
  }
 }
}
