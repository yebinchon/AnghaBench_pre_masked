
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcap_chip {int io_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcap_chip*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcap_chip *VAR_4, u8 VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8;
 u32 VAR_9 = VAR_1 |
  (VAR_5 << VAR_0);

 FUNC_1(&VAR_4->io_mutex);
 VAR_8 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_8)
  goto out_unlock;

 VAR_9 &= (VAR_2 & ~VAR_6);
 VAR_9 |= (VAR_7 & VAR_6) | VAR_3 |
  (VAR_5 << VAR_0);

 VAR_8 = FUNC_0(VAR_4, &VAR_9);
out_unlock:
 FUNC_2(&VAR_4->io_mutex);

 return VAR_8;
}
