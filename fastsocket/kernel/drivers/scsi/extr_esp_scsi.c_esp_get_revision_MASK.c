
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp {int config1; int scsi_id; int config2; int prev_cfg3; scalar_t__ cfact; int rev; int sync_defp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_12)
{
 u8 VAR_13;

 VAR_12->config1 = (VAR_6 | (VAR_12->scsi_id & 7));
 VAR_12->config2 = (VAR_9 | VAR_8);
 FUNC_2(VAR_12->config2, VAR_4);

 VAR_13 = FUNC_0(VAR_4);
 VAR_13 &= ~VAR_7;
 if (VAR_13 != (VAR_9 | VAR_8)) {



  VAR_12->rev = VAR_0;
 } else {
  VAR_12->config2 = 0;
  FUNC_1(VAR_12, 5);
  VAR_12->prev_cfg3 = 5;
  FUNC_2(VAR_12->config2, VAR_4);
  FUNC_2(0, VAR_5);
  FUNC_2(VAR_12->prev_cfg3, VAR_5);

  VAR_13 = FUNC_0(VAR_5);
  if (VAR_13 != 5) {



   VAR_12->rev = VAR_1;
  } else {
   FUNC_1(VAR_12, 0);
   VAR_12->prev_cfg3 = 0;
   FUNC_2(VAR_12->prev_cfg3, VAR_5);




   if (VAR_12->cfact == 0 || VAR_12->cfact > VAR_3) {
    VAR_12->rev = VAR_10;
    VAR_12->sync_defp = VAR_11;
   } else {
    VAR_12->rev = VAR_2;
   }
   VAR_12->config2 = 0;
   FUNC_2(VAR_12->config2, VAR_4);
  }
 }
}
