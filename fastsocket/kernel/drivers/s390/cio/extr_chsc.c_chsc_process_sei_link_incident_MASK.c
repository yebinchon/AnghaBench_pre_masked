
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_area {int rs; int ccdf; int rsid; } ;
struct chp_id {int id; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct chp_id*) ;
 int FUNC_3 (struct chp_id) ;

__attribute__((used)) static void FUNC_4(struct chsc_sei_area *VAR_0)
{
 struct chp_id VAR_1;
 int VAR_2;

 FUNC_0(4, "chsc: link incident (rs=%02x, rs_id=%04x)\n",
        VAR_0->rs, VAR_0->rsid);
 if (VAR_0->rs != 4)
  return;
 VAR_2 = FUNC_1(VAR_0->ccdf);
 if (VAR_2 < 0)
  FUNC_0(4, "chsc: link incident - invalid LIR\n");
 else {
  FUNC_2(&VAR_1);
  VAR_1.id = VAR_2;
  FUNC_3(VAR_1);
 }
}
