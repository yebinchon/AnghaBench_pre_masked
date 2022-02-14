
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef scalar_t__ u32 ;
struct rndis_per_packet_info {scalar_t__ type; scalar_t__ ppi_offset; scalar_t__ size; } ;
struct rndis_packet {scalar_t__ per_pkt_info_offset; int per_pkt_info_len; } ;



__attribute__((used)) static inline void *FUNC_0(struct rndis_packet *VAR_0, u32 VAR_1)
{
 struct rndis_per_packet_info *VAR_2;
 int VAR_3;

 if (VAR_0->per_pkt_info_offset == 0)
  return ((void*)0);

 VAR_2 = (struct rndis_per_packet_info *)((ulong)VAR_0 +
  VAR_0->per_pkt_info_offset);
 VAR_3 = VAR_0->per_pkt_info_len;

 while (VAR_3 > 0) {
  if (VAR_2->type == VAR_1)
   return (void *)((ulong)VAR_2 + VAR_2->ppi_offset);
  VAR_3 -= VAR_2->size;
  VAR_2 = (struct rndis_per_packet_info *)((ulong)VAR_2 + VAR_2->size);
 }

 return ((void*)0);
}
