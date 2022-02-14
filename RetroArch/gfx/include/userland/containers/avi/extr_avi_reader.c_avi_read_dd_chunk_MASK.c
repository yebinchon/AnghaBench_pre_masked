
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {int extra_chunk_data_len; scalar_t__ extra_chunk_track_num; scalar_t__ extra_chunk_data_offs; int extra_chunk_data; } ;
typedef TYPE_1__ AVI_TRACK_STREAM_STATE_T ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char,char) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_4,
   AVI_TRACK_STREAM_STATE_T *VAR_5, uint16_t VAR_6, uint32_t VAR_7,
   uint16_t VAR_8 )
{
   if (VAR_6 == FUNC_1('d','d'))
   {
      if (VAR_5->extra_chunk_data_len ||
          VAR_7 > sizeof(VAR_5->extra_chunk_data))
      {
         FUNC_2(VAR_4, "cannot handle multiple consecutive 'dd' chunks");
         return VAR_2;
      }
      if(FUNC_3(VAR_4, VAR_5->extra_chunk_data, VAR_7) != VAR_7)
         return VAR_1;

      FUNC_0(VAR_4);
      VAR_5->extra_chunk_track_num = VAR_8;
      VAR_5->extra_chunk_data_len = VAR_7;
      VAR_5->extra_chunk_data_offs = 0;

      return VAR_0;
   }
   else if (VAR_5->extra_chunk_data_len &&
      VAR_5->extra_chunk_track_num != VAR_8)
   {
      FUNC_2(VAR_4, "dropping data from '%02ddd' chunk, not for this track (%d)",
         VAR_5->extra_chunk_track_num, VAR_8);
      VAR_5->extra_chunk_data_len = 0;
   }

   return VAR_3;
}
