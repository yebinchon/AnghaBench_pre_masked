
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct recv_msg_elem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct recv_msg_elem* FUNC_0 (int,int ,int) ;

struct recv_msg_elem *
FUNC_1(u_int VAR_3)
{
 struct recv_msg_elem *VAR_4;

 VAR_4 = FUNC_0(VAR_3 * sizeof(struct recv_msg_elem),
     VAR_0, VAR_1 | VAR_2);

 return (VAR_4);
}
