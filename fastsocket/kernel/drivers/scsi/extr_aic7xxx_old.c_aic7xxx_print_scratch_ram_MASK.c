
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aic7xxx_host*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_4)
{
  int VAR_5, VAR_6;

  VAR_6 = 0;
  FUNC_1("Scratch RAM:\n");
  for(VAR_5 = VAR_2; VAR_5 < VAR_1; VAR_5++)
  {
    FUNC_1("%02x:%02x ", VAR_5, FUNC_0(VAR_4, VAR_5));
    if(++VAR_6 == 13)
    {
      FUNC_1("\n");
      VAR_6=0;
    }
  }
  if (VAR_4->features & VAR_0)
  {
    for(VAR_5 = VAR_3; VAR_5 < 0x80; VAR_5++)
    {
      FUNC_1("%02x:%02x ", VAR_5, FUNC_0(VAR_4, VAR_5));
      if(++VAR_6 == 13)
      {
        FUNC_1("\n");
        VAR_6=0;
      }
    }
  }
  FUNC_1("\n");
}
