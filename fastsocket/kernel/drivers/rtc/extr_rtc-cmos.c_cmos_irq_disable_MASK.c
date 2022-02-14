
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmos_rtc {int dummy; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cmos_rtc*,unsigned char) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4(struct cmos_rtc *VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_3 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_2);

 FUNC_2(VAR_1, VAR_3);
}
