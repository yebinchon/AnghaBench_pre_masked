
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct op_entry {int event; } ;


 int FUNC_0 (struct op_entry*,int ) ;
 int FUNC_1 (struct op_entry*) ;

int FUNC_2(struct op_entry *VAR_0, u64 VAR_1)
{
 if (!VAR_0->event)
  return 0;
 if (FUNC_1(VAR_0) < 2)




  return 0;
 if (!FUNC_0(VAR_0, (u32)VAR_1))
  return 0;
 return FUNC_0(VAR_0, (u32)(VAR_1 >> 32));
}
