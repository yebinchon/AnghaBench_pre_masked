
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stream_sector_size; int stream; } ;
typedef TYPE_1__ cdfs_track_t ;
struct TYPE_8__ {int current_sector; int first_sector; int size; TYPE_1__* track; } ;
typedef TYPE_2__ cdfs_file_t ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(cdfs_file_t* VAR_0, cdfs_track_t* VAR_1, const char* VAR_2)
{
   if (!VAR_0 || !VAR_1)
      return 0;

   FUNC_2(VAR_0, 0, sizeof(*VAR_0));

   VAR_0->track = VAR_1;

   VAR_0->current_sector = -1;
   if (VAR_2 != ((void*)0))
   {
      VAR_0->first_sector = FUNC_0(VAR_0, VAR_2);
   }
   else if (VAR_0->track->stream_sector_size)
   {
      VAR_0->first_sector = 0;
      VAR_0->size = (FUNC_1(VAR_0->track->stream) / VAR_0->track->stream_sector_size) * 2048;
   }
   else
   {
      VAR_0->first_sector = -1;
   }

   return (VAR_0->first_sector >= 0);
}
