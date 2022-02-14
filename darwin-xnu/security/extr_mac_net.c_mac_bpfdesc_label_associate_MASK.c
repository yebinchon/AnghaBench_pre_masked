
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct bpf_d {int dummy; } ;


 int FUNC_0 (int ,struct ucred*,struct bpf_d*,struct label*) ;
 int VAR_0 ;
 struct label* FUNC_1 (struct bpf_d*) ;

void
FUNC_2(struct ucred *VAR_1, struct bpf_d *VAR_2)
{
 struct label *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
