
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_hook; } ;
struct bpf_d {int dummy; } ;


 int FUNC_0 (struct knote*,struct bpf_d*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1)
{
#pragma unused(hint)
 struct bpf_d *VAR_2 = (struct bpf_d *)VAR_0->kn_hook;

 return (FUNC_0(VAR_0, VAR_2));
}
