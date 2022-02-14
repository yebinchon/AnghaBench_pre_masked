
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct udphdr {int dummy; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
typedef int sa_family_t ;
struct TYPE_12__ {int* pb_csum_flags; int* pb_csum_data; unsigned int pb_packet_len; unsigned int pb_contig_len; } ;
typedef TYPE_1__ pbuf_t ;
struct TYPE_16__ {int icps_checksum; } ;
struct TYPE_15__ {int m_len; int m_data; } ;
struct TYPE_14__ {int tcps_rcvbadsum; } ;
struct TYPE_13__ {int udps_badsum; } ;
struct TYPE_11__ {int icp6s_checksum; } ;




 int VAR_0 ;
 int VAR_1 ;




 TYPE_10__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int) ;
 TYPE_7__* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int,int) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int
FUNC_3(pbuf_t *VAR_7, int VAR_8, int VAR_9, u_int8_t VAR_10,
    sa_family_t VAR_11)
{
 u_int16_t VAR_12;

 switch (VAR_10) {
 case 129:
 case 128:






  if ((*VAR_7->pb_csum_flags &
      (VAR_0 | VAR_1)) ==
      (VAR_0 | VAR_1) &&
      (*VAR_7->pb_csum_data ^ 0xffff) == 0) {
   return (0);
  }
  break;
 case 131:



  break;
 default:
  return (1);
 }
 if (VAR_8 < (int)sizeof (struct ip) || VAR_9 < (int)sizeof (struct udphdr))
  return (1);
 if (VAR_7->pb_packet_len < (unsigned)(VAR_8 + VAR_9))
  return (1);
 switch (VAR_11) {
 default:
  return (1);
 }
 if (VAR_12) {
  switch (VAR_10) {
  case 129:
   VAR_5.tcps_rcvbadsum++;
   break;
  case 128:
   VAR_6.udps_badsum++;
   break;
  case 131:
   VAR_3.icps_checksum++;
   break;





  }
  return (1);
 }
 return (0);
}
