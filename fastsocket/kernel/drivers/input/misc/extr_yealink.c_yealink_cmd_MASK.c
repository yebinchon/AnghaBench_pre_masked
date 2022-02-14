
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct yld_ctl_packet {scalar_t__ sum; } ;
struct yealink_dev {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int,int,struct yld_ctl_packet*,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct yealink_dev *VAR_6, struct yld_ctl_packet *VAR_7)
{
 u8 *VAR_8 = (u8 *)VAR_7;
 int VAR_9;
 u8 VAR_10 = 0;

 for(VAR_9=0; VAR_9<VAR_2-1; VAR_9++)
  VAR_10 -= VAR_8[VAR_9];
 VAR_7->sum = VAR_10;
 return FUNC_0(VAR_6->udev,
   FUNC_1(VAR_6->udev, 0),
   VAR_4,
   VAR_5 | VAR_3 | VAR_1,
   0x200, 3,
   VAR_7, sizeof(*VAR_7),
   VAR_0);
}
