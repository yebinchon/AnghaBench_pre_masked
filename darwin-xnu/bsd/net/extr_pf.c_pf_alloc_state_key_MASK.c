
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key {int flowhash; int flowsrc; int * app_state; int proto_variant; int direction; int proto; int af_gwy; int af_lan; int ext_gwy; int ext_lan; int gwy; int lan; int states; } ;
struct pf_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct pf_state_key*,int) ;
 int FUNC_4 (struct pf_state_key*,struct pf_state*,int ) ;
 int VAR_1 ;
 struct pf_state_key* FUNC_5 (int *,int ) ;

struct pf_state_key *
FUNC_6(struct pf_state *VAR_2, struct pf_state_key *VAR_3)
{
 struct pf_state_key *VAR_4;

 if ((VAR_4 = FUNC_5(&VAR_1, VAR_0)) == ((void*)0))
  return (((void*)0));
 FUNC_3(VAR_4, sizeof (*VAR_4));
 FUNC_0(&VAR_4->states);
 FUNC_4(VAR_4, VAR_2, 0);


 if (VAR_3 != ((void*)0)) {
  FUNC_2(&VAR_3->lan, &VAR_4->lan, sizeof (VAR_4->lan));
  FUNC_2(&VAR_3->gwy, &VAR_4->gwy, sizeof (VAR_4->gwy));
  FUNC_2(&VAR_3->ext_lan, &VAR_4->ext_lan, sizeof (VAR_4->ext_lan));
  FUNC_2(&VAR_3->ext_gwy, &VAR_4->ext_gwy, sizeof (VAR_4->ext_gwy));
  VAR_4->af_lan = VAR_3->af_lan;
  VAR_4->af_gwy = VAR_3->af_gwy;
  VAR_4->proto = VAR_3->proto;
  VAR_4->direction = VAR_3->direction;
  VAR_4->proto_variant = VAR_3->proto_variant;
  FUNC_1(VAR_3->app_state == ((void*)0));
  VAR_4->flowsrc = VAR_3->flowsrc;
  VAR_4->flowhash = VAR_3->flowhash;

 }

 return (VAR_4);
}
