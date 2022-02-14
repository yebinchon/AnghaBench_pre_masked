
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcap_chip {int io_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcap_chip*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcap_chip *VAR_2, u8 VAR_3, u32 *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2->io_mutex);
 *VAR_4 = VAR_1
  | (VAR_3 << VAR_0);

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 FUNC_2(&VAR_2->io_mutex);

 return VAR_5;
}
