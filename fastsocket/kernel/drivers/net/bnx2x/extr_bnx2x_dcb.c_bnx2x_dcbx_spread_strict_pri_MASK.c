
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cos_help_data {struct cos_entry_help_data* data; } ;
struct cos_entry_help_data {int strict; int pri_join_mask; void* pausable; void* cos_bw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 void* VAR_1 ;
 void* FUNC_2 (struct bnx2x*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_4,
     struct cos_help_data *VAR_5,
     u8 VAR_6,
     u8 VAR_7,
     u8 VAR_8)
{
 u8 VAR_9 = VAR_0;
 u8 VAR_10 = VAR_3;
 u8 VAR_11 = 0;

 while (VAR_7 && VAR_10 > 0) {
  VAR_11 = 1 << (VAR_10 - 1);
  if (VAR_11 & VAR_8) {
   struct cos_entry_help_data *VAR_12 = &VAR_5->
        data[VAR_6];
   VAR_7--;
   if (VAR_7 == 0) {

    VAR_12->cos_bw = VAR_1;
    VAR_12->strict = VAR_9;
    VAR_12->pri_join_mask = VAR_8;
    VAR_12->pausable = FUNC_2(VAR_4,
       VAR_12->pri_join_mask);
   } else {
    VAR_8 &= ~VAR_11;

    VAR_12->cos_bw = VAR_1;
    VAR_12->strict = VAR_9;
    VAR_12->pri_join_mask = VAR_11;
    VAR_12->pausable = FUNC_2(VAR_4,
       VAR_12->pri_join_mask);
   }

   VAR_9 =
       FUNC_0(VAR_9);
   VAR_6++;
  }

  VAR_10--;
 }

 if (VAR_7) {
  FUNC_1("Didn't succeed to spread strict priorities\n");
  return -VAR_2;
 }

 return 0;
}
