
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isac_hw {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isac_hw*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct isac_hw *VAR_3, u8 VAR_4)
{
 FUNC_1("%s: ph_command %x\n", VAR_3->name, VAR_4);
 if (VAR_3->type & VAR_0)
  FUNC_0(VAR_3, VAR_1, (VAR_4 << 4) | 0xE);
 else
  FUNC_0(VAR_3, VAR_2, (VAR_4 << 2) | 3);
}
