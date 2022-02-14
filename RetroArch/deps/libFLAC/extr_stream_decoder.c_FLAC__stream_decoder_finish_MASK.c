
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_20__ {TYPE_8__* protected_; TYPE_7__* private_; } ;
struct TYPE_19__ {scalar_t__ state; int ogg_decoder_aspect; } ;
struct TYPE_15__ {int md5sum; } ;
struct TYPE_16__ {TYPE_4__ stream_info; } ;
struct TYPE_17__ {TYPE_5__ data; } ;
struct TYPE_12__ {scalar_t__ points; } ;
struct TYPE_13__ {TYPE_1__ seek_table; } ;
struct TYPE_14__ {TYPE_2__ data; } ;
struct TYPE_18__ {int has_seek_table; scalar_t__* output; scalar_t__* residual_unaligned; scalar_t__* residual; scalar_t__ file; int is_seeking; int computed_md5sum; TYPE_6__ stream_info; scalar_t__ do_md5_checking; scalar_t__ is_ogg; scalar_t__ output_channels; scalar_t__ output_capacity; int input; TYPE_3__ seek_table; int md5context; } ;
typedef int FLAC__bool ;
typedef TYPE_9__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_9__*) ;
 scalar_t__ VAR_2 ;

FLAC__bool FUNC_8(FLAC__StreamDecoder *VAR_3)
{
 FLAC__bool VAR_4 = 0;
 unsigned VAR_5;

 FUNC_0(0 != VAR_3);
 FUNC_0(0 != VAR_3->private_);
 FUNC_0(0 != VAR_3->protected_);

 if(VAR_3->protected_->state == VAR_1)
  return 1;




 FUNC_1(VAR_3->private_->computed_md5sum, &VAR_3->private_->md5context);

 FUNC_5(VAR_3->private_->seek_table.data.seek_table.points);
 VAR_3->private_->seek_table.data.seek_table.points = 0;
 VAR_3->private_->has_seek_table = 0;

 FUNC_2(VAR_3->private_->input);
 for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {






  if(0 != VAR_3->private_->output[VAR_5]) {
   FUNC_5(VAR_3->private_->output[VAR_5]-4);
   VAR_3->private_->output[VAR_5] = 0;
  }
  if(0 != VAR_3->private_->residual_unaligned[VAR_5]) {
   FUNC_5(VAR_3->private_->residual_unaligned[VAR_5]);
   VAR_3->private_->residual_unaligned[VAR_5] = VAR_3->private_->residual[VAR_5] = 0;
  }
 }
 VAR_3->private_->output_capacity = 0;
 VAR_3->private_->output_channels = 0;






 if(0 != VAR_3->private_->file) {
  if(VAR_3->private_->file != VAR_2)
   FUNC_4(VAR_3->private_->file);
  VAR_3->private_->file = 0;
 }

 if(VAR_3->private_->do_md5_checking) {
  if(FUNC_6(VAR_3->private_->stream_info.data.stream_info.md5sum, VAR_3->private_->computed_md5sum, 16))
   VAR_4 = 1;
 }
 VAR_3->private_->is_seeking = 0;

 FUNC_7(VAR_3);

 VAR_3->protected_->state = VAR_1;

 return !VAR_4;
}
