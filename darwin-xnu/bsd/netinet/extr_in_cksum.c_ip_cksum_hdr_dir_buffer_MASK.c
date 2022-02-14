
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ip {int dummy; } ;
struct TYPE_2__ {int ips_snd_swcsum_bytes; int ips_rcv_swcsum_bytes; int ips_rcv_swcsum; int ips_snd_swcsum; } ;


 scalar_t__ FUNC_0 (struct ip const*) ;
 int FUNC_1 (struct ip const*) ;
 int FUNC_2 (void const*,int ,int ,int) ;
 TYPE_1__ VAR_0 ;

uint16_t
FUNC_3(const void *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
    int VAR_4)
{
 const struct ip *VAR_5 = VAR_1;

 if (VAR_4) {
  VAR_0.ips_snd_swcsum++;
  VAR_0.ips_snd_swcsum_bytes += VAR_2;
 } else {
  VAR_0.ips_rcv_swcsum++;
  VAR_0.ips_rcv_swcsum_bytes += VAR_2;
 }

 if (VAR_2 == sizeof (*VAR_5) &&
     VAR_3 >= sizeof (*VAR_5) && FUNC_0(VAR_5))
  return (FUNC_1(VAR_5));

 return (FUNC_2(VAR_1, 0, 0, VAR_2));
}
