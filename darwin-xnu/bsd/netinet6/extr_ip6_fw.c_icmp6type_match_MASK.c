
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_fw {int fw_flg; unsigned int* fw_icmp6types; } ;
struct icmp6_hdr {int icmp6_type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct icmp6_hdr *VAR_2, struct ip6_fw *VAR_3)
{
 int VAR_4;

 if (!(VAR_3->fw_flg & VAR_0))
  return(1);

 VAR_4 = VAR_2->icmp6_type;


 if (VAR_4 < VAR_1 * sizeof(unsigned) * 8 &&
  (VAR_3->fw_icmp6types[VAR_4 / (sizeof(unsigned) * 8)] &
  (1U << (VAR_4 % (8 * sizeof(unsigned))))))
  return(1);

 return(0);
}
