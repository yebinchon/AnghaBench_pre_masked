
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int a0; int a1; int a2; int a3; } ;
struct ssb_sprom {int boardflags_lo; int revision; int board_rev; int pa0b0; int pa0b1; int pa0b2; int itssi_a; int itssi_bg; int maxpwr_a; int maxpwr_bg; int country_code; int ant_available_a; int ant_available_bg; int gpio0; int gpio1; int gpio2; int gpio3; TYPE_2__ antenna_gain; int et1mac; int il0mac; scalar_t__ boardflags_hi; } ;
struct ssb_boardinfo {int vendor; } ;
struct ssb_init_invariants {struct ssb_boardinfo boardinfo; struct ssb_sprom sprom; } ;
struct ssb_bus {TYPE_1__* host_sdio; } ;
struct sdio_func_tuple {int code; int* data; int size; struct sdio_func_tuple* next; } ;
struct TYPE_3__ {struct sdio_func_tuple* tuples; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (struct ssb_sprom*,int,int) ;
 int FUNC_4 (struct ssb_bus*) ;

int FUNC_5(struct ssb_bus *VAR_2,
       struct ssb_init_invariants *VAR_3)
{
 struct ssb_sprom *VAR_4 = &VAR_3->sprom;
 struct ssb_boardinfo *VAR_5 = &VAR_3->boardinfo;
 const char *VAR_6 = "none";
 struct sdio_func_tuple *VAR_7;
 void *VAR_8;

 FUNC_3(VAR_4, 0xFF, sizeof(*VAR_4));
 VAR_4->boardflags_lo = 0;
 VAR_4->boardflags_hi = 0;

 VAR_7 = VAR_2->host_sdio->tuples;
 while (VAR_7) {
  switch (VAR_7->code) {
  case 0x22:
   switch (VAR_7->data[0]) {
   case 138:
    FUNC_0((VAR_7->size != 7) &&
           (VAR_7->data[1] != 6),
           "mac tpl size");

    VAR_8 = VAR_7->data + 2;
    FUNC_2(VAR_4->il0mac, VAR_8, VAR_1);
    FUNC_2(VAR_4->et1mac, VAR_8, VAR_1);
    break;
   default:
    break;
   }
   break;
  case 0x80:
   switch (VAR_7->data[0]) {
   case 128:
    FUNC_0(VAR_7->size != 2,
           "sromrev tpl size");
    VAR_4->revision = VAR_7->data[1];
    break;
   case 132:
    FUNC_0((VAR_7->size != 5) &&
           (VAR_7->size != 7),
           "id tpl size");
    VAR_5->vendor = VAR_7->data[1] |
          (VAR_7->data[2]<<8);
    break;
   case 134:
    FUNC_0(VAR_7->size != 2,
           "boardrev tpl size");
    VAR_4->board_rev = VAR_7->data[1];
    break;
   case 129:
    FUNC_0((VAR_7->size != 9) &&
           (VAR_7->size != 10),
           "pa tpl size");
    VAR_4->pa0b0 = VAR_7->data[1] |
      ((u16)VAR_7->data[2] << 8);
    VAR_4->pa0b1 = VAR_7->data[3] |
      ((u16)VAR_7->data[4] << 8);
    VAR_4->pa0b2 = VAR_7->data[5] |
      ((u16)VAR_7->data[6] << 8);
    VAR_4->itssi_a = VAR_7->data[7];
    VAR_4->itssi_bg = VAR_7->data[7];
    VAR_4->maxpwr_a = VAR_7->data[8];
    VAR_4->maxpwr_bg = VAR_7->data[8];
    break;
   case 130:

    break;
   case 133:
    FUNC_0(VAR_7->size != 2,
           "ccode tpl size");
    VAR_4->country_code = VAR_7->data[1];
    break;
   case 137:
    FUNC_0(VAR_7->size != 2,
           "ant tpl size");
    VAR_4->ant_available_a = VAR_7->data[1];
    VAR_4->ant_available_bg = VAR_7->data[1];
    break;
   case 136:
    FUNC_0(VAR_7->size != 2,
           "antg tpl size");
    VAR_4->antenna_gain.a0 = VAR_7->data[1];
    VAR_4->antenna_gain.a1 = VAR_7->data[1];
    VAR_4->antenna_gain.a2 = VAR_7->data[1];
    VAR_4->antenna_gain.a3 = VAR_7->data[1];
    break;
   case 135:
    FUNC_0((VAR_7->size != 3) &&
           (VAR_7->size != 5),
           "bfl tpl size");
    VAR_4->boardflags_lo = VAR_7->data[1] |
       ((u16)VAR_7->data[2] << 8);
    break;
   case 131:
    FUNC_0(VAR_7->size != 5,
           "leds tpl size");
    VAR_4->gpio0 = VAR_7->data[1];
    VAR_4->gpio1 = VAR_7->data[2];
    VAR_4->gpio2 = VAR_7->data[3];
    VAR_4->gpio3 = VAR_7->data[4];
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
  VAR_7 = VAR_7->next;
 }

 return 0;
error:
 FUNC_1(FUNC_4(VAR_2), "failed to fetch device invariants: %s\n",
  VAR_6);
 return -VAR_0;
}
