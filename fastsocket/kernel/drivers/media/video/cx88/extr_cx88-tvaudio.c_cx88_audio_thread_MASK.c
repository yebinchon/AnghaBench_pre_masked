
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int t ;
struct v4l2_tuner {int rxsubchans; } ;
struct cx88_core {int tvaudio; int audiomode_current; int audiomode_manual; int use_nicam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx88_core*,struct v4l2_tuner*) ;
 int FUNC_1 (struct cx88_core*,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct v4l2_tuner*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(void *VAR_4)
{
 struct cx88_core *VAR_5 = VAR_4;
 struct v4l2_tuner VAR_6;
 u32 VAR_7 = 0;

 FUNC_2("cx88: tvaudio thread started\n");
 FUNC_6();
 for (;;) {
  FUNC_5(1000);
  if (FUNC_3())
   break;
  FUNC_7();

  switch (VAR_5->tvaudio) {
  case 138:
  case 136:
  case 129:
  case 133:
  case 130:
   if (VAR_5->use_nicam)
    goto hw_autodetect;


   FUNC_4(&VAR_6, 0, sizeof(VAR_6));
   FUNC_0(VAR_5, &VAR_6);

   if (VAR_0 != VAR_5->audiomode_manual)

    continue;


   if (VAR_6.rxsubchans & VAR_3)
    VAR_7 = VAR_2;
   else
    VAR_7 = VAR_1;
   if (VAR_7 == VAR_5->audiomode_current)
    continue;

   FUNC_1(VAR_5, VAR_7, 0);
   break;
  case 128:
  case 137:
  case 135:
  case 131:
  case 134:
  case 132:
hw_autodetect:


   break;
  }
 }

 FUNC_2("cx88: tvaudio thread exiting\n");
 return 0;
}
