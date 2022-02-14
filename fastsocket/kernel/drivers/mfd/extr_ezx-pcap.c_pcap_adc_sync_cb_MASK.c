
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct pcap_adc_sync_request {int completion; void** res; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u16 VAR_1[])
{
 struct pcap_adc_sync_request *VAR_2 = VAR_0;

 VAR_2->res[0] = VAR_1[0];
 VAR_2->res[1] = VAR_1[1];
 FUNC_0(&VAR_2->completion);
}
