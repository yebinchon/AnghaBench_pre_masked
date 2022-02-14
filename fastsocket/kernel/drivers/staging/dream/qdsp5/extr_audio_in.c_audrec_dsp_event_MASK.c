
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct audio_in {int running; } ;
typedef int msg ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 int FUNC_0 (struct audio_in*) ;
 int FUNC_1 (struct audio_in*) ;
 int FUNC_2 (struct audio_in*) ;
 int FUNC_3 (struct audio_in*) ;
 int FUNC_4 (struct audio_in*) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, unsigned VAR_3, size_t VAR_4,
       void (*VAR_5)(void *VAR_6, size_t VAR_7))
{
 struct audio_in *VAR_8 = VAR_2;
 uint16_t VAR_9[3];
 VAR_5(VAR_9, sizeof(VAR_9));

 switch (VAR_3) {
 case 130:
  if (VAR_9[0] & VAR_1) {
   if (VAR_9[0] & VAR_0) {
    FUNC_6("audpre: CFG ENABLED\n");
    FUNC_0(VAR_8);
    FUNC_1(VAR_8);
    FUNC_2(VAR_8);
    FUNC_3(VAR_8);
   } else {
    FUNC_6("audrec: CFG SLEEP\n");
    VAR_8->running = 0;
   }
  } else {
   FUNC_6("audrec: CMD_CFG_DONE %x\n", VAR_9[0]);
  }
  break;
 case 131: {
  FUNC_6("audrec: PARAM CFG DONE\n");
  VAR_8->running = 1;
  break;
 }
 case 129:
  FUNC_5("audrec: ERROR %x\n", VAR_9[0]);
  break;
 case 128:

  FUNC_4(VAR_8);
  break;
 default:
  FUNC_5("audrec: unknown event %d\n", VAR_3);
 }
}
