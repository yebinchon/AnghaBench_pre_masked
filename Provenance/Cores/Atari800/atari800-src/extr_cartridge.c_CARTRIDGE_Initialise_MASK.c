
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* filename; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int VAR_7 ;
 int FUNC_3 (char*,scalar_t__*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int *VAR_8, char *VAR_9[])
{
 int VAR_10;
 int VAR_11;
 int VAR_12 = VAR_6;




 int VAR_13 = VAR_6;
 int VAR_14 = VAR_6;

 for (VAR_10 = VAR_11 = 1; VAR_10 < *VAR_8; VAR_10++) {
  int VAR_15 = (VAR_10 + 1 < *VAR_8);
  int VAR_16 = VAR_6;
  int VAR_17 = VAR_6;

  if (FUNC_5(VAR_9[VAR_10], "-cart") == 0) {
   if (VAR_15) {
    FUNC_4(VAR_4.filename, VAR_9[++VAR_10], sizeof(VAR_4.filename));
    if (!VAR_13)
     VAR_4.type = VAR_2;
   }
   else VAR_16 = VAR_7;
  }
  else if (FUNC_5(VAR_9[VAR_10], "-cart-type") == 0) {
   if (VAR_15) {
    FUNC_3(VAR_9[++VAR_10], &VAR_4.type);
    if (VAR_4.type < 0 || VAR_4.type > VAR_0)
     VAR_17 = VAR_7;
    else
     VAR_13 = VAR_7;
   }
   else VAR_16 = VAR_7;
  }
  else if (FUNC_5(VAR_9[VAR_10], "-cart2") == 0) {
   if (VAR_15) {
    FUNC_4(VAR_5.filename, VAR_9[++VAR_10], sizeof(VAR_5.filename));
    if (!VAR_14)
     VAR_5.type = VAR_2;
   }
   else VAR_16 = VAR_7;
  }
  else if (FUNC_5(VAR_9[VAR_10], "-cart2-type") == 0) {
   if (VAR_15) {
    FUNC_3(VAR_9[++VAR_10], &VAR_5.type);
    if (VAR_5.type < 0 || VAR_5.type > VAR_0)
     VAR_17 = VAR_7;
    else
     VAR_14 = VAR_7;
   }
   else VAR_16 = VAR_7;
  }
  else if (FUNC_5(VAR_9[VAR_10], "-cart-autoreboot") == 0)
   VAR_3 = VAR_7;
  else if (FUNC_5(VAR_9[VAR_10], "-no-cart-autoreboot") == 0)
   VAR_3 = VAR_6;
  else {
   if (FUNC_5(VAR_9[VAR_10], "-help") == 0) {
    VAR_12 = VAR_7;
    FUNC_2("\t-cart <file>         Install cartridge (raw or CART format)");
    FUNC_2("\t-cart-type <num>     Set cartridge type (0..%i)", VAR_0);
    FUNC_2("\t-cart2 <file>        Install piggyback cartridge");
    FUNC_2("\t-cart2-type <num>    Set piggyback cartridge type (0..%i)", VAR_0);
    FUNC_2("\t-cart-autoreboot     Reboot when cartridge is inserted/removed");
    FUNC_2("\t-no-cart-autoreboot  Don't reboot after changing cartridge");
   }
   VAR_9[VAR_11++] = VAR_9[VAR_10];
  }

  if (VAR_16) {
   FUNC_2("Missing argument for '%s'", VAR_9[VAR_10]);
   return VAR_6;
  } else if (VAR_17) {
   FUNC_2("Invalid argument for '%s'", VAR_9[--VAR_10]);
   return VAR_6;
  }
 }
 *VAR_8 = VAR_11;

 if (VAR_12)
  return VAR_7;


 if (VAR_4.filename[0] == '\0')
  VAR_4.type = VAR_1;
 if (VAR_5.filename[0] == '\0')
  VAR_5.type = VAR_1;

 FUNC_1(&VAR_4);
 if (FUNC_0(VAR_4.type))
  FUNC_1(&VAR_5);

 return VAR_7;
}
