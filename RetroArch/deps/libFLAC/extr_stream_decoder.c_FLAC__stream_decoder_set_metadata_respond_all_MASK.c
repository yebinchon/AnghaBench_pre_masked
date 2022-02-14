
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* private_; TYPE_2__* protected_; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int* metadata_filter; scalar_t__ metadata_filter_ids_count; } ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

FLAC__bool FUNC_1(FLAC__StreamDecoder *VAR_1)
{
 unsigned VAR_2;
 FUNC_0(0 != VAR_1);
 FUNC_0(0 != VAR_1->private_);
 FUNC_0(0 != VAR_1->protected_);
 if(VAR_1->protected_->state != VAR_0)
  return 0;
 for(VAR_2 = 0; VAR_2 < sizeof(VAR_1->private_->metadata_filter) / sizeof(VAR_1->private_->metadata_filter[0]); VAR_2++)
  VAR_1->private_->metadata_filter[VAR_2] = 1;
 VAR_1->private_->metadata_filter_ids_count = 0;
 return 1;
}
