
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2fb_par {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct pvr2fb_par* VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct pvr2fb_par *VAR_5 = VAR_2;
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_3 > 0)
  FUNC_1(VAR_6 | VAR_0, VAR_1);
 else
  FUNC_1(VAR_6 & ~VAR_0, VAR_1);

 VAR_4 = VAR_3 > 0 ? VAR_3 : 0;
}
