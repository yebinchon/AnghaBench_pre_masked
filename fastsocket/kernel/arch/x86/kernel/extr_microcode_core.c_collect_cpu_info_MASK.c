
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucode_cpu_info {int valid; int cpu_sig; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct ucode_cpu_info*,int ,int) ;
 struct ucode_cpu_info* VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
 struct ucode_cpu_info *VAR_2 = VAR_0 + VAR_1;
 int VAR_3;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 VAR_3 = FUNC_0(VAR_1, &VAR_2->cpu_sig);
 if (!VAR_3)
  VAR_2->valid = 1;

 return VAR_3;
}
