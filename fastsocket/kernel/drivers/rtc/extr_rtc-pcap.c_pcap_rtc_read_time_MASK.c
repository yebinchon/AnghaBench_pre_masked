
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_time {int dummy; } ;
struct platform_device {int dummy; } ;
struct pcap_rtc {int pcap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,int ,unsigned long*) ;
 struct pcap_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;
 int FUNC_3 (struct rtc_time*) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct platform_device *VAR_7 = FUNC_4(VAR_5);
 struct pcap_rtc *VAR_8 = FUNC_1(VAR_7);
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_0(VAR_8->pcap, VAR_1, &VAR_10);
 VAR_9 = VAR_10 & VAR_3;

 FUNC_0(VAR_8->pcap, VAR_0, &VAR_11);
 VAR_9 += (VAR_11 & VAR_2) * VAR_4;

 FUNC_2(VAR_9, VAR_6);

 return FUNC_3(VAR_6);
}
