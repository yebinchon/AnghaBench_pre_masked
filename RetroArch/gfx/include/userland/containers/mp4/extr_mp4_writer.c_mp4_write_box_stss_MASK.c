
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


struct TYPE_27__ {TYPE_6__* sample_table; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_28__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_29__ {size_t track; int flags; } ;
typedef TYPE_9__ VC_CONTAINER_PACKET_T ;
struct TYPE_25__ {int io; } ;
struct TYPE_24__ {scalar_t__ refcount; } ;
struct TYPE_20__ {size_t current_track; TYPE_5__ temp; TYPE_4__ null; } ;
typedef TYPE_10__ VC_CONTAINER_MODULE_T ;
struct TYPE_26__ {unsigned int entries; } ;
struct TYPE_23__ {TYPE_2__* priv; } ;
struct TYPE_22__ {TYPE_7__* module; } ;
struct TYPE_21__ {TYPE_10__* module; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_8__*,int ,int) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int FUNC_4 (TYPE_8__*,unsigned int,char*) ;
 int FUNC_5 (TYPE_8__*,int ,char*) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_3->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_5 = VAR_3->tracks[VAR_4->current_track]->priv->module;
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   VC_CONTAINER_PACKET_T VAR_7;
   unsigned int VAR_8 = 0, VAR_9 = 0;

   FUNC_6(&VAR_7, 0, sizeof(VC_CONTAINER_PACKET_T));

   FUNC_5(VAR_3, 0, "version");
   FUNC_3(VAR_3, 0, "flags");
   FUNC_4(VAR_3, VAR_5->sample_table[VAR_0].entries, "entry_count");

   if(VAR_4->null.refcount)
   {

      FUNC_2(VAR_3, 0, VAR_5->sample_table[VAR_0].entries * 4);
      return FUNC_1(VAR_3);
   }


   FUNC_9(VAR_4->temp.io, FUNC_0(0));

   VAR_6 = FUNC_7(VAR_3, &VAR_7);
   while(VAR_6 == VAR_2)
   {
      if(VAR_7.track != VAR_4->current_track) goto skip;

      VAR_9++;
      if(VAR_7.flags & VAR_1)
      {
         FUNC_4(VAR_3, VAR_9, "sample_number");
         VAR_8++;
      }

     skip:
      VAR_6 = FUNC_7(VAR_3, &VAR_7);
   }
   FUNC_8(VAR_8 == VAR_5->sample_table[VAR_0].entries);

   return FUNC_1(VAR_3);
}
