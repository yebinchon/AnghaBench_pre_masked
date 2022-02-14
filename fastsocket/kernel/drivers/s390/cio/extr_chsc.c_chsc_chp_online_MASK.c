
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int cssid; int id; } ;
struct chp_link {struct chp_id chpid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct chp_id) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,struct chp_link*) ;
 int FUNC_4 (struct chp_link*,int ,int) ;
 int FUNC_5 (char*,char*,int,int) ;

void FUNC_6(struct chp_id VAR_1)
{
 char VAR_2[15];
 struct chp_link VAR_3;

 FUNC_5(VAR_2, "cadd%x.%02x", VAR_1.cssid, VAR_1.id);
 FUNC_0(2, VAR_2);

 if (FUNC_1(VAR_1) != 0) {
  FUNC_4(&VAR_3, 0, sizeof(struct chp_link));
  VAR_3.chpid = VAR_1;

  FUNC_2();
  FUNC_3(VAR_0, ((void*)0),
        &VAR_3);
 }
}
