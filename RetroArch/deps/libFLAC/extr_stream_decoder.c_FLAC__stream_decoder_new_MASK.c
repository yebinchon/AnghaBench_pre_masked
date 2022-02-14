
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ input; int metadata_filter_ids_capacity; int has_seek_table; int state; struct TYPE_7__* protected_; scalar_t__ file; struct TYPE_7__* private_; int * partitioned_rice_contents; scalar_t__ output_channels; scalar_t__ output_capacity; scalar_t__* residual; scalar_t__* residual_unaligned; scalar_t__* output; int * metadata_filter_ids; } ;
typedef int FLAC__byte ;
typedef TYPE_1__ FLAC__StreamDecoderProtected ;
typedef TYPE_1__ FLAC__StreamDecoderPrivate ;
typedef TYPE_1__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;

FLAC__StreamDecoder *FUNC_8(void)
{
 FLAC__StreamDecoder *VAR_3;
 unsigned VAR_4;

 FUNC_0(sizeof(int) >= 4);

 VAR_3 = (FLAC__StreamDecoder*)FUNC_4(1, sizeof(FLAC__StreamDecoder));
 if(VAR_3 == 0) {
  return 0;
 }

 VAR_3->protected_ = (FLAC__StreamDecoderProtected*)FUNC_4(1, sizeof(FLAC__StreamDecoderProtected));
 if(VAR_3->protected_ == 0) {
  FUNC_5(VAR_3);
  return 0;
 }

 VAR_3->private_ = (FLAC__StreamDecoderPrivate*)FUNC_4(1, sizeof(FLAC__StreamDecoderPrivate));
 if(VAR_3->private_ == 0) {
  FUNC_5(VAR_3->protected_);
  FUNC_5(VAR_3);
  return 0;
 }

 VAR_3->private_->input = FUNC_2();
 if(VAR_3->private_->input == 0) {
  FUNC_5(VAR_3->private_);
  FUNC_5(VAR_3->protected_);
  FUNC_5(VAR_3);
  return 0;
 }

 VAR_3->private_->metadata_filter_ids_capacity = 16;
 if(0 == (VAR_3->private_->metadata_filter_ids = (FLAC__byte*)FUNC_6((VAR_2/8) * VAR_3->private_->metadata_filter_ids_capacity))) {
  FUNC_1(VAR_3->private_->input);
  FUNC_5(VAR_3->private_);
  FUNC_5(VAR_3->protected_);
  FUNC_5(VAR_3);
  return 0;
 }

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->private_->output[VAR_4] = 0;
  VAR_3->private_->residual_unaligned[VAR_4] = VAR_3->private_->residual[VAR_4] = 0;
 }

 VAR_3->private_->output_capacity = 0;
 VAR_3->private_->output_channels = 0;
 VAR_3->private_->has_seek_table = 0;

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_3(&VAR_3->private_->partitioned_rice_contents[VAR_4]);

 VAR_3->private_->file = 0;

 FUNC_7(VAR_3);

 VAR_3->protected_->state = VAR_1;

 return VAR_3;
}
