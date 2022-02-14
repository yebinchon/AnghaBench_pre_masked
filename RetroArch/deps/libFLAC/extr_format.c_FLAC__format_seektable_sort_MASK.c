
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sample_number; scalar_t__ frame_samples; scalar_t__ stream_offset; } ;
struct TYPE_4__ {unsigned int num_points; TYPE_2__* points; } ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__StreamMetadata_SeekTable ;
typedef int FLAC__StreamMetadata_SeekPoint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,unsigned int,int,int (*) (void const*,void const*)) ;
 scalar_t__ VAR_1 ;

unsigned FUNC_2(FLAC__StreamMetadata_SeekTable *VAR_2)
{
 unsigned VAR_3, VAR_4;
 FLAC__bool VAR_5;

 FUNC_0(0 != VAR_2);

 if (VAR_2->num_points == 0)
  return 0;


 FUNC_1(VAR_2->points, VAR_2->num_points, sizeof(FLAC__StreamMetadata_SeekPoint), (int (*)(const void *, const void *))VAR_1);


 VAR_5 = 1;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_2->num_points; VAR_3++) {
  if(VAR_2->points[VAR_3].sample_number != VAR_0) {
   if(!VAR_5) {
    if(VAR_2->points[VAR_3].sample_number == VAR_2->points[VAR_4-1].sample_number)
     continue;
   }
  }
  VAR_5 = 0;
  VAR_2->points[VAR_4++] = VAR_2->points[VAR_3];
 }

 for(VAR_3 = VAR_4; VAR_3 < VAR_2->num_points; VAR_3++) {
  VAR_2->points[VAR_3].sample_number = VAR_0;
  VAR_2->points[VAR_3].stream_offset = 0;
  VAR_2->points[VAR_3].frame_samples = 0;
 }

 return VAR_4;
}
