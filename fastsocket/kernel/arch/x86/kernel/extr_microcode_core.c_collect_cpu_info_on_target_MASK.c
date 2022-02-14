
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_signature {int dummy; } ;
struct cpu_info_ctx {int err; struct cpu_signature* cpu_sig; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct cpu_info_ctx*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct cpu_signature *VAR_2)
{
 struct cpu_info_ctx VAR_3 = { .cpu_sig = VAR_2, .err = 0 };
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3, 1);
 if (!VAR_4)
  VAR_4 = VAR_3.err;

 return VAR_4;
}
