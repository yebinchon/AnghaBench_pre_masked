
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct android_app {char* current_ime; } ;
typedef int name_buf ;
typedef int device_name ;
typedef int device_model ;
struct TYPE_6__ {scalar_t__ pads_connected; TYPE_1__* pad_states; } ;
typedef TYPE_2__ android_input_t ;
struct TYPE_7__ {int ident; } ;
struct TYPE_5__ {char* name; int id; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,...) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (char*,int*,int*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int *,int ,int,int,int) ;
 int* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(android_input_t *VAR_8,
      struct android_app *VAR_9, int *VAR_10, int VAR_11,
      int VAR_12)
{
   char VAR_13[256];
   char VAR_14[256];
   char VAR_15[256];
   int VAR_16 = 0;
   int VAR_17 = 0;

   VAR_13[0] = VAR_14[0] = VAR_15[0] = '\0';

   FUNC_3(VAR_14, sizeof(VAR_14));

   FUNC_1("Device model: (%s).\n", VAR_14);

   if (*VAR_10 > VAR_1)
   {
      FUNC_0("Max number of pads reached.\n");
      return;
   }

   if (!FUNC_2(VAR_13, &VAR_16,
            &VAR_17, sizeof(VAR_13), VAR_11))
   {
      FUNC_0("Could not look up device name or IDs.\n");
      return;
   }
   if (FUNC_7(VAR_14, "SHIELD Android TV") && (
      FUNC_7(VAR_13, "Virtual") ||
      FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.0")))
   {

      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {





         if (FUNC_7(VAR_8->pad_states[0].name,"SHIELD Remote") ||
            FUNC_7(VAR_8->pad_states[0].name,"SHIELD Virtual Controller"))
         {
            VAR_6 = -1;
            VAR_7 = -1;
            VAR_8->pads_connected = 0;
            *VAR_10 = 0;
            FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));
         }



         if (FUNC_7(VAR_13, "Virtual") && VAR_8->pads_connected==0)
            FUNC_6 (VAR_15, "SHIELD Virtual Controller", sizeof(VAR_15));
         else
            FUNC_6 (VAR_15, "NVIDIA SHIELD Controller", sizeof(VAR_15));




         if (FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.0")
               && VAR_8->pads_connected==0)
            VAR_6 = VAR_11;
         else if (FUNC_7(VAR_13, "Virtual") && VAR_6 != -1)
         {
            VAR_11 = VAR_6;
            return;
         }
      }
   }

   else if (FUNC_7(VAR_14, "SHIELD") && (
      FUNC_7(VAR_13, "Virtual") || FUNC_7(VAR_13, "gpio") ||
      FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.01") ||
      FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.02")))
   {

      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {
         if ( VAR_6 < 0 )
            VAR_6 = VAR_11;
         else
            VAR_7 = VAR_11;

         if ( VAR_7 > 0)
            return;
         FUNC_6 (VAR_15, "NVIDIA SHIELD Portable", sizeof(VAR_15));
      }
   }

   else if (FUNC_7(VAR_14, "SHIELD") && (
      FUNC_7(VAR_13, "Virtual") || FUNC_7(VAR_13, "gpio") ||
      FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.03")))
   {

      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {
         if (FUNC_7(VAR_13, "NVIDIA Corporation NVIDIA Controller v01.03")
             && VAR_8->pads_connected==0)
            VAR_6 = VAR_11;
         else if (FUNC_7(VAR_13, "Virtual") || FUNC_7(VAR_13, "gpio"))
         {
            VAR_11 = VAR_6;
            return;
         }
         FUNC_6 (VAR_15, "NVIDIA SHIELD Gamepad", sizeof(VAR_15));
      }
   }






   else if (FUNC_7(VAR_13, "NVIDIA"))
      FUNC_6 (VAR_15, "Android Gamepad", sizeof(VAR_15));





   else if (FUNC_7(VAR_14, "XD") && (
      FUNC_7(VAR_13, "Virtual") || FUNC_7(VAR_13, "rk29-keypad") ||
      FUNC_7(VAR_13,"Playstation3") || FUNC_7(VAR_13,"XBOX")))
   {

      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {
         if ( VAR_6 < 0 )
            VAR_6 = VAR_11;
         else
            VAR_7 = VAR_11;

         if ( VAR_7 > 0)
            return;

         FUNC_6 (VAR_15, "GPD XD", sizeof(VAR_15));
         *VAR_10 = 0;
      }
   }





   else if(
            (
               FUNC_7(VAR_14, "R800x") ||
               FUNC_7(VAR_14, "R800at") ||
               FUNC_7(VAR_14, "R800i") ||
               FUNC_7(VAR_14, "R800a") ||
               FUNC_7(VAR_14, "R800") ||
               FUNC_7(VAR_14, "Xperia Play") ||
               FUNC_7(VAR_14, "Play") ||
               FUNC_7(VAR_14, "SO-01D")
            ) && (
               FUNC_7(VAR_13, "keypad-game-zeus") ||
               FUNC_7(VAR_13, "keypad-zeus") ||
               FUNC_7(VAR_13, "Android Gamepad")
            )
         )
   {

      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {
         if ( VAR_6 < 0 )
            VAR_6 = VAR_11;
         else
            VAR_7 = VAR_11;

         if ( VAR_7 > 0)
            return;

         FUNC_6 (VAR_15, "XPERIA Play", sizeof(VAR_15));
         *VAR_10 = 0;
      }
   }





   else if (FUNC_7(VAR_14, "ARCHOS GAMEPAD") && (
      FUNC_7(VAR_13, "joy_key") || FUNC_7(VAR_13, "joystick")))
   {

      FUNC_1("ARCHOS GAMEPAD Detected: %s\n", VAR_14);
      {
         if ( VAR_6 < 0 )
            VAR_6 = VAR_11;
         else
            VAR_7 = VAR_11;

         if ( VAR_7 > 0)
            return;

         FUNC_6 (VAR_15, "ARCHOS GamePad", sizeof(VAR_15));
         *VAR_10 = 0;
      }
   }


   else if (FUNC_7(VAR_14, "AFTB") || FUNC_7(VAR_14, "AFTT") ||
           FUNC_7(VAR_14, "AFTS") || FUNC_7(VAR_14, "AFTM") ||
           FUNC_7(VAR_14, "AFTRS"))
   {
      FUNC_1("Special Device Detected: %s\n", VAR_14);
      {

         if (FUNC_7(VAR_13, "Amazon Fire TV Remote"))
         {
            VAR_8->pads_connected = 0;
            *VAR_10 = 0;
            FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));
         }

         else if (FUNC_7(VAR_8->pad_states[0].name,"Amazon Fire TV Remote"))
         {
            VAR_8->pads_connected = 0;
            *VAR_10 = 0;
            FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));
         }
         else
            FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));
      }
   }





   else if (FUNC_7(VAR_13, "Amazon Fire TV Remote")
         || FUNC_7(VAR_13, "Nexus Remote")
         || FUNC_7(VAR_13, "SHIELD Remote"))
   {
      VAR_8->pads_connected = 0;
      *VAR_10 = 0;
      FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));
   }

   else if (FUNC_7(VAR_13, "iControlPad-"))
      FUNC_6(VAR_15, "iControlPad HID Joystick profile", sizeof(VAR_15));

   else if (FUNC_7(VAR_13, "TTT THT Arcade console 2P USB Play"))
   {
      if (*VAR_10 == 0)
         FUNC_6(VAR_15, "TTT THT Arcade (User 1)", sizeof(VAR_15));
      else if (*VAR_10 == 1)
         FUNC_6(VAR_15, "TTT THT Arcade (User 2)", sizeof(VAR_15));
   }
   else if (FUNC_7(VAR_13, "MOGA"))
      FUNC_6(VAR_15, "Moga IME", sizeof(VAR_15));




   else if (VAR_12 == VAR_0 && VAR_5 < VAR_2)
   {
      VAR_4[VAR_5] = VAR_11;
      VAR_5++;
      return;
   }



   else if (!FUNC_5(VAR_13))
      FUNC_6(VAR_15, VAR_13, sizeof(VAR_15));

   if (FUNC_7(VAR_9->current_ime, "net.obsidianx.android.mogaime"))
      FUNC_6(VAR_15, VAR_9->current_ime, sizeof(VAR_15));
   else if (FUNC_7(VAR_9->current_ime, "com.ccpcreations.android.WiiUseAndroid"))
      FUNC_6(VAR_15, VAR_9->current_ime, sizeof(VAR_15));
   else if (FUNC_7(VAR_9->current_ime, "com.hexad.bluezime"))
      FUNC_6(VAR_15, VAR_9->current_ime, sizeof(VAR_15));

   if (*VAR_10 < 0)
      *VAR_10 = VAR_8->pads_connected;

   FUNC_4(
         VAR_15,
         ((void*)0),
         VAR_3.ident,
         *VAR_10,
         VAR_16,
         VAR_17);

   VAR_8->pad_states[VAR_8->pads_connected].id = VAR_11;
   VAR_8->pad_states[VAR_8->pads_connected].port = *VAR_10;

   FUNC_6(VAR_8->pad_states[*VAR_10].name, VAR_15,
         sizeof(VAR_8->pad_states[*VAR_10].name));

   VAR_8->pads_connected++;
}
