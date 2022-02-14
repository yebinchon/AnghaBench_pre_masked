
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket {int dummy; } ;
struct so_cinforeq64 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; } ;
struct so_cinforeq32 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; } ;
typedef struct so_cinforeq64* caddr_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct so_cinforeq64*,struct so_cinforeq64*,int) ;
 int FUNC_2 (struct socket*,int ,int *,int *,int *,int ,int *,int ,int *,int *,int ,int *) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_3(struct socket *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 int VAR_3 = 0;
 union {
  struct so_cinforeq32 ci32;
  struct so_cinforeq64 ci64;
 } VAR_4;

 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 129: {
  FUNC_1(VAR_2, &VAR_4.ci32, sizeof (VAR_4.ci32));
  VAR_3 = FUNC_2(VAR_0, VAR_4.ci32.scir_cid, &VAR_4.ci32.scir_flags,
      &VAR_4.ci32.scir_ifindex, &VAR_4.ci32.scir_error, VAR_4.ci32.scir_src,
      &VAR_4.ci32.scir_src_len, VAR_4.ci32.scir_dst, &VAR_4.ci32.scir_dst_len,
      &VAR_4.ci32.scir_aux_type, VAR_4.ci32.scir_aux_data,
      &VAR_4.ci32.scir_aux_len);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.ci32, VAR_2, sizeof (VAR_4.ci32));
  break;
 }

 case 128: {
  FUNC_1(VAR_2, &VAR_4.ci64, sizeof (VAR_4.ci64));
  VAR_3 = FUNC_2(VAR_0, VAR_4.ci64.scir_cid, &VAR_4.ci64.scir_flags,
      &VAR_4.ci64.scir_ifindex, &VAR_4.ci64.scir_error, VAR_4.ci64.scir_src,
      &VAR_4.ci64.scir_src_len, VAR_4.ci64.scir_dst, &VAR_4.ci64.scir_dst_len,
      &VAR_4.ci64.scir_aux_type, VAR_4.ci64.scir_aux_data,
      &VAR_4.ci64.scir_aux_len);
  if (VAR_3 == 0)
   FUNC_1(&VAR_4.ci64, VAR_2, sizeof (VAR_4.ci64));
  break;
 }

 default:
  FUNC_0(0);

 }

 return (VAR_3);
}
