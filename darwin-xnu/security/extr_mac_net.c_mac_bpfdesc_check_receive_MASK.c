
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;
struct ifnet {int if_label; } ;
struct bpf_d {int dummy; } ;


 int FUNC_0 (int ,struct bpf_d*,struct label*,struct ifnet*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 struct label* FUNC_3 (struct bpf_d*) ;

int
FUNC_4(struct bpf_d *VAR_1, struct ifnet *VAR_2)
{
 struct label *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 FUNC_2(VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2,
     VAR_2->if_label);
 FUNC_1(VAR_2);

 return (VAR_4);
}
