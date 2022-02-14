
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct garmin_data {scalar_t__ mode; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct garmin_data*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 struct garmin_data *VAR_3 = (struct garmin_data *) VAR_2;


 if (VAR_3->mode == VAR_1)
  if (VAR_3->flags & VAR_0)
   FUNC_0(VAR_3);
}
