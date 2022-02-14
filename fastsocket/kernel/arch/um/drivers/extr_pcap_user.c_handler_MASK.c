
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int caplen; } ;
struct pcap_handler_data {int len; int buffer; } ;


 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_1(u_char *VAR_0, const struct pcap_pkthdr *VAR_1,
      const u_char *VAR_2)
{
 int VAR_3;

 struct pcap_handler_data *VAR_4 = (struct pcap_handler_data *) VAR_0;

 VAR_3 = VAR_4->len < VAR_1->caplen ? VAR_4->len : VAR_1->caplen;
 FUNC_0(VAR_4->buffer, VAR_2, VAR_3);
 VAR_4->len = VAR_3;
}
