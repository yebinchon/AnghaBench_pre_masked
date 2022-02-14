
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmos_rtc {int rtc; } ;


 unsigned char FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int ,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct cmos_rtc *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;




 VAR_5 = FUNC_0(VAR_0);

 if (FUNC_1())
  return;

 VAR_5 &= (VAR_4 & VAR_2) | VAR_1;
 if (FUNC_2(VAR_5))
  FUNC_3(VAR_3->rtc, 1, VAR_5);
}
