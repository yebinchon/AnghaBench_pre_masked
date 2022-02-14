
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* private_; TYPE_4__* protected_; } ;
struct TYPE_10__ {scalar_t__ points; } ;
struct TYPE_11__ {TYPE_1__ seek_table; } ;
struct TYPE_12__ {TYPE_2__ data; } ;
struct TYPE_14__ {int internal_reset_hack; scalar_t__ file; scalar_t__ (* seek_callback ) (TYPE_6__*,int ,int ) ;int has_stream_info; int has_seek_table; scalar_t__ unparseable_frame_count; scalar_t__ first_frame_offset; int md5context; scalar_t__ next_fixed_block_size; scalar_t__ fixed_block_size; int do_md5_checking; TYPE_3__ seek_table; int client_data; scalar_t__ is_ogg; } ;
struct TYPE_13__ {int md5_checking; int state; int ogg_decoder_aspect; } ;
typedef int FLAC__bool ;
typedef TYPE_6__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_6__*,int ,int ) ;

FLAC__bool FUNC_6(FLAC__StreamDecoder *VAR_3)
{
 FUNC_0(0 != VAR_3);
 FUNC_0(0 != VAR_3->private_);
 FUNC_0(0 != VAR_3->protected_);

 if(!FUNC_3(VAR_3)) {

  return 0;
 }
 if(!VAR_3->private_->internal_reset_hack) {
  if(VAR_3->private_->file == VAR_2)
   return 0;
  if(VAR_3->private_->seek_callback && VAR_3->private_->seek_callback(VAR_3, 0, VAR_3->private_->client_data) == VAR_1)
   return 0;
 }
 else
  VAR_3->private_->internal_reset_hack = 0;

 VAR_3->protected_->state = VAR_0;

 VAR_3->private_->has_stream_info = 0;

 FUNC_4(VAR_3->private_->seek_table.data.seek_table.points);
 VAR_3->private_->seek_table.data.seek_table.points = 0;
 VAR_3->private_->has_seek_table = 0;

 VAR_3->private_->do_md5_checking = VAR_3->protected_->md5_checking;




 VAR_3->private_->fixed_block_size = VAR_3->private_->next_fixed_block_size = 0;







 FUNC_1(&VAR_3->private_->md5context);

 VAR_3->private_->first_frame_offset = 0;
 VAR_3->private_->unparseable_frame_count = 0;

 return 1;
}
