
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sbp2_target {unsigned int workarounds; int bus_id; } ;
struct TYPE_3__ {int firmware_revision; int model; unsigned int workarounds; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*,int ,...) ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct sbp2_target *VAR_4, u32 VAR_5,
      u32 VAR_6)
{
 int VAR_7;
 unsigned int VAR_8 = VAR_2;

 if (VAR_8)
  FUNC_1("Please notify linux1394-devel@lists.sourceforge.net "
     "if you need the workarounds parameter for %s\n",
     VAR_4->bus_id);

 if (VAR_8 & VAR_1)
  goto out;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {

  if (VAR_3[VAR_7].firmware_revision !=
      (VAR_6 & 0xffffff00))
   continue;

  if (VAR_3[VAR_7].model != VAR_5 &&
      VAR_3[VAR_7].model != VAR_0)
   continue;

  VAR_8 |= VAR_3[VAR_7].workarounds;
  break;
 }
 out:
 if (VAR_8)
  FUNC_1("Workarounds for %s: 0x%x "
     "(firmware_revision 0x%06x, model_id 0x%06x)\n",
     VAR_4->bus_id, VAR_8, VAR_6, VAR_5);
 VAR_4->workarounds = VAR_8;
}
