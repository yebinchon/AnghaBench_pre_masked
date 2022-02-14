
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef void* uchar ;
struct TYPE_3__ {int remain_bytes; void* extra_bytes; void* sense_len; void* cntl; void* q_no; void* q_status; } ;
typedef int PortAddr ;
typedef int ASC_SCSIQ_3 ;
typedef int ASC_SCSIQ_2 ;
typedef TYPE_1__ ASC_QDONE_INFO ;
typedef int ASC_DCNT ;
typedef int ADV_DCNT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,void**,int) ;

__attribute__((used)) static uchar
FUNC_2(PortAddr VAR_6,
        ushort VAR_7,
        ASC_QDONE_INFO *VAR_8, ASC_DCNT VAR_9)
{
 ushort VAR_10;
 uchar VAR_11;

 FUNC_1(VAR_6,
      VAR_7 + VAR_3,
      (uchar *)VAR_8,
      (sizeof(ASC_SCSIQ_2) + sizeof(ASC_SCSIQ_3)) / 2);

 VAR_10 = FUNC_0(VAR_6,
          (ushort)(VAR_7 + (ushort)VAR_2));
 VAR_8->q_status = (uchar)VAR_10;
 VAR_8->q_no = (uchar)(VAR_10 >> 8);
 VAR_10 = FUNC_0(VAR_6,
          (ushort)(VAR_7 + (ushort)VAR_0));
 VAR_8->cntl = (uchar)VAR_10;
 VAR_11 = (uchar)(VAR_10 >> 8);
 VAR_10 = FUNC_0(VAR_6,
          (ushort)(VAR_7 +
     (ushort)VAR_1));
 VAR_8->sense_len = (uchar)VAR_10;
 VAR_8->extra_bytes = (uchar)(VAR_10 >> 8);




 VAR_8->remain_bytes = (((ADV_DCNT)FUNC_0(VAR_6,
         (ushort)(VAR_7 +
           (ushort)
           VAR_5)))
          << 16);



 VAR_8->remain_bytes += FUNC_0(VAR_6,
            (ushort)(VAR_7 + (ushort)
       VAR_4));

 VAR_8->remain_bytes &= VAR_9;
 return VAR_11;
}
