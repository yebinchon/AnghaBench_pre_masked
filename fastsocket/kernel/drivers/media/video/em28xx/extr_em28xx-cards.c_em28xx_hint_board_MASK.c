
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct em28xx {scalar_t__ hash; size_t model; scalar_t__ i2c_hash; int tuner_type; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {scalar_t__ hash; size_t model; int tuner; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct em28xx*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_4->hash == VAR_2[VAR_5].hash) {
   VAR_4->model = VAR_2[VAR_5].model;
   VAR_4->tuner_type = VAR_2[VAR_5].tuner;

   FUNC_2("Your board has no unique USB ID.\n");
   FUNC_2("A hint were successfully done, "
          "based on eeprom hash.\n");
   FUNC_2("This method is not 100%% failproof.\n");
   FUNC_2("If the board were missdetected, "
          "please email this log to:\n");
   FUNC_2("\tV4L Mailing List "
          " <linux-media@vger.kernel.org>\n");
   FUNC_2("Board detected as %s\n",
          VAR_1[VAR_4->model].name);

   return 0;
  }
 }
 if (!VAR_4->i2c_hash)
  FUNC_1(VAR_4);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (VAR_4->i2c_hash == VAR_3[VAR_5].hash) {
   VAR_4->model = VAR_3[VAR_5].model;
   VAR_4->tuner_type = VAR_3[VAR_5].tuner;
   FUNC_2("Your board has no unique USB ID.\n");
   FUNC_2("A hint were successfully done, "
          "based on i2c devicelist hash.\n");
   FUNC_2("This method is not 100%% failproof.\n");
   FUNC_2("If the board were missdetected, "
          "please email this log to:\n");
   FUNC_2("\tV4L Mailing List "
          " <linux-media@vger.kernel.org>\n");
   FUNC_2("Board detected as %s\n",
          VAR_1[VAR_4->model].name);

   return 0;
  }
 }

 FUNC_2("Your board has no unique USB ID and thus need a "
        "hint to be detected.\n");
 FUNC_2("You may try to use card=<n> insmod option to "
        "workaround that.\n");
 FUNC_2("Please send an email with this log to:\n");
 FUNC_2("\tV4L Mailing List <linux-media@vger.kernel.org>\n");
 FUNC_2("Board eeprom hash is 0x%08lx\n", VAR_4->hash);
 FUNC_2("Board i2c devicelist hash is 0x%08lx\n", VAR_4->i2c_hash);

 FUNC_2("Here is a list of valid choices for the card=<n>"
        " insmod option:\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_2("    card=%d -> %s\n",
    VAR_5, VAR_1[VAR_5].name);
 }
 return -1;
}
