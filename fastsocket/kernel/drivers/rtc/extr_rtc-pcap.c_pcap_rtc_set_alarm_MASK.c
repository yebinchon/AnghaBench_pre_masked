
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_time {int dummy; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct platform_device {int dummy; } ;
struct pcap_rtc {int pcap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 struct pcap_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct rtc_time*,unsigned long*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_3(VAR_3);
 struct pcap_rtc *VAR_6 = FUNC_1(VAR_5);
 struct rtc_time *VAR_7 = &VAR_4->time;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_2(VAR_7, &VAR_8);

 VAR_9 = VAR_8 % VAR_2;
 FUNC_0(VAR_6->pcap, VAR_1, VAR_9);

 VAR_10 = VAR_8 / VAR_2;
 FUNC_0(VAR_6->pcap, VAR_0, VAR_10);

 return 0;
}
