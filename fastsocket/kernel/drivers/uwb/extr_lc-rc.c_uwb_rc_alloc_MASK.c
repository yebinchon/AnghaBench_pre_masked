
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;


 int VAR_0 ;
 struct uwb_rc* FUNC_0 (int,int ) ;
 int FUNC_1 (struct uwb_rc*) ;

struct uwb_rc *FUNC_2(void)
{
 struct uwb_rc *VAR_1;
 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_1);
 return VAR_1;
}
