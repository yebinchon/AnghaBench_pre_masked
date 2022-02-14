
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_33__ {unsigned int min_blocksize; unsigned int max_blocksize; unsigned int max_framesize; unsigned int min_framesize; unsigned int channels; unsigned int bits_per_sample; } ;
struct TYPE_34__ {TYPE_8__ stream_info; } ;
struct TYPE_24__ {TYPE_1__* points; scalar_t__ num_points; } ;
struct TYPE_31__ {TYPE_12__ seek_table; } ;
struct TYPE_32__ {TYPE_6__ data; } ;
struct TYPE_30__ {scalar_t__ state; } ;
struct TYPE_27__ {scalar_t__ sample_number; } ;
struct TYPE_28__ {scalar_t__ number_type; scalar_t__ blocksize; TYPE_2__ number; } ;
struct TYPE_29__ {TYPE_3__ header; } ;
struct TYPE_26__ {scalar_t__ sample_number; scalar_t__ frame_samples; scalar_t__ stream_offset; } ;
struct TYPE_25__ {TYPE_5__* protected_; TYPE_11__* private_; } ;
struct TYPE_22__ {TYPE_9__ data; } ;
struct TYPE_23__ {scalar_t__ first_frame_offset; scalar_t__ (* seek_callback ) (TYPE_13__*,scalar_t__,int ) ;scalar_t__ samples_decoded; TYPE_4__ last_frame; int is_seeking; scalar_t__ unparseable_frame_count; int client_data; scalar_t__ target_sample; TYPE_10__ stream_info; TYPE_7__ seek_table; scalar_t__ has_seek_table; } ;
typedef scalar_t__ FLAC__uint64 ;
typedef scalar_t__ FLAC__int64 ;
typedef int FLAC__bool ;
typedef TYPE_12__ FLAC__StreamMetadata_SeekTable ;
typedef TYPE_13__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_13__*) ;
 unsigned int FUNC_2 (TYPE_13__*) ;
 unsigned int FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (TYPE_13__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (TYPE_13__*) ;
 scalar_t__ FUNC_7 (TYPE_13__*,scalar_t__,int ) ;

FLAC__bool FUNC_8(FLAC__StreamDecoder *VAR_7, FLAC__uint64 VAR_8, FLAC__uint64 VAR_9)
{
 FLAC__uint64 VAR_10 = VAR_7->private_->first_frame_offset, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 FLAC__int64 VAR_16 = -1;
 int VAR_17;
 unsigned VAR_18;
 FLAC__bool VAR_19 = 1;
 const FLAC__uint64 VAR_20 = FUNC_5(VAR_7);
 const unsigned VAR_21 = VAR_7->private_->stream_info.data.stream_info.min_blocksize;
 const unsigned VAR_22 = VAR_7->private_->stream_info.data.stream_info.max_blocksize;
 const unsigned VAR_23 = VAR_7->private_->stream_info.data.stream_info.max_framesize;
 const unsigned VAR_24 = VAR_7->private_->stream_info.data.stream_info.min_framesize;

 unsigned VAR_25 = FUNC_3(VAR_7);
 unsigned VAR_26 = FUNC_2(VAR_7);
 const FLAC__StreamMetadata_SeekTable *VAR_27 = VAR_7->private_->has_seek_table? &VAR_7->private_->seek_table.data.seek_table : 0;


 if(VAR_25 == 0)
  VAR_25 = VAR_7->private_->stream_info.data.stream_info.channels;
 if(VAR_26 == 0)
  VAR_26 = VAR_7->private_->stream_info.data.stream_info.bits_per_sample;


 if(VAR_23 > 0)
  VAR_18 = (VAR_23 + VAR_24) / 2 + 1;






 else if(VAR_21 == VAR_22 && VAR_21 > 0) {

  VAR_18 = VAR_21 * VAR_25 * VAR_26/8 + 64;
 }
 else
  VAR_18 = 4096 * VAR_25 * VAR_26/8 + 64;







 VAR_11 = VAR_10;
 VAR_13 = 0;
 VAR_12 = VAR_8;
 VAR_14 = VAR_20 > 0 ? VAR_20 : VAR_9 ;
 if(VAR_27) {
  FLAC__uint64 VAR_28 = VAR_11;
  FLAC__uint64 VAR_29 = VAR_12;
  FLAC__uint64 VAR_30 = VAR_13;
  FLAC__uint64 VAR_31 = VAR_14;


  for(VAR_17 = (int)VAR_27->num_points - 1; VAR_17 >= 0; VAR_17--) {
   if(
    VAR_27->points[VAR_17].sample_number != VAR_6 &&
    VAR_27->points[VAR_17].frame_samples > 0 &&
    (VAR_20 <= 0 || VAR_27->points[VAR_17].sample_number < VAR_20) &&
    VAR_27->points[VAR_17].sample_number <= VAR_9
   )
    break;
  }
  if(VAR_17 >= 0) {
   VAR_28 = VAR_10 + VAR_27->points[VAR_17].stream_offset;
   VAR_30 = VAR_27->points[VAR_17].sample_number;
  }


  for(VAR_17 = 0; VAR_17 < (int)VAR_27->num_points; VAR_17++) {
   if(
    VAR_27->points[VAR_17].sample_number != VAR_6 &&
    VAR_27->points[VAR_17].frame_samples > 0 &&
    (VAR_20 <= 0 || VAR_27->points[VAR_17].sample_number < VAR_20) &&
    VAR_27->points[VAR_17].sample_number > VAR_9
   )
    break;
  }
  if(VAR_17 < (int)VAR_27->num_points) {
   VAR_29 = VAR_10 + VAR_27->points[VAR_17].stream_offset;
   VAR_31 = VAR_27->points[VAR_17].sample_number;
  }

  if(VAR_29 >= VAR_28) {
   VAR_11 = VAR_28;
   VAR_12 = VAR_29;
   VAR_13 = VAR_30;
   VAR_14 = VAR_31;
  }
 }

 FUNC_0(VAR_14 >= VAR_13);
 if(VAR_14 == VAR_13)
  VAR_14++;

 VAR_7->private_->target_sample = VAR_9;
 while(1) {

  if (VAR_13 >= VAR_14 || VAR_11 > VAR_12) {
   VAR_7->protected_->state = VAR_4;
   return 0;
  }

  VAR_16 = (FLAC__int64)VAR_11 + (FLAC__int64)((double)(VAR_9 - VAR_13) / (double)(VAR_14 - VAR_13) * (double)(VAR_12 - VAR_11)) - VAR_18;







  if(VAR_16 >= (FLAC__int64)VAR_12)
   VAR_16 = (FLAC__int64)VAR_12 - 1;
  if(VAR_16 < (FLAC__int64)VAR_11)
   VAR_16 = (FLAC__int64)VAR_11;
  if(VAR_7->private_->seek_callback(VAR_7, (FLAC__uint64)VAR_16, VAR_7->private_->client_data) != VAR_5) {
   VAR_7->protected_->state = VAR_4;
   return 0;
  }
  if(!FUNC_1(VAR_7)) {

   return 0;
  }






  VAR_7->private_->unparseable_frame_count = 0;
  if(!FUNC_6(VAR_7) ||
     VAR_7->protected_->state == VAR_2) {
   VAR_7->protected_->state = VAR_4;
   return 0;
  }







  if(!VAR_7->private_->is_seeking)
   break;

  FUNC_0(VAR_7->private_->last_frame.header.number_type == VAR_0);
  VAR_15 = VAR_7->private_->last_frame.header.number.sample_number;

  if (0 == VAR_7->private_->samples_decoded || (VAR_15 + VAR_7->private_->last_frame.header.blocksize >= VAR_14 && !VAR_19)) {
   if (VAR_16 == (FLAC__int64)VAR_11) {

    VAR_7->protected_->state = VAR_4;
    return 0;
   }

   VAR_18 = VAR_18? VAR_18 * 2 : 16;
   continue;
  }

  VAR_19 = 0;


  if (VAR_15 < VAR_13) {
   VAR_7->protected_->state = VAR_4;
   return 0;
  }


  if(VAR_9 < VAR_15) {
   VAR_14 = VAR_15 + VAR_7->private_->last_frame.header.blocksize;

   if(!FUNC_4(VAR_7, &VAR_12)) {
    VAR_7->protected_->state = VAR_4;
    return 0;
   }
   VAR_18 = (unsigned)(2 * (VAR_12 - VAR_16) / 3 + 16);
  }
  else {
   VAR_13 = VAR_15 + VAR_7->private_->last_frame.header.blocksize;
   if(!FUNC_4(VAR_7, &VAR_11)) {
    VAR_7->protected_->state = VAR_4;
    return 0;
   }
   VAR_18 = (unsigned)(2 * (VAR_11 - VAR_16) / 3 + 16);
  }
 }

 return 1;
}
