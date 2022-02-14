
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_packet {scalar_t__ bpfp_header_length; int bpfp_type; int bpfp_mbuf; int bpfp_header; } ;



 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (int ,void*,size_t) ;
 size_t FUNC_2 (size_t,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bpf_packet * VAR_0, void * VAR_1, size_t VAR_2)
{

 if (VAR_0->bpfp_header_length != 0) {
  size_t VAR_3 = FUNC_2(VAR_2, VAR_0->bpfp_header_length);
  FUNC_0(VAR_0->bpfp_header, VAR_1, VAR_3);
  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 }
 if (VAR_2 == 0) {

  return;
 }

 switch (VAR_0->bpfp_type) {
 case 128:
  FUNC_1(VAR_0->bpfp_mbuf, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
