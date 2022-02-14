
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct igu_regular {int sb_id_and_flags; } ;
struct cnic_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_6, u8 VAR_7, u8 VAR_8,
       u16 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct igu_regular VAR_12;
 u32 VAR_13 = VAR_0 + (VAR_1 + VAR_7) * 8;

 VAR_12.sb_id_and_flags =
  (VAR_9 << VAR_4) |
  (VAR_8 << VAR_5) |
  (VAR_11 << VAR_2) |
  (VAR_10 << VAR_3);


 FUNC_0(VAR_6, VAR_13, VAR_12.sb_id_and_flags);
}
