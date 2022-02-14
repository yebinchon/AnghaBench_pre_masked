
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_data {int * pcap; int * compiled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct pcap_data *VAR_1 = VAR_0;

 if (VAR_1->compiled != ((void*)0))
  FUNC_1(VAR_1->compiled);

 if (VAR_1->pcap != ((void*)0))
  FUNC_0(VAR_1->pcap);
}
