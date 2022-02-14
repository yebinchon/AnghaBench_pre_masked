
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num_points; TYPE_1__* points; } ;
struct TYPE_4__ {scalar_t__ sample_number; } ;
typedef scalar_t__ FLAC__uint64 ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamMetadata_SeekTable ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

FLAC__bool FUNC_1(const FLAC__StreamMetadata_SeekTable *VAR_1)
{
 unsigned VAR_2;
 FLAC__uint64 VAR_3 = 0;
 FLAC__bool VAR_4 = 0;

 FUNC_0(0 != VAR_1);

 for(VAR_2 = 0; VAR_2 < VAR_1->num_points; VAR_2++) {
  if(VAR_4) {
   if(
    VAR_1->points[VAR_2].sample_number != VAR_0 &&
    VAR_1->points[VAR_2].sample_number <= VAR_3
   )
    return 0;
  }
  VAR_3 = VAR_1->points[VAR_2].sample_number;
  VAR_4 = 1;
 }

 return 1;
}
