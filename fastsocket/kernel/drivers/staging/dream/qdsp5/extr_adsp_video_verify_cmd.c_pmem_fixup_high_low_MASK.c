
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int dummy; } ;


 int FUNC_0 (char*,void*,unsigned long,...) ;
 scalar_t__ FUNC_1 (struct msm_adsp_module*,void**,unsigned long*,unsigned long) ;
 void* FUNC_2 (unsigned short,unsigned short) ;
 int FUNC_3 (void*,unsigned short*,unsigned short*) ;

__attribute__((used)) static int FUNC_4(unsigned short *VAR_0,
    unsigned short *VAR_1,
    unsigned short VAR_2,
    unsigned short VAR_3,
    struct msm_adsp_module *VAR_4,
    unsigned long *VAR_5, unsigned long *VAR_6)
{
 void *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_2(*VAR_0, *VAR_1);
 VAR_8 = (unsigned long)FUNC_2(VAR_2, VAR_3);
 FUNC_0("virt %x %x\n", VAR_7, VAR_8);
 if (FUNC_1(VAR_4, &VAR_7, &VAR_9, VAR_8)) {
  FUNC_0("ah%x al%x sh%x sl%x addr %x size %x\n",
   *VAR_0, *VAR_1, VAR_2, VAR_3, VAR_7, VAR_8);
  return -1;
 }
 FUNC_3(VAR_7, VAR_0, VAR_1);
 FUNC_0("phys %x %x\n", VAR_7, VAR_8);
 if (VAR_5)
  *VAR_5 = VAR_9;
 if (VAR_6)
  *VAR_6 = VAR_8;
 return 0;
}
