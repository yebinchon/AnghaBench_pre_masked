
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int vip_path; } ;
struct proc_regionwithpathinfo {TYPE_1__ prp_vip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,scalar_t__,struct proc_regionwithpathinfo*,int) ;
 scalar_t__ FUNC_1 (void*,int ,scalar_t__) ;

int
FUNC_2(int VAR_4, uint64_t VAR_5, void * VAR_6, uint32_t VAR_7)
{
 int VAR_8;
 struct proc_regionwithpathinfo VAR_9;

 if (VAR_7 < VAR_1) {
  VAR_3 = VAR_0;
  return(0);
 }

 VAR_8 = FUNC_0(VAR_4, VAR_2, (uint64_t)VAR_5, &VAR_9, sizeof(struct proc_regionwithpathinfo));
 if (VAR_8 != -1) {
  return ((int)(FUNC_1(VAR_6, VAR_9.prp_vip.vip_path, VAR_1)));
 }
 return(0);
}
