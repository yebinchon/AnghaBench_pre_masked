
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct bpf_d {int dummy; } ;


 int FUNC_0 (int ,struct bpf_d*,struct label*,struct mbuf*,struct label*) ;
 struct label* FUNC_1 (struct bpf_d*) ;
 struct label* FUNC_2 (struct mbuf*) ;
 int VAR_0 ;

void
FUNC_3(struct bpf_d *VAR_1, struct mbuf *VAR_2)
{
 struct label *VAR_3, *VAR_4;



 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2,
     VAR_3);
}
