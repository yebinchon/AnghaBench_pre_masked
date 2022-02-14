
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct rtc_time {int tm_year; char tm_sec; char tm_min; char tm_hour; char tm_mday; char tm_mon; } ;
typedef int ce_time ;


 char FUNC_0 (char) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static int FUNC_3(struct rtc_time *VAR_0)
{
 char VAR_1[12];
 u8 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned VAR_9;

 VAR_9 = 1900 + VAR_0->tm_year;
 VAR_7 = VAR_9 / 100;
 VAR_8 = VAR_9 % 100;

 VAR_6 = VAR_0->tm_sec;
 VAR_5 = VAR_0->tm_min;
 VAR_4 = VAR_0->tm_hour;
 VAR_2 = VAR_0->tm_mday;
 VAR_3 = VAR_0->tm_mon + 1;

 VAR_6 = FUNC_0(VAR_6);
 VAR_5 = FUNC_0(VAR_5);
 VAR_4 = FUNC_0(VAR_4);
 VAR_3 = FUNC_0(VAR_3);
 VAR_2 = FUNC_0(VAR_2);
 VAR_7 = FUNC_0(VAR_7);
 VAR_8 = FUNC_0(VAR_8);

 FUNC_1(VAR_1, 0, sizeof(VAR_1));
 VAR_1[3] = 0x41;
 VAR_1[4] = VAR_7;
 VAR_1[5] = VAR_8;
 VAR_1[6] = VAR_6;
 VAR_1[7] = VAR_5;
 VAR_1[8] = VAR_4;
 VAR_1[10] = VAR_2;
 VAR_1[11] = VAR_3;

 return FUNC_2(VAR_1, ((void*)0));
}
