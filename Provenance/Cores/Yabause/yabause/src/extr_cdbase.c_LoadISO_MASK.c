
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctl_addr; int fad_start; int file_size; int sector_size; int fad_end; scalar_t__ file_id; int * fp; scalar_t__ file_offset; } ;
typedef TYPE_1__ track_info_struct ;
typedef int session_info_struct ;
struct TYPE_7__ {int session_num; TYPE_3__* session; } ;
struct TYPE_6__ {int fad_start; int track_num; int fad_end; TYPE_1__* track; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(FILE *VAR_4)
{
   track_info_struct *VAR_5;

   VAR_3.session_num = 1;
   VAR_3.session = FUNC_4(sizeof(session_info_struct) * VAR_3.session_num);
   if (VAR_3.session == ((void*)0))
   {
      FUNC_0(VAR_1, ((void*)0));
      return -1;
   }

   VAR_3.session[0].fad_start = 150;
   VAR_3.session[0].track_num = 1;
   VAR_3.session[0].track = FUNC_4(sizeof(track_info_struct) * VAR_3.session[0].track_num);
   if (VAR_3.session[0].track == ((void*)0))
   {
      FUNC_0(VAR_1, ((void*)0));
      FUNC_1(VAR_3.session);
      VAR_3.session = ((void*)0);
      return -1;
   }

 FUNC_5(VAR_3.session[0].track, 0, sizeof(track_info_struct) * VAR_3.session[0].track_num);

   VAR_5 = VAR_3.session[0].track;
   VAR_5->ctl_addr = 0x41;
   VAR_5->fad_start = 150;
   VAR_5->file_offset = 0;
   VAR_5->fp = VAR_4;
   FUNC_2(VAR_4, 0, VAR_0);
   VAR_5->file_size = FUNC_3(VAR_4);
   VAR_5->file_id = 0;

   if (0 == (VAR_5->file_size % 2048))
      VAR_5->sector_size = 2048;
   else if (0 == (VAR_5->file_size % 2352))
      VAR_5->sector_size = 2352;
   else
   {
      FUNC_0(VAR_2, "Unsupported CD image!\n");
      return -1;
   }

   VAR_3.session[0].fad_end = VAR_5->fad_end = VAR_3.session[0].fad_start + (VAR_5->file_size / VAR_5->sector_size);

   return 0;
}
