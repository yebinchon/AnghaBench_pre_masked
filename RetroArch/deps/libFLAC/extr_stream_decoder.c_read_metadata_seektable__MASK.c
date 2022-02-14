
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* private_; TYPE_1__* protected_; } ;
struct TYPE_15__ {size_t frame_samples; void* stream_offset; void* sample_number; } ;
struct TYPE_11__ {unsigned int num_points; TYPE_6__* points; } ;
struct TYPE_12__ {TYPE_2__ seek_table; } ;
struct TYPE_13__ {int is_last; unsigned int length; TYPE_3__ data; int type; } ;
struct TYPE_14__ {int input; TYPE_4__ seek_table; } ;
struct TYPE_10__ {int state; } ;
typedef void* FLAC__uint64 ;
typedef size_t FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_6__ FLAC__StreamMetadata_SeekPoint ;
typedef TYPE_7__ FLAC__StreamDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t*,int ) ;
 int FUNC_3 (int ,void**,int ) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,unsigned int,int) ;

FLAC__bool FUNC_6(FLAC__StreamDecoder *VAR_6, FLAC__bool VAR_7, unsigned VAR_8)
{
 FLAC__uint32 VAR_9, VAR_10;
 FLAC__uint64 VAR_11;

 FUNC_0(FUNC_1(VAR_6->private_->input));

 VAR_6->private_->seek_table.type = VAR_0;
 VAR_6->private_->seek_table.is_last = VAR_7;
 VAR_6->private_->seek_table.length = VAR_8;

 VAR_6->private_->seek_table.data.seek_table.num_points = VAR_8 / VAR_3;


 if(0 == (VAR_6->private_->seek_table.data.seek_table.points = (FLAC__StreamMetadata_SeekPoint*)FUNC_5(VAR_6->private_->seek_table.data.seek_table.points, VAR_6->private_->seek_table.data.seek_table.num_points, sizeof(FLAC__StreamMetadata_SeekPoint)))) {
  VAR_6->protected_->state = VAR_1;
  return 0;
 }
 for(VAR_9 = 0; VAR_9 < VAR_6->private_->seek_table.data.seek_table.num_points; VAR_9++) {
  if(!FUNC_3(VAR_6->private_->input, &VAR_11, VAR_4))
   return 0;
  VAR_6->private_->seek_table.data.seek_table.points[VAR_9].sample_number = VAR_11;

  if(!FUNC_3(VAR_6->private_->input, &VAR_11, VAR_5))
   return 0;
  VAR_6->private_->seek_table.data.seek_table.points[VAR_9].stream_offset = VAR_11;

  if(!FUNC_2(VAR_6->private_->input, &VAR_10, VAR_2))
   return 0;
  VAR_6->private_->seek_table.data.seek_table.points[VAR_9].frame_samples = VAR_10;
 }
 VAR_8 -= (VAR_6->private_->seek_table.data.seek_table.num_points * VAR_3);

 if(VAR_8 > 0) {

  if(!FUNC_4(VAR_6->private_->input, VAR_8))
   return 0;
 }

 return 1;
}
