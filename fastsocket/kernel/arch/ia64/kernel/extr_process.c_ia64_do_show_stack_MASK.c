
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_4 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_5 (struct unw_frame_info*,unsigned long*) ;
 scalar_t__ FUNC_6 (struct unw_frame_info*) ;

void
FUNC_7 (struct unw_frame_info *VAR_0, void *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;
 char VAR_5[128];

 FUNC_1("\nCall Trace:\n");
 do {
  FUNC_4(VAR_0, &VAR_2);
  if (VAR_2 == 0)
   break;

  FUNC_5(VAR_0, &VAR_3);
  FUNC_3(VAR_0, &VAR_4);
  FUNC_2(VAR_5, sizeof(VAR_5),
    " [<%016lx>] %%s\n"
    "                                sp=%016lx bsp=%016lx\n",
    VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_5, VAR_2);
 } while (FUNC_6(VAR_0) >= 0);
}
