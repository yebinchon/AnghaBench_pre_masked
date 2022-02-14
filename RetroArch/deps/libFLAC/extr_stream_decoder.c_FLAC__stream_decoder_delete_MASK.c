
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ input; scalar_t__ metadata_filter_ids; struct TYPE_5__* protected_; struct TYPE_5__* private_; int * partitioned_rice_contents; } ;
typedef TYPE_1__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(FLAC__StreamDecoder *VAR_1)
{
 unsigned VAR_2;

 if (VAR_1 == ((void*)0))
  return ;

 FUNC_0(0 != VAR_1->protected_);
 FUNC_0(0 != VAR_1->private_);
 FUNC_0(0 != VAR_1->private_->input);

 (void)FUNC_3(VAR_1);

 if(0 != VAR_1->private_->metadata_filter_ids)
  FUNC_4(VAR_1->private_->metadata_filter_ids);

 FUNC_1(VAR_1->private_->input);

 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(&VAR_1->private_->partitioned_rice_contents[VAR_2]);

 FUNC_4(VAR_1->private_);
 FUNC_4(VAR_1->protected_);
 FUNC_4(VAR_1);
}
