
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct recv_msg_elem {int * controlp; struct recv_msg_elem* psa; int * uio; } ;


 int VAR_0 ;
 int FUNC_0 (struct recv_msg_elem*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct recv_msg_elem *VAR_1, u_int VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct recv_msg_elem *VAR_4 = VAR_1 + VAR_3;

  if (VAR_4->uio != ((void*)0))
   FUNC_2(VAR_4->uio);
  if (VAR_4->psa != ((void*)0))
   FUNC_0(VAR_4->psa, VAR_0);
  if (VAR_4->controlp != ((void*)0))
   FUNC_1(VAR_4->controlp);
 }
 FUNC_0(VAR_1, VAR_0);
}
