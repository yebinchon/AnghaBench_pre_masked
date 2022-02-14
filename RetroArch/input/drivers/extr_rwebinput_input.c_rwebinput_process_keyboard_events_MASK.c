
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef char uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {char* key; scalar_t__ code; scalar_t__ metaKey; scalar_t__ shiftKey; scalar_t__ altKey; scalar_t__ ctrlKey; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_3__ event; } ;
typedef TYPE_1__ rwebinput_keyboard_event_t ;
struct TYPE_7__ {int* keys; } ;
typedef TYPE_2__ rwebinput_input_t ;
typedef TYPE_3__ EmscriptenKeyboardEvent ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 char FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int,unsigned int,char,int ,int ) ;
 unsigned int FUNC_2 (char) ;
 int FUNC_3 (scalar_t__,int) ;
 char FUNC_4 (char const**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(rwebinput_input_t *VAR_11,
   rwebinput_keyboard_event_t *VAR_12)
{
   uint32_t VAR_13;
   unsigned VAR_14;
   uint32_t VAR_15 = 0;
   uint16_t VAR_16 = 0;
   const EmscriptenKeyboardEvent *VAR_17 = &VAR_12->event;
   bool VAR_18 = VAR_12->type == VAR_0;


   if (FUNC_5(VAR_17->key) == 1)
   {
      const char *VAR_19 = &VAR_17->key[0];
      VAR_15 = FUNC_4(&VAR_19);
   }

   if (VAR_17->ctrlKey)
      VAR_16 |= VAR_2;
   if (VAR_17->altKey)
      VAR_16 |= VAR_1;
   if (VAR_17->shiftKey)
      VAR_16 |= VAR_4;
   if (VAR_17->metaKey)
      VAR_16 |= VAR_3;

   VAR_13 = FUNC_0(0, (const uint8_t *)VAR_17->code,
      FUNC_3(VAR_17->code, sizeof(VAR_17->code)));
   VAR_14 = FUNC_2(VAR_13);

   if (VAR_14 == VAR_5)
      VAR_15 = '\b';
   else if (VAR_14 == VAR_8 ||
            VAR_14 == VAR_6)
      VAR_15 = '\n';
   else if (VAR_14 == VAR_9)
      VAR_15 = '\t';

   FUNC_1(VAR_18, VAR_14, VAR_15, VAR_16,
      VAR_10);

   if (VAR_14 < VAR_7)
   {
      VAR_11->keys[VAR_14] = VAR_18;
   }
}
