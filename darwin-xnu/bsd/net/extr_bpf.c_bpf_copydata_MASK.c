
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_packet {scalar_t__ bpfp_type; int bpfp_mbuf; } ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,size_t,void*) ;

__attribute__((used)) static errno_t
FUNC_1(struct bpf_packet *VAR_2, size_t VAR_3, size_t VAR_4, void* VAR_5)
{
 errno_t VAR_6 = 0;
 if (VAR_2->bpfp_type == VAR_0) {
  VAR_6 = FUNC_0(VAR_2->bpfp_mbuf, VAR_3, VAR_4, VAR_5);
 } else {
  VAR_6 = VAR_1;
 }

 return (VAR_6);
}
