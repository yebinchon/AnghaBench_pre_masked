
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_area {int rs; int vf; int fla; int rsid; } ;
struct chp_id {int id; } ;
struct chp_link {int fla_mask; int fla; struct chp_id chpid; } ;


 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct chp_id) ;
 int FUNC_2 (struct chp_id*) ;
 int FUNC_3 (struct chp_id) ;
 int FUNC_4 (struct chp_link*,int ,int) ;
 int FUNC_5 (struct chp_link*) ;

__attribute__((used)) static void FUNC_6(struct chsc_sei_area *VAR_0)
{
 struct chp_link VAR_1;
 struct chp_id VAR_2;
 int VAR_3;

 FUNC_0(4, "chsc: resource accessibility event (rs=%02x, "
        "rs_id=%04x)\n", VAR_0->rs, VAR_0->rsid);
 if (VAR_0->rs != 4)
  return;
 FUNC_2(&VAR_2);
 VAR_2.id = VAR_0->rsid;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  FUNC_3(VAR_2);
 else if (!VAR_3)
  return;
 FUNC_4(&VAR_1, 0, sizeof(struct chp_link));
 VAR_1.chpid = VAR_2;
 if ((VAR_0->vf & 0xc0) != 0) {
  VAR_1.fla = VAR_0->fla;
  if ((VAR_0->vf & 0xc0) == 0xc0)

   VAR_1.fla_mask = 0xffff;
  else

   VAR_1.fla_mask = 0xff00;
 }
 FUNC_5(&VAR_1);
}
