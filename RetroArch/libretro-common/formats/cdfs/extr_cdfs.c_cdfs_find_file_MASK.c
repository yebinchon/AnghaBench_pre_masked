
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size; TYPE_2__* track; } ;
typedef TYPE_1__ cdfs_file_t ;
typedef int buffer ;
struct TYPE_5__ {int stream; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,char const*,int const) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int FUNC_6(cdfs_file_t* VAR_0, const char* VAR_1)
{
   uint8_t VAR_2[2048], *VAR_3;
   int VAR_4, VAR_5;

   const char* VAR_6 = FUNC_5(VAR_1, '\\');
   if (VAR_6)
   {

      const int VAR_7 = (int)(VAR_6 - VAR_1);
      FUNC_2(VAR_2, VAR_1, VAR_7);
      VAR_2[VAR_7] = '\0';

      VAR_4 = FUNC_6(VAR_0, (const char*)VAR_2);
      if (VAR_4 < 0)
         return VAR_4;

      VAR_1 += VAR_7 + 1;
   }
   else
   {
      int VAR_8;


      FUNC_0(VAR_0->track, 16);
      FUNC_1(VAR_0->track->stream, VAR_2, sizeof(VAR_2));



      VAR_8 = 156 + 2;
      VAR_4 = VAR_2[VAR_8] | (VAR_2[VAR_8 + 1] << 8) | (VAR_2[VAR_8 + 2] << 16);
   }


   FUNC_0(VAR_0->track, VAR_4);
   FUNC_1(VAR_0->track->stream, VAR_2, sizeof(VAR_2));

   VAR_5 = FUNC_3(VAR_1);
   VAR_3 = VAR_2;
   while (VAR_3 < VAR_2 + sizeof(VAR_2))
   {

      if (!*VAR_3)
         break;


      if ((VAR_3[33 + VAR_5] == ';' || VAR_3[33 + VAR_5] == '\0') &&
         FUNC_4((const char*)(VAR_3 + 33), VAR_1, VAR_5) == 0)
      {

         if (!VAR_6)
            VAR_0->size = VAR_3[10] | (VAR_3[11] << 8) | (VAR_3[12] << 16) | (VAR_3[13] << 24);


         VAR_4 = VAR_3[2] | (VAR_3[3] << 8) | (VAR_3[4] << 16);
         return VAR_4;
      }


      VAR_3 += VAR_3[0];
   }

   return -1;
}
