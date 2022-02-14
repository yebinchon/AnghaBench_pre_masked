
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct asd_ha_struct *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = VAR_4;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (!(VAR_6 & VAR_2))
  return 0;

 FUNC_2(VAR_5, VAR_0, VAR_6 & ~VAR_1);
 do {
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  if (!(VAR_6 & VAR_2))
   return 0;
  FUNC_3(VAR_3);
 } while (--VAR_7 > 0);

 FUNC_0("couldn't unpause the CSEQ\n");
 return -1;
}
