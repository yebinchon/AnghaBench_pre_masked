
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int pregap_sectors; unsigned int stream_sector_size; scalar_t__ stream_sector_header_size; int stream; } ;
typedef TYPE_1__ cdfs_track_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(cdfs_track_t* VAR_1, unsigned int VAR_2)
{
   FUNC_0(VAR_1->stream, (VAR_2 + VAR_1->pregap_sectors) * VAR_1->stream_sector_size + VAR_1->stream_sector_header_size, VAR_0);
}
