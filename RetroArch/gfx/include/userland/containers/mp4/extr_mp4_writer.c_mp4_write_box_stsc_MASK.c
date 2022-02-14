
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_27__ {TYPE_6__* sample_table; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_28__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_29__ {size_t track; scalar_t__ size; } ;
typedef TYPE_9__ VC_CONTAINER_PACKET_T ;
struct TYPE_25__ {int io; } ;
struct TYPE_24__ {scalar_t__ refcount; } ;
struct TYPE_20__ {size_t current_track; TYPE_5__ temp; TYPE_4__ null; } ;
typedef TYPE_10__ VC_CONTAINER_MODULE_T ;
struct TYPE_26__ {int entries; } ;
struct TYPE_23__ {TYPE_2__* priv; } ;
struct TYPE_22__ {TYPE_7__* module; } ;
struct TYPE_21__ {TYPE_10__* module; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_8__*,int ,int) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int FUNC_4 (TYPE_8__*,int,char*) ;
 int FUNC_5 (TYPE_8__*,int ,char*) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_4 = VAR_2->tracks[VAR_3->current_track]->priv->module;
   VC_CONTAINER_STATUS_T VAR_5 = VAR_1;
   VC_CONTAINER_PACKET_T VAR_6;
   int64_t VAR_7 = 0, VAR_8 = -1;
   unsigned int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

   FUNC_6(&VAR_6, 0, sizeof(VC_CONTAINER_PACKET_T));

   FUNC_5(VAR_2, 0, "version");
   FUNC_3(VAR_2, 0, "flags");
   FUNC_4(VAR_2, VAR_4->sample_table[VAR_0].entries, "entry_count");

   if(VAR_3->null.refcount)
   {

      FUNC_2(VAR_2, 0, VAR_4->sample_table[VAR_0].entries * 12);
      return FUNC_1(VAR_2);
   }


   FUNC_9(VAR_3->temp.io, FUNC_0(0));

   VAR_5 = FUNC_7(VAR_2, &VAR_6);
   while(VAR_5 == VAR_1)
   {
      if(VAR_6.track != VAR_3->current_track) goto skip;


      if(VAR_8 != VAR_7)
      {
         VAR_10++;
         if(VAR_12)
         {
            FUNC_4(VAR_2, VAR_11, "first_chunk");
            FUNC_4(VAR_2, VAR_12, "samples_per_chunk");
            FUNC_4(VAR_2, 1, "sample_description_index");
            VAR_9++;
         }
         VAR_11 = VAR_10;
         VAR_12 = 0;
      }
      VAR_8 = VAR_7 + VAR_6.size;
      VAR_12++;

     skip:
      VAR_7 += VAR_6.size;
      VAR_5 = FUNC_7(VAR_2, &VAR_6);
   }

   if(VAR_12)
   {
      FUNC_4(VAR_2, VAR_11, "first_chunk");
      FUNC_4(VAR_2, VAR_12, "samples_per_chunk");
      FUNC_4(VAR_2, 1, "sample_description_index");
      VAR_9++;
   }

   FUNC_8(VAR_9 == VAR_4->sample_table[VAR_0].entries);

   return FUNC_1(VAR_2);
}
