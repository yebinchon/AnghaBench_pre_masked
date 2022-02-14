
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int dummy; } ;
struct knote {scalar_t__* kn_ext; scalar_t__ kn_hook; } ;
typedef scalar_t__ ipc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct turnstile* FUNC_0 (struct knote*) ;
 int FUNC_1 (scalar_t__) ;

struct turnstile *
FUNC_2(struct knote *VAR_3, ipc_port_t VAR_4, int *VAR_5)
{
 struct turnstile *VAR_6 = FUNC_0(VAR_3);

 if (!VAR_6) {
  if (VAR_5) *VAR_5 = VAR_0;
 } else if (VAR_3->kn_ext[3] == 0) {
  FUNC_1(VAR_4);
  VAR_3->kn_ext[3] = (uintptr_t)VAR_4;
  if (VAR_5) *VAR_5 = VAR_1;
 } else {
  VAR_6 = (struct turnstile *)VAR_3->kn_hook;
  if (VAR_5) *VAR_5 = VAR_2;
 }

 return VAR_6;
}
