
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_ibdev {int ipath_xmit_wait; int dd; int ipath_rpkts; int ipath_spkts; int ipath_rword; int ipath_sword; } ;
struct ipath_cregs {int cr_psxmitwaitcount; int cr_psrcvpktscount; int cr_psxmitpktscount; int cr_psrcvdatacount; int cr_psxmitdatacount; } ;
typedef int __be16 ;







 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ipath_ibdev *VAR_0,
         struct ipath_cregs const *VAR_1,
         __be16 VAR_2)
{
 u64 VAR_3;

 switch (VAR_2) {
 case 130:
  VAR_3 = (VAR_1->cr_psxmitdatacount) ?
   FUNC_0(VAR_0->dd, VAR_1->cr_psxmitdatacount) :
   VAR_0->ipath_sword;
  break;
 case 132:
  VAR_3 = (VAR_1->cr_psrcvdatacount) ?
   FUNC_0(VAR_0->dd, VAR_1->cr_psrcvdatacount) :
   VAR_0->ipath_rword;
  break;
 case 129:
  VAR_3 = (VAR_1->cr_psxmitpktscount) ?
   FUNC_0(VAR_0->dd, VAR_1->cr_psxmitpktscount) :
   VAR_0->ipath_spkts;
  break;
 case 131:
  VAR_3 = (VAR_1->cr_psrcvpktscount) ?
   FUNC_0(VAR_0->dd, VAR_1->cr_psrcvpktscount) :
   VAR_0->ipath_rpkts;
  break;
 case 128:
  VAR_3 = (VAR_1->cr_psxmitwaitcount) ?
   FUNC_0(VAR_0->dd, VAR_1->cr_psxmitwaitcount) :
   VAR_0->ipath_xmit_wait;
  break;
 default:
  VAR_3 = 0;
 }

 return VAR_3;
}
