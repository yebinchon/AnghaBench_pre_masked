
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_lock; } ;


 int VAR_0 ;
 struct smi_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct smi_info *FUNC_2(void)
{
 struct smi_info *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (VAR_1)
  FUNC_1(&VAR_1->si_lock);
 return VAR_1;
}
