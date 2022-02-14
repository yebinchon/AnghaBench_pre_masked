
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcap_rtc {int pcap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct pcap_rtc* FUNC_3 (struct platform_device*) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, int VAR_1, unsigned int VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_0);
 struct pcap_rtc *VAR_4 = FUNC_3(VAR_3);

 if (VAR_2)
  FUNC_1(FUNC_2(VAR_4->pcap, VAR_1));
 else
  FUNC_0(FUNC_2(VAR_4->pcap, VAR_1));

 return 0;
}
