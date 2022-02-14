
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sample_number; } ;
typedef TYPE_1__ FLAC__StreamMetadata_SeekPoint ;



__attribute__((used)) static int FUNC_0(const FLAC__StreamMetadata_SeekPoint *VAR_0, const FLAC__StreamMetadata_SeekPoint *VAR_1)
{

 if(VAR_0->sample_number == VAR_1->sample_number)
  return 0;
 else if(VAR_0->sample_number < VAR_1->sample_number)
  return -1;
 else
  return 1;
}
