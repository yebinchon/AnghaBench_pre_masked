
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;
struct bpf_packet {size_t bpfp_header_length; scalar_t__ bpfp_total_length; void* bpfp_header; void* bpfp_mbuf; int bpfp_type; } ;
typedef void* mbuf_t ;
typedef TYPE_1__* ifnet_t ;
struct TYPE_4__ {int * if_bpf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct bpf_packet*,int) ;

__attribute__((used)) static inline void
FUNC_1(
 ifnet_t VAR_1,
 u_int32_t VAR_2,
 mbuf_t VAR_3,
 void* VAR_4,
 size_t VAR_5,
 int VAR_6)
{
 struct bpf_packet VAR_7;
 struct mbuf *VAR_8;

 if (VAR_1->if_bpf == ((void*)0)) {

  return;
 }
 VAR_7.bpfp_type = VAR_0;
 VAR_7.bpfp_mbuf = VAR_3;
 VAR_7.bpfp_total_length = 0;
 for (VAR_8 = VAR_3; VAR_8 != ((void*)0); VAR_8 = VAR_8->m_next)
  VAR_7.bpfp_total_length += VAR_8->m_len;
 VAR_7.bpfp_header = VAR_4;
 if (VAR_4 != ((void*)0)) {
  VAR_7.bpfp_total_length += VAR_5;
  VAR_7.bpfp_header_length = VAR_5;
 } else {
  VAR_7.bpfp_header_length = 0;
 }
 FUNC_0(VAR_1, VAR_2, &VAR_7, VAR_6);
}
