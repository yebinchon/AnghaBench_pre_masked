
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int dummy; } ;
struct chp_link {struct chp_id chpid; } ;
struct channel_path {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct channel_path*) ;
 struct channel_path* FUNC_1 (struct chp_id) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,struct chp_link*) ;
 int FUNC_4 (struct chp_link*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct chp_id VAR_3, int VAR_4)
{
 struct channel_path *VAR_5 = FUNC_1(VAR_3);
 struct chp_link VAR_6;

 FUNC_4(&VAR_6, 0, sizeof(struct chp_link));
 VAR_6.chpid = VAR_3;

 FUNC_2();



 if (VAR_4) {

  FUNC_0(VAR_5);
  FUNC_3(VAR_2,
        VAR_0, &VAR_6);
 } else
  FUNC_3(VAR_1,
        ((void*)0), &VAR_6);

 return 0;
}
