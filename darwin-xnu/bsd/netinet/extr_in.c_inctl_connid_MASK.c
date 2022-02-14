
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket {int dummy; } ;
struct so_cidreq64 {int scr_cidp; int scr_cnt; int scr_aid; } ;
struct so_cidreq32 {int scr_cidp; int scr_cnt; int scr_aid; } ;
typedef struct so_cidreq64* caddr_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct so_cidreq64*,struct so_cidreq64*,int) ;
 int FUNC_2 (struct socket*,int ,int *,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_3(struct socket *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 int VAR_3 = 0;
 union {
  struct so_cidreq32 c32;
  struct so_cidreq64 c64;
 } VAR_4;

 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_2, &VAR_4.c32, sizeof (VAR_4.c32));
  VAR_3 = FUNC_2(VAR_0, VAR_4.c32.scr_aid, &VAR_4.c32.scr_cnt,
      VAR_4.c32.scr_cidp);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.c32, VAR_2, sizeof (VAR_4.c32));
  break;

 case 128:
  FUNC_1(VAR_2, &VAR_4.c64, sizeof (VAR_4.c64));
  VAR_3 = FUNC_2(VAR_0, VAR_4.c64.scr_aid, &VAR_4.c64.scr_cnt,
      VAR_4.c64.scr_cidp);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.c64, VAR_2, sizeof (VAR_4.c64));
  break;

 default:
  FUNC_0(0);

 }

 return (VAR_3);
}
