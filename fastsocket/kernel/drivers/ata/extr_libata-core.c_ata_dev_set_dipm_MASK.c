
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {int flags; int pm_policy; } ;
struct ata_link {struct ata_port* ap; } ;
struct ata_device {int flags; struct ata_link* link; } ;
typedef enum link_pm { ____Placeholder_link_pm } link_pm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*) ;
 unsigned int FUNC_1 (struct ata_device*,int ,int ) ;
 int FUNC_2 (struct ata_link*,int ,int*) ;
 int FUNC_3 (struct ata_link*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ata_device *VAR_6, enum link_pm VAR_7)
{
 struct ata_link *VAR_8 = VAR_6->link;
 struct ata_port *VAR_9 = VAR_8->ap;
 u32 VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 if (!(VAR_9->flags & VAR_1) || !FUNC_0(VAR_6)) {
  VAR_9->pm_policy = 128;
  return -VAR_2;
 }
 VAR_12 = FUNC_2(VAR_8, VAR_4, &VAR_10);
 if (VAR_12)
  return VAR_12;

 switch (VAR_7) {
 case 129:

  VAR_10 &= ~(0x3 << 8);
  VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_10);
  if (VAR_12)
   return VAR_12;


  if (VAR_6->flags & VAR_0)
   VAR_11 = FUNC_1(VAR_6,
     VAR_5, VAR_3);
  break;
 case 130:

  VAR_10 &= ~(0x1 << 8);
  VAR_10 |= (0x2 << 8);
  VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_10);
  if (VAR_12)
   return VAR_12;






  break;
 case 128:
 case 131:

  VAR_10 |= (0x3 << 8);
  VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_10);
  if (VAR_12)
   return VAR_12;






  break;
 }


 (void) VAR_11;

 return 0;
}
