
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int tvaudio; scalar_t__ last_change; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cx88_core*,int *,int ) ;
 int FUNC_2 (struct cx88_core*,int *,int ) ;
 int FUNC_3 (int,char*,char*,char*,char*) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (struct cx88_core*,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

s32 FUNC_8(struct cx88_core *VAR_8)
{
 s16 *VAR_9;
 u32 VAR_10 = 0;
 s32 VAR_11 = VAR_3;


 if (!(FUNC_0(VAR_2) & 0x04))
  return VAR_11;
 if (!(FUNC_0(VAR_0) & VAR_1))
  return VAR_11;


 if (FUNC_7(VAR_7, VAR_8->last_change + FUNC_5(500)))
  return VAR_11;

 VAR_9 = FUNC_6(VAR_8, &VAR_10);

 if (!VAR_9)
  return VAR_11;

 switch (VAR_8->tvaudio) {
 case 138:
 case 136:
 case 135:
 case 129:
  VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10);
  break;
 case 137:
  VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_10);
  break;
 case 128:
 case 133:
 case 130:
 case 131:
 case 134:
 case 132:
  break;
 }

 FUNC_4(VAR_9);

 if (VAR_3 != VAR_11)
  FUNC_3(1, "stereo/sap detection result:%s%s%s\n",
      (VAR_11 & VAR_5) ? " mono" : "",
      (VAR_11 & VAR_6) ? " stereo" : "",
      (VAR_11 & VAR_4) ? " dual" : "");

 return VAR_11;
}
