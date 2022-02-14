
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket {int dummy; } ;
struct so_aidreq64 {int sar_aidp; int sar_cnt; } ;
struct so_aidreq32 {int sar_aidp; int sar_cnt; } ;
typedef struct so_aidreq64* caddr_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct so_aidreq64*,struct so_aidreq64*,int) ;
 int FUNC_2 (struct socket*,int *,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_3(struct socket *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 int VAR_3 = 0;
 union {
  struct so_aidreq32 a32;
  struct so_aidreq64 a64;
 } VAR_4;

 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_2, &VAR_4.a32, sizeof (VAR_4.a32));
  VAR_3 = FUNC_2(VAR_0, &VAR_4.a32.sar_cnt, VAR_4.a32.sar_aidp);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.a32, VAR_2, sizeof (VAR_4.a32));
  break;

 case 128:
  FUNC_1(VAR_2, &VAR_4.a64, sizeof (VAR_4.a64));
  VAR_3 = FUNC_2(VAR_0, &VAR_4.a64.sar_cnt, VAR_4.a64.sar_aidp);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.a64, VAR_2, sizeof (VAR_4.a64));
  break;

 default:
  FUNC_0(0);

 }

 return (VAR_3);
}
