
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct us_data {unsigned int fflags; TYPE_3__* pusb_intf; TYPE_2__* pusb_dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int idProduct; int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int FUNC_0 (char) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 char* VAR_11 ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static void FUNC_4(struct us_data *VAR_12)
{
 char *VAR_13;
 u16 VAR_14 = FUNC_2(VAR_12->pusb_dev->descriptor.idVendor);
 u16 VAR_15 = FUNC_2(VAR_12->pusb_dev->descriptor.idProduct);
 unsigned VAR_16 = 0;
 unsigned int VAR_17 = (VAR_9 | VAR_0 |
   VAR_3 |
   VAR_1 | VAR_4 |
   VAR_7 | VAR_6 |
   VAR_2 | VAR_5 |
   VAR_10 | VAR_8);

 VAR_13 = VAR_11;
 while (*VAR_13) {

  if (VAR_14 == FUNC_3(VAR_13, &VAR_13, 16) &&
    *VAR_13 == ':' &&
    VAR_15 == FUNC_3(VAR_13+1, &VAR_13, 16) &&
    *VAR_13 == ':')
   break;


  while (*VAR_13) {
   if (*VAR_13++ == ',')
    break;
  }
 }
 if (!*VAR_13)
  return;


 while (*++VAR_13 && *VAR_13 != ',') {
  switch (FUNC_0(*VAR_13)) {
  case 'a':
   VAR_16 |= VAR_9;
   break;
  case 'b':
   VAR_16 |= VAR_0;
   break;
  case 'c':
   VAR_16 |= VAR_3;
   break;
  case 'h':
   VAR_16 |= VAR_1;
   break;
  case 'i':
   VAR_16 |= VAR_4;
   break;
  case 'l':
   VAR_16 |= VAR_7;
   break;
  case 'm':
   VAR_16 |= VAR_6;
   break;
  case 'o':
   VAR_16 |= VAR_2;
   break;
  case 'r':
   VAR_16 |= VAR_5;
   break;
  case 's':
   VAR_16 |= VAR_10;
   break;
  case 'w':
   VAR_16 |= VAR_8;
   break;

  }
 }
 VAR_12->fflags = (VAR_12->fflags & ~VAR_17) | VAR_16;
 FUNC_1(&VAR_12->pusb_intf->dev, "Quirks match for "
   "vid %04x pid %04x: %x\n",
   VAR_14, VAR_15, VAR_16);
}
