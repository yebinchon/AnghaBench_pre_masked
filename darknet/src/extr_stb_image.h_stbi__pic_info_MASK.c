
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int channel; void* type; } ;
typedef TYPE_1__ stbi__pic_packet ;
typedef int stbi__context ;
typedef int packets ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4=0,VAR_5=0,VAR_6,VAR_7;
   stbi__pic_packet VAR_8[10];

   if (!VAR_1) VAR_1 = &VAR_7;
   if (!VAR_2) VAR_2 = &VAR_7;
   if (!VAR_3) VAR_3 = &VAR_7;

   if (!FUNC_3(VAR_0,"\x53\x80\xF6\x34")) {
      FUNC_4(VAR_0);
      return 0;
   }

   FUNC_5(VAR_0, 88);

   *VAR_1 = FUNC_1(VAR_0);
   *VAR_2 = FUNC_1(VAR_0);
   if (FUNC_0(VAR_0)) {
      FUNC_4( VAR_0);
      return 0;
   }
   if ( (*VAR_1) != 0 && (1 << 28) / (*VAR_1) < (*VAR_2)) {
      FUNC_4( VAR_0 );
      return 0;
   }

   FUNC_5(VAR_0, 8);

   do {
      stbi__pic_packet *VAR_9;

      if (VAR_5==sizeof(VAR_8)/sizeof(VAR_8[0]))
         return 0;

      VAR_9 = &VAR_8[VAR_5++];
      VAR_6 = FUNC_2(VAR_0);
      VAR_9->size = FUNC_2(VAR_0);
      VAR_9->type = FUNC_2(VAR_0);
      VAR_9->channel = FUNC_2(VAR_0);
      VAR_4 |= VAR_9->channel;

      if (FUNC_0(VAR_0)) {
          FUNC_4( VAR_0 );
          return 0;
      }
      if (VAR_9->size != 8) {
          FUNC_4( VAR_0 );
          return 0;
      }
   } while (VAR_6);

   *VAR_3 = (VAR_4 & 0x10 ? 4 : 3);

   return 1;
}
