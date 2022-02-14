
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ coreaudio_t ;
typedef int UInt32 ;
struct TYPE_7__ {int mSelector; int mScope; int mElement; } ;
typedef TYPE_2__ AudioObjectPropertyAddress ;
typedef char AudioDeviceID ;


 scalar_t__ FUNC_0 (char,TYPE_2__*,int ,int ,int*,char*) ;
 scalar_t__ FUNC_1 (char,TYPE_2__*,int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ,char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(coreaudio_t *VAR_10, const char* VAR_11)
{
   unsigned VAR_12;
   UInt32 VAR_13;
   AudioObjectPropertyAddress VAR_14;
   AudioDeviceID *VAR_15 = ((void*)0);
   UInt32 VAR_16 = 0;

   VAR_14.mSelector = VAR_2;



   VAR_14.mScope = VAR_4;

   VAR_14.mElement = VAR_3;

   if (FUNC_1(VAR_6,
            &VAR_14, 0, 0, &VAR_16) != VAR_9)
      return;

   VAR_13 = VAR_16 / sizeof(AudioDeviceID);
   VAR_15 = (AudioDeviceID*)FUNC_4(VAR_16);

   if (!VAR_15 || FUNC_0(VAR_6,
            &VAR_14, 0, 0, &VAR_16, VAR_15) != VAR_9)
      goto done;



   VAR_14.mScope = VAR_1;

   VAR_14.mSelector = VAR_0;

   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12 ++)
   {
      char VAR_17[1024];
      VAR_17[0] = 0;
      VAR_16 = 1024;

      if (FUNC_0(VAR_15[VAR_12],
               &VAR_14, 0, 0, &VAR_16, VAR_17) == VAR_9
            && FUNC_5(VAR_17, VAR_11))
      {
         FUNC_2(VAR_10->dev, VAR_7,
               VAR_8, 0, &VAR_15[VAR_12], sizeof(AudioDeviceID));
         goto done;
      }
   }

done:
   FUNC_3(VAR_15);
}
