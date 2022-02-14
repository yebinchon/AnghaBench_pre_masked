
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rceb {int dummy; } ;
struct uwb_rc_neh {int arg; int rc; int (* cb ) (int ,int ,struct uwb_rceb*,size_t) ;} ;


 int FUNC_0 (int ,int ,struct uwb_rceb*,size_t) ;
 int FUNC_1 (struct uwb_rc_neh*) ;

__attribute__((used)) static void FUNC_2(struct uwb_rc_neh *VAR_0, struct uwb_rceb *VAR_1, size_t VAR_2)
{
 (*VAR_0->cb)(VAR_0->rc, VAR_0->arg, VAR_1, VAR_2);
 FUNC_1(VAR_0);
}
