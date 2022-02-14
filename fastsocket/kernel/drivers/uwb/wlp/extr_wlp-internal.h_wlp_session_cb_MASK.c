
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlp {TYPE_1__* session; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {struct completion* cb_priv; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static inline
void FUNC_1(struct wlp *VAR_0)
{
 struct completion *VAR_1 = VAR_0->session->cb_priv;
 FUNC_0(VAR_1);
}
