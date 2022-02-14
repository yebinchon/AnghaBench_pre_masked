
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; int usec; int sec; } ;
struct rtc_time {int tm_hour; int tm_min; int tm_sec; unsigned char tm_mday; int tm_mon; int tm_year; } ;
struct inode {int dummy; } ;
struct hp_sdc_rtc_time {int tm_hour; int tm_min; int tm_sec; unsigned char tm_mday; int tm_mon; int tm_year; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtc_time*,struct rtc_time*,int) ;
 scalar_t__ FUNC_2 (void*,struct rtc_time*,int) ;
 int * VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (struct timeval*) ;
 int FUNC_7 (unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_8, struct file *VAR_9,
       unsigned int VAR_10, unsigned long VAR_11)
{

 return -VAR_3;
}
