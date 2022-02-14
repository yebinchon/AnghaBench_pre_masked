
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_command {int flags; int* resp; int opcode; int error; } ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cb710_slot*,int ) ;

__attribute__((used)) static void FUNC_1(struct cb710_slot *VAR_7,
 struct mmc_command *VAR_8)
{
 unsigned VAR_9, VAR_10;


 if (VAR_8->flags & VAR_5) {
  u32 VAR_11[4];

  VAR_11[0] = FUNC_0(VAR_7, VAR_3);
  VAR_11[1] = FUNC_0(VAR_7, VAR_2);
  VAR_11[2] = FUNC_0(VAR_7, VAR_1);
  VAR_11[3] = FUNC_0(VAR_7, VAR_0);
  VAR_9 = VAR_11[0] >> 24;

  VAR_8->resp[0] = (VAR_11[0] << 8)|(VAR_11[1] >> 24);
  VAR_8->resp[1] = (VAR_11[1] << 8)|(VAR_11[2] >> 24);
  VAR_8->resp[2] = (VAR_11[2] << 8)|(VAR_11[3] >> 24);
  VAR_8->resp[3] = (VAR_11[3] << 8);
 } else {
  VAR_9 = FUNC_0(VAR_7, VAR_1) & 0x3F;
  VAR_8->resp[0] = FUNC_0(VAR_7, VAR_0);
 }

 VAR_10 = (VAR_8->flags & VAR_6) ? VAR_8->opcode : 0x3F;
 if (VAR_9 != VAR_10)
  VAR_8->error = -VAR_4;
}
