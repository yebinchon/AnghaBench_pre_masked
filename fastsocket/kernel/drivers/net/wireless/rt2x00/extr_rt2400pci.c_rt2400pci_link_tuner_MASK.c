
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {int false_cca; int vgc_level; } ;


 int FUNC_0 (struct rt2x00_dev*,struct link_qual*,int) ;

__attribute__((used)) static void FUNC_1(struct rt2x00_dev *VAR_0,
     struct link_qual *VAR_1, const u32 VAR_2)
{




 if (VAR_2 > 60 || !(VAR_2 & 1))
  return;




 if ((VAR_1->false_cca > 512) && (VAR_1->vgc_level < 0x20))
  FUNC_0(VAR_0, VAR_1, ++VAR_1->vgc_level);
 else if ((VAR_1->false_cca < 100) && (VAR_1->vgc_level > 0x08))
  FUNC_0(VAR_0, VAR_1, --VAR_1->vgc_level);
}
