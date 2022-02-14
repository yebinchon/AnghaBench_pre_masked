
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ size; int id; } ;
struct TYPE_10__ {int rifftype; TYPE_1__ riff; } ;
typedef TYPE_3__ waveheader_struct ;
struct TYPE_9__ {int size; int id; } ;
struct TYPE_11__ {int compress; int numchan; int rate; int bitspersample; int blockalign; int bytespersec; TYPE_2__ chunk; } ;
typedef TYPE_4__ fmt_struct ;
struct TYPE_12__ {scalar_t__ size; int id; } ;
typedef TYPE_5__ chunk_struct ;
struct TYPE_13__ {int member_1; int member_0; } ;
typedef TYPE_6__ IOCheck_struct ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 char* VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_6__*,void*,int,int,int *) ;

__attribute__((used)) static int FUNC_3(void)
{
   waveheader_struct VAR_2;
   fmt_struct VAR_3;
   chunk_struct VAR_4;
   IOCheck_struct VAR_5 = { 0, 0 };

   if (VAR_0)
   {

      if ((VAR_1 = FUNC_0(VAR_0, "wb")) == ((void*)0))
         return -1;
   }
   else
   {
      if ((VAR_1 = FUNC_0("scsp.wav", "wb")) == ((void*)0))
         return -1;
   }


   FUNC_1(VAR_2.riff.id, "RIFF", 4);
   VAR_2.riff.size = 0;
   FUNC_1(VAR_2.rifftype, "WAVE", 4);
   FUNC_2(&VAR_5, (void *)&VAR_2, 1, sizeof(waveheader_struct), VAR_1);


   FUNC_1(VAR_3.chunk.id, "fmt ", 4);
   VAR_3.chunk.size = 16;
   VAR_3.compress = 1;
   VAR_3.numchan = 2;
   VAR_3.rate = 44100;
   VAR_3.bitspersample = 16;
   VAR_3.blockalign = VAR_3.bitspersample / 8 * VAR_3.numchan;
   VAR_3.bytespersec = VAR_3.rate * VAR_3.blockalign;
   FUNC_2(&VAR_5, (void *)&VAR_3, 1, sizeof(fmt_struct), VAR_1);


   FUNC_1(VAR_4.id, "data", 4);
   VAR_4.size = 0;
   FUNC_2(&VAR_5, (void *)&VAR_4, 1, sizeof(chunk_struct), VAR_1);

   return 0;
}
