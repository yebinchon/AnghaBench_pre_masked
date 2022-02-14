
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pppol2tp_tunnel {struct hlist_head* session_hlist; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static inline struct hlist_head *
FUNC_1(struct pppol2tp_tunnel *VAR_1, u16 VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_2;
 return &VAR_1->session_hlist[FUNC_0(VAR_3, VAR_0)];
}
