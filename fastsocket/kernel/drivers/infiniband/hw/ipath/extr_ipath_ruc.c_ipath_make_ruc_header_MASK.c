
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int ah_flags; int sl; int dlid; int src_path_bits; int grh; } ;
struct TYPE_6__ {int grh; } ;
struct TYPE_7__ {TYPE_1__ l; } ;
struct TYPE_8__ {void** lrh; TYPE_2__ u; } ;
struct ipath_qp {int s_cur_size; int s_hdrwords; int remote_qpn; int s_pkey_index; TYPE_4__ remote_ah_attr; TYPE_3__ s_hdr; } ;
struct ipath_other_headers {void** bth; } ;
struct ipath_ibdev {TYPE_5__* dd; } ;
struct TYPE_10__ {int ipath_lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (struct ipath_ibdev*,int *,int *,int,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct ipath_ibdev *VAR_4, struct ipath_qp *VAR_5,
      struct ipath_other_headers *VAR_6,
      u32 VAR_7, u32 VAR_8)
{
 u16 VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 VAR_11 = -VAR_5->s_cur_size & 3;
 VAR_10 = (VAR_5->s_cur_size + VAR_11) >> 2;
 VAR_9 = VAR_1;
 if (FUNC_4(VAR_5->remote_ah_attr.ah_flags & VAR_0)) {
  VAR_5->s_hdrwords += FUNC_3(VAR_4, &VAR_5->s_hdr.u.l.grh,
       &VAR_5->remote_ah_attr.grh,
       VAR_5->s_hdrwords, VAR_10);
  VAR_9 = VAR_2;
 }
 VAR_9 |= VAR_5->remote_ah_attr.sl << 4;
 VAR_5->s_hdr.lrh[0] = FUNC_0(VAR_9);
 VAR_5->s_hdr.lrh[1] = FUNC_0(VAR_5->remote_ah_attr.dlid);
 VAR_5->s_hdr.lrh[2] = FUNC_0(VAR_5->s_hdrwords + VAR_10 + VAR_3);
 VAR_5->s_hdr.lrh[3] = FUNC_0(VAR_4->dd->ipath_lid |
           VAR_5->remote_ah_attr.src_path_bits);
 VAR_7 |= FUNC_2(VAR_4->dd, VAR_5->s_pkey_index);
 VAR_7 |= VAR_11 << 20;
 VAR_6->bth[0] = FUNC_1(VAR_7 | (1 << 22));
 VAR_6->bth[1] = FUNC_1(VAR_5->remote_qpn);
 VAR_6->bth[2] = FUNC_1(VAR_8);
}
