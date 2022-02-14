
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
typedef size_t FLAC__MetadataType ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

FLAC__bool FUNC_1(FLAC__StreamDecoder *VAR_3, FLAC__MetadataType VAR_4)
{
 FUNC_0(0 != VAR_3);
 FUNC_0(0 != VAR_3->private_);
 FUNC_0(0 != VAR_3->protected_);
 FUNC_0((unsigned)VAR_4 <= VAR_0);

 if((unsigned)VAR_4 > VAR_0)
  return 0;
 if(VAR_3->protected_->state != VAR_2)
  return 0;
 VAR_3->private_->metadata_filter[VAR_4] = 1;
 if(VAR_4 == VAR_1)
  VAR_3->private_->metadata_filter_ids_count = 0;
 return 1;
}
