
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int dummy; } ;
struct i3200_error_info {int errsts; int errsts2; int* eccerrlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mem_ctl_info*,int ,int ,int ,int ,int ,char*) ;
 int FUNC_3 (struct mem_ctl_info*,char*) ;
 int FUNC_4 (struct mem_ctl_info*,int ,int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_4,
  struct i3200_error_info *VAR_5)
{
 int VAR_6;
 u64 VAR_7;

 if (!(VAR_5->errsts & VAR_2))
  return;

 if ((VAR_5->errsts ^ VAR_5->errsts2) & VAR_2) {
  FUNC_3(VAR_4, "UE overwrote CE");
  VAR_5->errsts = VAR_5->errsts2;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = VAR_5->eccerrlog[VAR_6];
  if (VAR_7 & VAR_1) {
   FUNC_4(VAR_4, 0, 0,
    FUNC_0(VAR_6, VAR_7),
    "i3200 UE");
  } else if (VAR_7 & VAR_0) {
   FUNC_2(VAR_4, 0, 0,
    FUNC_1(VAR_7),
    FUNC_0(VAR_6, VAR_7), 0,
    "i3200 CE");
  }
 }
}
