
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold_block_cross_cpu {int retval; struct threshold_block* tb; } ;
struct threshold_block {int cpu; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct threshold_block_cross_cpu*,int) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct threshold_block *VAR_1, char *VAR_2)
{
 struct threshold_block_cross_cpu VAR_3 = { .tb = VAR_1, };

 FUNC_0(VAR_1->cpu, VAR_0, &VAR_3, 1);
 return FUNC_1(VAR_2, "%lx\n", VAR_3.retval);
}
