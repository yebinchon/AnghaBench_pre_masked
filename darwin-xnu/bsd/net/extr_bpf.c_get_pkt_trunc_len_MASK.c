
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct pktap_header {int pth_frame_pre_length; int pth_length; scalar_t__ pth_protocol_family; scalar_t__ pth_iftype; } ;
struct ether_header {int dummy; } ;
struct bpf_packet {int bpfp_header_length; scalar_t__ bpfp_header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bpf_packet*,int ,int) ;
 int FUNC_2 (struct bpf_packet*,int,int) ;
 int FUNC_3 (struct bpf_packet*,int,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static uint32_t
FUNC_5(u_char *VAR_4, u_int VAR_5)
{
 struct bpf_packet *VAR_6 = (struct bpf_packet *)(void *) VAR_4;
 struct pktap_header *VAR_7 = (struct pktap_header *) (VAR_6->bpfp_header);
 uint32_t VAR_8 = 0, VAR_9 = 0;
 uint32_t VAR_10 = VAR_7->pth_frame_pre_length -
     (VAR_6->bpfp_header_length - VAR_7->pth_length);


 uint32_t VAR_11 = VAR_5 - VAR_6->bpfp_header_length - VAR_10;
 if (VAR_7->pth_protocol_family == VAR_0 ||
     VAR_7->pth_protocol_family == VAR_1) {

  if (VAR_10 > 0) {
   if (VAR_10 < sizeof(struct ether_header))
    goto too_short;

   VAR_8 = FUNC_1(VAR_6, 0, VAR_11);
  } else if (VAR_10 == 0) {
   if (VAR_7->pth_protocol_family == VAR_0) {
    VAR_8 = FUNC_3(VAR_6, VAR_10, VAR_11);
   } else if (VAR_7->pth_protocol_family == VAR_1) {
    VAR_8 = FUNC_2(VAR_6, VAR_10, VAR_11);
   }
  } else {

   VAR_8 = FUNC_4(VAR_2, VAR_11);
  }
 } else {
  if (VAR_7->pth_iftype == VAR_3) {
   if (VAR_11 < sizeof(struct ether_header)) {
    goto too_short;
   }

   VAR_8 = FUNC_0(sizeof(struct ether_header) + 16,
       VAR_11);
  } else {



   VAR_8 = FUNC_0(16, VAR_11);
  }
 }
done:
 VAR_9 = VAR_6->bpfp_header_length + VAR_8 + VAR_10;
 return (VAR_9);
too_short:
 VAR_8 = VAR_11;
 goto done;
}
