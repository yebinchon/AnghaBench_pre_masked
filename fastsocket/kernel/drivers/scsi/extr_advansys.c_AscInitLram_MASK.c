
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uchar ;
struct TYPE_3__ {int max_total_qng; int iop_base; } ;
typedef int PortAddr ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static ushort FUNC_2(ASC_DVC_VAR *VAR_7)
{
 uchar VAR_8;
 ushort VAR_9;
 PortAddr VAR_10;
 ushort VAR_11;

 VAR_10 = VAR_7->iop_base;
 VAR_11 = 0;
 FUNC_0(VAR_10, VAR_1, 0,
     (ushort)(((int)(VAR_7->max_total_qng + 2 + 1) *
        64) >> 1));
 VAR_8 = VAR_0;
 VAR_9 = VAR_1 + VAR_2;
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_5),
    (uchar)(VAR_8 + 1));
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_4),
    (uchar)(VAR_7->max_total_qng));
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_6),
    (uchar)VAR_8);
 VAR_8++;
 VAR_9 += VAR_2;
 for (; VAR_8 < VAR_7->max_total_qng; VAR_8++, VAR_9 += VAR_2) {
  FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_5),
     (uchar)(VAR_8 + 1));
  FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_4),
     (uchar)(VAR_8 - 1));
  FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_6),
     (uchar)VAR_8);
 }
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_5),
    (uchar)VAR_3);
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_4),
    (uchar)(VAR_7->max_total_qng - 1));
 FUNC_1(VAR_10, (ushort)(VAR_9 + VAR_6),
    (uchar)VAR_7->max_total_qng);
 VAR_8++;
 VAR_9 += VAR_2;
 for (; VAR_8 <= (uchar)(VAR_7->max_total_qng + 3);
      VAR_8++, VAR_9 += VAR_2) {
  FUNC_1(VAR_10,
     (ushort)(VAR_9 + (ushort)VAR_5), VAR_8);
  FUNC_1(VAR_10,
     (ushort)(VAR_9 + (ushort)VAR_4), VAR_8);
  FUNC_1(VAR_10,
     (ushort)(VAR_9 + (ushort)VAR_6), VAR_8);
 }
 return VAR_11;
}
