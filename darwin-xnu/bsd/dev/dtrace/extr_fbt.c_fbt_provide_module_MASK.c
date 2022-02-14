
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modctl {int mod_flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct modctl*) ;
 scalar_t__ FUNC_3 (struct modctl*) ;
 scalar_t__ FUNC_4 (struct modctl*) ;
 scalar_t__ FUNC_5 (struct modctl*) ;
 scalar_t__ FUNC_6 (struct modctl*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (struct modctl*) ;
 int FUNC_8 (struct modctl*) ;
 int FUNC_9 (struct modctl*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void
FUNC_10(void *VAR_10, struct modctl *VAR_11)
{
#pragma unused(arg)
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_0(VAR_7 != VAR_0);
 FUNC_1(&VAR_9, VAR_1);


 if (VAR_8)
  VAR_11->mod_flags |= VAR_6;

 if (FUNC_2(VAR_11))
  return;

 if (FUNC_7(VAR_11)) {
  VAR_11->mod_flags |= VAR_3;
  return;
 }

 if (FUNC_5(VAR_11)) {
  FUNC_8(VAR_11);
  VAR_11->mod_flags |= VAR_5;
  if (FUNC_3(VAR_11))
   VAR_11->mod_flags |= VAR_2;
  return;
 }

 if (FUNC_6(VAR_11)) {
  FUNC_9(VAR_11);
  VAR_11->mod_flags |= VAR_5;
  if (FUNC_4(VAR_11))
   VAR_11->mod_flags |= VAR_4;
  if (FUNC_3(VAR_11))
   VAR_11->mod_flags |= VAR_2;
  return;
 }
}
