
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {size_t len; int * oid; } ;


 int FUNC_0 (char*,int,char*,char*,int ) ;

void FUNC_1(struct asn1_oid *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_1;
 size_t VAR_4;
 int VAR_5;

 if (VAR_2 == 0)
  return;

 VAR_1[0] = '\0';

 for (VAR_4 = 0; VAR_4 < VAR_0->len; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, VAR_1 + VAR_2 - VAR_3,
      "%s%lu",
      VAR_4 == 0 ? "" : ".", VAR_0->oid[VAR_4]);
  if (VAR_5 < 0 || VAR_5 >= VAR_1 + VAR_2 - VAR_3)
   break;
  VAR_3 += VAR_5;
 }
 VAR_1[VAR_2 - 1] = '\0';
}
