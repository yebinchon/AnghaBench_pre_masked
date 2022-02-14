
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CHIPSTATE {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct CHIPSTATE*) ;

__attribute__((used)) static int FUNC_2(struct CHIPSTATE *VAR_8)
{
 if (VAR_4 > 2)
  VAR_4 = 1;
 if (VAR_5 >= FUNC_0(VAR_7))
  VAR_5 = 0;
 if(VAR_0 > 1)
  VAR_0 = 0;

 if(VAR_4 == 1)
  VAR_2 = 0xc0;
 else
  VAR_2 = 0xc1;

 VAR_1 = VAR_5;
 VAR_6 = (VAR_5 < 5) ? 0 : 1;

 if(VAR_0 == 0)
  VAR_3 = 0x01;
 else
  VAR_3 = 0x05;

 FUNC_1(VAR_8);
 return 0;
}
