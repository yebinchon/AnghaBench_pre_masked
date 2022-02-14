
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct proc_bsdinfo {scalar_t__* pbi_comm; scalar_t__* pbi_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__**,void*,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,struct proc_bsdinfo*,int) ;
 scalar_t__ FUNC_2 (void*) ;

int
FUNC_3(int VAR_3, void * VAR_4, uint32_t VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct proc_bsdinfo VAR_8;


 if (VAR_5 < sizeof(VAR_8.pbi_name)) {
  VAR_2 = VAR_0;
  return(0);
 }

 VAR_6 = FUNC_1(VAR_3, VAR_1, (uint64_t)0, &VAR_8, sizeof(struct proc_bsdinfo));
 if (VAR_6 != 0) {
  if (VAR_8.pbi_name[0]) {
   FUNC_0(&VAR_8.pbi_name, VAR_4, sizeof(VAR_8.pbi_name));
  } else {
   FUNC_0(&VAR_8.pbi_comm, VAR_4, sizeof(VAR_8.pbi_comm));
  }
  VAR_7 = (int)FUNC_2(VAR_4);
  return(VAR_7);
 }
 return(0);
}
