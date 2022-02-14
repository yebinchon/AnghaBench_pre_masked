
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct inpcb {int inp_vflag; int inp_flags2; scalar_t__ inp_flowhash; int inp_ip_p; int inp_fport; int inp_lport; int inp_dependfaddr; int inp_dependladdr; } ;
struct inp_flowhash_key {scalar_t__ infh_rand2; scalar_t__ infh_rand1; int infh_proto; int infh_af; int infh_fport; int infh_lport; int infh_faddr; int infh_laddr; } ;
typedef int fh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inpcb* FUNC_0 (int ,int *,struct inpcb*) ;
 int FUNC_1 (int ,int *,struct inpcb*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct inp_flowhash_key*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct inp_flowhash_key*,int,scalar_t__) ;

u_int32_t
FUNC_8(struct inpcb *VAR_7)
{
 struct inp_flowhash_key VAR_8 __attribute__((aligned(8)));
 u_int32_t VAR_9 = 0;
 struct inpcb *VAR_10 = ((void*)0);

 if (VAR_6 == 0)
  VAR_6 = FUNC_2();

 FUNC_4(&VAR_8, sizeof (VAR_8));

 FUNC_3(&VAR_7->inp_dependladdr, &VAR_8.infh_laddr, sizeof (VAR_8.infh_laddr));
 FUNC_3(&VAR_7->inp_dependfaddr, &VAR_8.infh_faddr, sizeof (VAR_8.infh_faddr));

 VAR_8.infh_lport = VAR_7->inp_lport;
 VAR_8.infh_fport = VAR_7->inp_fport;
 VAR_8.infh_af = (VAR_7->inp_vflag & VAR_3) ? VAR_1 : VAR_0;
 VAR_8.infh_proto = VAR_7->inp_ip_p;
 VAR_8.infh_rand1 = FUNC_2();
 VAR_8.infh_rand2 = FUNC_2();

try_again:
 VAR_9 = FUNC_7(&VAR_8, sizeof (VAR_8), VAR_6);
 if (VAR_9 == 0) {

  VAR_6 = FUNC_2();
  goto try_again;
 }

 VAR_7->inp_flowhash = VAR_9;


 FUNC_5(&VAR_4);
 VAR_10 = FUNC_0(VAR_5, &VAR_5, VAR_7);
 if (VAR_10 != ((void*)0)) {






  FUNC_6(&VAR_4);

  VAR_6 = FUNC_2();
  goto try_again;
 }

 FUNC_1(VAR_5, &VAR_5, VAR_7);
 VAR_7->inp_flags2 |= VAR_2;
 FUNC_6(&VAR_4);

 return (VAR_9);
}
