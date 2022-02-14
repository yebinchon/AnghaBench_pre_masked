
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int intfstream_t ;
struct TYPE_4__ {unsigned int pregap_sectors; int * stream; } ;
typedef TYPE_1__ cdfs_track_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static cdfs_track_t* FUNC_2(intfstream_t* VAR_0, unsigned VAR_1)
{
   cdfs_track_t* VAR_2;

   if (VAR_0 == ((void*)0))
      return ((void*)0);

   VAR_2 = (cdfs_track_t*)FUNC_0(1, sizeof(*VAR_2));
   VAR_2->stream = VAR_0;
   VAR_2->pregap_sectors = VAR_1;
   FUNC_1(VAR_2);
   return VAR_2;
}
