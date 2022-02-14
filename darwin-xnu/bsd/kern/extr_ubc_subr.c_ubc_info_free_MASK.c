
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubc_info {scalar_t__ ui_control; int ui_ucred; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ubc_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ubc_info*) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct ubc_info*) ;

__attribute__((used)) static void
FUNC_6(struct ubc_info *VAR_2)
{
 if (FUNC_0(VAR_2->ui_ucred)) {
  FUNC_2(&VAR_2->ui_ucred);
 }

 if (VAR_2->ui_control != VAR_0)
  FUNC_3(VAR_2->ui_control);

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);

 FUNC_5(VAR_1, VAR_2);
 return;
}
