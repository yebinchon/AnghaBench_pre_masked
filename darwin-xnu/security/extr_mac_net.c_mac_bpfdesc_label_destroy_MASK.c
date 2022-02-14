
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;
struct bpf_d {int dummy; } ;


 int FUNC_0 (struct label*) ;
 struct label* FUNC_1 (struct bpf_d*) ;
 int FUNC_2 (struct bpf_d*,int *) ;

void
FUNC_3(struct bpf_d *VAR_0)
{
 struct label *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, ((void*)0));
}
