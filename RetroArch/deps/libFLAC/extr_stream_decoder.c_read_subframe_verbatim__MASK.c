
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* private_; } ;
struct TYPE_14__ {int * data; } ;
struct TYPE_11__ {unsigned int blocksize; } ;
struct TYPE_12__ {TYPE_3__ header; TYPE_2__* subframes; } ;
struct TYPE_13__ {TYPE_4__ frame; int * output; int input; int ** residual; } ;
struct TYPE_9__ {TYPE_6__ verbatim; } ;
struct TYPE_10__ {int type; TYPE_1__ data; } ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_6__ FLAC__Subframe_Verbatim ;
typedef TYPE_7__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int) ;
 int FUNC_1 (int ,int *,int) ;

FLAC__bool FUNC_2(FLAC__StreamDecoder *VAR_1, unsigned VAR_2, unsigned VAR_3, FLAC__bool VAR_4)
{
 FLAC__Subframe_Verbatim *VAR_5 = &VAR_1->private_->frame.subframes[VAR_2].data.verbatim;
 FLAC__int32 VAR_6, *VAR_7 = VAR_1->private_->residual[VAR_2];
 unsigned VAR_8;

 VAR_1->private_->frame.subframes[VAR_2].type = VAR_0;

 VAR_5->data = VAR_7;

 for(VAR_8 = 0; VAR_8 < VAR_1->private_->frame.header.blocksize; VAR_8++) {
  if(!FUNC_0(VAR_1->private_->input, &VAR_6, VAR_3))
   return 0;
  VAR_7[VAR_8] = VAR_6;
 }


 if(VAR_4)
  FUNC_1(VAR_1->private_->output[VAR_2], VAR_5->data, sizeof(FLAC__int32) * VAR_1->private_->frame.header.blocksize);

 return 1;
}
