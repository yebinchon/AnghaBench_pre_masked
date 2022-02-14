
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_6__ {int md5_checking; int ogg_decoder_aspect; } ;
struct TYPE_5__ {int is_ogg; int* metadata_filter; scalar_t__ metadata_filter_ids_count; scalar_t__ client_data; scalar_t__ error_callback; scalar_t__ metadata_callback; scalar_t__ write_callback; scalar_t__ eof_callback; scalar_t__ length_callback; scalar_t__ tell_callback; scalar_t__ seek_callback; scalar_t__ read_callback; } ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(FLAC__StreamDecoder *VAR_1)
{
 VAR_1->private_->is_ogg = 0;
 VAR_1->private_->read_callback = 0;
 VAR_1->private_->seek_callback = 0;
 VAR_1->private_->tell_callback = 0;
 VAR_1->private_->length_callback = 0;
 VAR_1->private_->eof_callback = 0;
 VAR_1->private_->write_callback = 0;
 VAR_1->private_->metadata_callback = 0;
 VAR_1->private_->error_callback = 0;
 VAR_1->private_->client_data = 0;

 FUNC_1(VAR_1->private_->metadata_filter, 0, sizeof(VAR_1->private_->metadata_filter));
 VAR_1->private_->metadata_filter[VAR_0] = 1;
 VAR_1->private_->metadata_filter_ids_count = 0;

 VAR_1->protected_->md5_checking = 0;




}
