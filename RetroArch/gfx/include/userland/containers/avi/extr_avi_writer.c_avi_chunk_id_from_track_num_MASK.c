
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int track_num_buf ;
struct TYPE_6__ {TYPE_1__* format; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_7__ {TYPE_2__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_5__ {scalar_t__ es_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char,unsigned char,char,char) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3( VC_CONTAINER_T *VAR_2,
   VC_CONTAINER_FOURCC_T *VAR_3, unsigned int VAR_4 )
{
   VC_CONTAINER_TRACK_T *VAR_5 = VAR_2->tracks[VAR_4];
   VC_CONTAINER_FOURCC_T VAR_6 = 0;
   char VAR_7[3];

   if(VAR_5->format->es_type == VAR_1)
      VAR_6 = FUNC_0('0','0','d','c');
   else if(VAR_5->format->es_type == VAR_0)
      VAR_6 = FUNC_0('0','0','w','b');
   else
   {


      *VAR_3 = FUNC_0('J','U','N','K'); return;
   }

   FUNC_2(VAR_7, sizeof(VAR_7), "%02d", VAR_4);
   FUNC_1(&VAR_6, VAR_7, 2);

   *VAR_3 = VAR_6;
}
