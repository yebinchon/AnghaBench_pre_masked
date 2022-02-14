
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcap_chip {int adc_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcap_chip*,int ,int*) ;
 int FUNC_1 (struct pcap_chip*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pcap_chip *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_2(&VAR_3->adc_mutex);
 FUNC_0(VAR_3, VAR_2, &VAR_5);
 VAR_5 &= ~(VAR_0 | VAR_1);
 VAR_5 |= VAR_4 & (VAR_0 | VAR_1);
 FUNC_1(VAR_3, VAR_2, VAR_5);
 FUNC_3(&VAR_3->adc_mutex);
}
