
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct cx231xx {int afe_ref_count; scalar_t__ video_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int) ;

int FUNC_2(struct cx231xx *VAR_5, u32 VAR_6)
{
 u8 VAR_7 = 0;
 u8 VAR_8 = 0;
 int VAR_9 = 0;

 VAR_5->video_input = VAR_6;

 if (VAR_6 == VAR_4) {
  VAR_9 = FUNC_0(VAR_5, VAR_1, &VAR_7);
  VAR_9 = FUNC_0(VAR_5, VAR_3,
     &VAR_8);
 } else {
  VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_7);
  VAR_9 = FUNC_0(VAR_5, VAR_2,
     &VAR_8);
 }

 VAR_7 = (VAR_8 & 0x3) | ((VAR_7 & 0x6) << 1);

 switch (VAR_7) {
 case 129:
  VAR_5->afe_ref_count = 0x23C;
  break;
 case 130:
  VAR_5->afe_ref_count = 0x24C;
  break;
 case 131:
  VAR_5->afe_ref_count = 0x258;
  break;
 case 128:
  VAR_5->afe_ref_count = 0x260;
  break;
 default:
  break;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_5->afe_ref_count);

 return VAR_9;
}
