
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_state {int type_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct dst_state *VAR_10)
{
 u32 VAR_11 = VAR_10->type_flags;

 FUNC_0(VAR_9, VAR_0, 0, "DST type flags :");
 if (VAR_11 & VAR_6)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x newtuner", VAR_6);
 if (VAR_11 & VAR_4)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x newtuner 2", VAR_4);
 if (VAR_11 & VAR_7)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x ts204", VAR_7);
 if (VAR_11 & VAR_8)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x VLF", VAR_8);
 if (VAR_11 & VAR_5)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x symdiv", VAR_5);
 if (VAR_11 & VAR_1)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x firmware version = 1", VAR_1);
 if (VAR_11 & VAR_2)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x firmware version = 2", VAR_2);
 if (VAR_11 & VAR_3)
  FUNC_0(VAR_9, VAR_0, 0, " 0x%x firmware version = 3", VAR_3);
 FUNC_0(VAR_9, VAR_0, 0, "\n");
}
