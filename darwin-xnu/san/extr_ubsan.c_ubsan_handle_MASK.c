
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsan_violation {int loc; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (struct ubsan_violation*,char*,size_t const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubsan_violation*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct ubsan_violation *VAR_1, bool VAR_2)
{
 const size_t VAR_3 = 256;
 static char VAR_4[VAR_3];
 size_t VAR_5 = 0;
 VAR_4[0] = '\0';

 if (!FUNC_3(VAR_1->loc)) {

  return;
 }

 FUNC_4(VAR_1);

 if (VAR_0 || VAR_2) {
  VAR_5 += FUNC_2(VAR_1, VAR_4+VAR_5, VAR_3-VAR_5);
 }

 if (VAR_0) {
  FUNC_1("UBSan: %s", VAR_4);
 }

 if (VAR_2) {
  FUNC_0("UBSan: %s", VAR_4);
 }
}
