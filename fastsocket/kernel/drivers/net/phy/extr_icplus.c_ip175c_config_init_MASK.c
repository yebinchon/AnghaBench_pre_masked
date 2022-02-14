
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct phy_device {int addr; int link; int attached_dev; int duplex; int speed; int state; TYPE_1__* bus; } ;
struct TYPE_7__ {int (* write ) (TYPE_1__*,int,int,int) ;int (* read ) (TYPE_1__*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_8(struct phy_device *VAR_5)
{
 int VAR_6, VAR_7;
 static int VAR_8 = 0;

 if (VAR_8 == 0) {


  VAR_6 = VAR_5->bus->write(VAR_5->bus, 30, 0, 0x175c);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = VAR_5->bus->read(VAR_5->bus, 30, 0);


  FUNC_0(2);


  VAR_6 = VAR_5->bus->write(VAR_5->bus, 29, 31, 0x175c);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = VAR_5->bus->write(VAR_5->bus, 29, 22, 0x420);
  if (VAR_6 < 0)
   return VAR_6;


  for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
   VAR_6 = VAR_5->bus->write(VAR_5->bus, VAR_7,
       VAR_2, VAR_0);
   if (VAR_6 < 0)
    return VAR_6;
  }

  for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
   VAR_6 = VAR_5->bus->read(VAR_5->bus, VAR_7, VAR_2);

  FUNC_0(2);

  VAR_8 = 1;
 }

 if (VAR_5->addr != 4) {
  VAR_5->state = VAR_3;
  VAR_5->speed = VAR_4;
  VAR_5->duplex = VAR_1;
  VAR_5->link = 1;
  FUNC_1(VAR_5->attached_dev);
 }

 return 0;
}
