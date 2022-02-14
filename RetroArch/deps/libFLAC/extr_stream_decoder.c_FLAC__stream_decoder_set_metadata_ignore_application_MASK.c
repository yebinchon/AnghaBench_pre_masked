
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* private_; TYPE_1__* protected_; } ;
struct TYPE_6__ {int metadata_filter_ids_count; int metadata_filter_ids_capacity; int * metadata_filter_ids; int * metadata_filter; } ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef int FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int const*,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;

FLAC__bool FUNC_3(FLAC__StreamDecoder *VAR_4, const FLAC__byte VAR_5[4])
{
 FUNC_0(0 != VAR_4);
 FUNC_0(0 != VAR_4->private_);
 FUNC_0(0 != VAR_4->protected_);
 FUNC_0(0 != VAR_5);
 if(VAR_4->protected_->state != VAR_2)
  return 0;

 if(!VAR_4->private_->metadata_filter[VAR_0])
  return 1;

 FUNC_0(0 != VAR_4->private_->metadata_filter_ids);

 if(VAR_4->private_->metadata_filter_ids_count == VAR_4->private_->metadata_filter_ids_capacity) {
  if(0 == (VAR_4->private_->metadata_filter_ids = (FLAC__byte*)FUNC_2(VAR_4->private_->metadata_filter_ids, VAR_4->private_->metadata_filter_ids_capacity, 2))) {
   VAR_4->protected_->state = VAR_1;
   return 0;
  }
  VAR_4->private_->metadata_filter_ids_capacity *= 2;
 }

 FUNC_1(VAR_4->private_->metadata_filter_ids + VAR_4->private_->metadata_filter_ids_count * (VAR_3/8), VAR_5, (VAR_3/8));
 VAR_4->private_->metadata_filter_ids_count++;

 return 1;
}
