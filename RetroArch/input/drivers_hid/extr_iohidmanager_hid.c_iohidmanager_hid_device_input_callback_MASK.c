
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct iohidmanager_hid_adapter {size_t slot; TYPE_2__* buttons; TYPE_2__* axes; TYPE_2__* hats; } ;
struct TYPE_3__ {int** hats; float** axes; int * buttons; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
struct TYPE_4__ {scalar_t__ cookie; size_t id; struct TYPE_4__* next; } ;
typedef TYPE_2__ apple_input_rec_t ;
typedef int IOReturn ;
typedef int IOHIDValueRef ;
typedef int IOHIDElementRef ;
typedef scalar_t__ IOHIDElementCookie ;
typedef int CFIndex ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;





 scalar_t__ VAR_0 ;



__attribute__((used)) static void FUNC_13(void *VAR_1, IOReturn VAR_2,
      void* VAR_3, IOHIDValueRef VAR_4)
{
   iohidmanager_hid_t *VAR_5 = (iohidmanager_hid_t*)FUNC_12();
   struct iohidmanager_hid_adapter *VAR_6 = (struct iohidmanager_hid_adapter*)VAR_1;
   IOHIDElementRef VAR_7 = FUNC_10(VAR_4);
   uint32_t VAR_8 = (uint32_t)FUNC_7(VAR_7);
   uint32_t VAR_9 = (uint32_t)FUNC_9(VAR_7);
   uint32_t VAR_10 = (uint32_t)FUNC_8(VAR_7);
   uint32_t VAR_11 = (uint32_t)FUNC_2(VAR_7);
   apple_input_rec_t *VAR_12 = ((void*)0);

   if (VAR_8 != 128)
      if (VAR_8 != 129)
         if (VAR_8 != VAR_0)
            return;




   int VAR_13 = 0;

   switch (VAR_9)
   {
      case 132:
         switch (VAR_8)
         {
            case 128:
               switch (VAR_10)
               {
                  case 130:
                     {
                        VAR_12 = VAR_6->hats;

                        while (VAR_12 && VAR_12->cookie != (IOHIDElementCookie)VAR_11)
                           VAR_12 = VAR_12->next;

                        if (VAR_12->cookie == (IOHIDElementCookie)VAR_11)
                        {
                           CFIndex VAR_14 = FUNC_4(VAR_7);
                           CFIndex VAR_15 = FUNC_3(VAR_7) - VAR_14;
                           CFIndex VAR_16 = FUNC_11(VAR_4);

                           if (VAR_15 == 3)
                              VAR_16 *= 2;

                           if(VAR_14 == 1)
                              VAR_16--;

                           switch(VAR_16)
                           {
                              case 0:

                                 VAR_5->hats[VAR_6->slot][0] = 0;
                                 VAR_5->hats[VAR_6->slot][1] = -1;
                                 break;
                              case 1:

                                 VAR_5->hats[VAR_6->slot][0] = 1;
                                 VAR_5->hats[VAR_6->slot][1] = -1;
                                 break;
                              case 2:

                                 VAR_5->hats[VAR_6->slot][0] = 1;
                                 VAR_5->hats[VAR_6->slot][1] = 0;
                                 break;
                              case 3:

                                 VAR_5->hats[VAR_6->slot][0] = 1;
                                 VAR_5->hats[VAR_6->slot][1] = 1;
                                 break;
                              case 4:

                                 VAR_5->hats[VAR_6->slot][0] = 0;
                                 VAR_5->hats[VAR_6->slot][1] = 1;
                                 break;
                              case 5:

                                 VAR_5->hats[VAR_6->slot][0] = -1;
                                 VAR_5->hats[VAR_6->slot][1] = 1;
                                 break;
                              case 6:

                                 VAR_5->hats[VAR_6->slot][0] = -1;
                                 VAR_5->hats[VAR_6->slot][1] = 0;
                                 break;
                              case 7:

                                 VAR_5->hats[VAR_6->slot][0] = -1;
                                 VAR_5->hats[VAR_6->slot][1] = -1;
                                 break;
                              default:

                                 VAR_5->hats[VAR_6->slot][0] = 0;
                                 VAR_5->hats[VAR_6->slot][1] = 0;
                                 break;
                           }
                        }
                     }
                     break;
                  default:
                     VAR_12 = VAR_6->axes;

                     while (VAR_12 && VAR_12->cookie != (IOHIDElementCookie)VAR_11)
                        VAR_12 = VAR_12->next;

                     if (VAR_12)
                     {
                        if (VAR_12->cookie == (IOHIDElementCookie)VAR_11)
                        {
                           CFIndex VAR_17 = FUNC_6(VAR_7);
                           CFIndex VAR_18 = FUNC_11(VAR_4) - VAR_17;
                           CFIndex VAR_19 = FUNC_5(VAR_7) - VAR_17;
                           float VAR_20 = (float)VAR_18 / (float)VAR_19;

                           VAR_5->axes[VAR_6->slot][VAR_12->id] =
                              ((VAR_20 * 2.0f) - 1.0f) * 32767.0f;
                        }
                     }
                     else
                        VAR_13 = 1;
                     break;
               }
               break;
         }
         break;
      case 133:
      case 134:
         switch (VAR_8)
         {
            case 128:
            case 129:
               VAR_13 = 1;
               break;
         }
         break;
      case 131:
          switch (VAR_8)
          {
             case 128:
                 switch (VAR_10)
                 {
                 default:
                     VAR_12 = VAR_6->axes;

                     while (VAR_12 && VAR_12->cookie != (IOHIDElementCookie)VAR_11)
                     {
                        VAR_12 = VAR_12->next;
                     }
                     if (VAR_12)
                     {
                        if (VAR_12->cookie == (IOHIDElementCookie)VAR_11)
                        {
                           CFIndex VAR_21 = FUNC_6(VAR_7);
                           CFIndex VAR_22 = FUNC_11(VAR_4) - VAR_21;
                           CFIndex VAR_23 = FUNC_5(VAR_7) - VAR_21;
                           float VAR_24 = (float)VAR_22 / (float)VAR_23;

                           VAR_5->axes[VAR_6->slot][VAR_12->id] =
                              ((VAR_24 * 2.0f) - 1.0f) * 32767.0f;
                        }
                     }
                     else
                        VAR_13 = 1;
                     break;
                 }
                 break;
          }
          break;
   }

   if (VAR_13)
   {
      uint8_t VAR_25 = 0;

      VAR_12 = VAR_6->buttons;

      while (VAR_12 && VAR_12->cookie != (IOHIDElementCookie)VAR_11)
      {
         VAR_25++;
         VAR_12 = VAR_12->next;
      }

      if (VAR_12 && VAR_12->cookie == (IOHIDElementCookie)VAR_11)
      {
         CFIndex VAR_26 = FUNC_11(VAR_4);
         if (VAR_26)
            FUNC_1(VAR_5->buttons[VAR_6->slot], VAR_25);
         else
            FUNC_0(VAR_5->buttons[VAR_6->slot], VAR_25);
      }
   }
}
