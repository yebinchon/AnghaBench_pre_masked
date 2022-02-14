
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_visible_origin; int vc_origin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vc_data*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_5)
{
 if (VAR_1 ||
     (VAR_0 && !VAR_2))
  return 0;
 VAR_5->vc_origin = VAR_5->vc_visible_origin = VAR_4;
 FUNC_0(VAR_5);
 VAR_3 = 0;
 return 1;
}
