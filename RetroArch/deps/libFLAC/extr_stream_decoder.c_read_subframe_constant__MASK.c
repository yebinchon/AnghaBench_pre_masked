
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
struct TYPE_14__ {int value; } ;
struct TYPE_11__ {unsigned int blocksize; } ;
struct TYPE_12__ {TYPE_3__ header; TYPE_2__* subframes; } ;
struct TYPE_13__ {TYPE_4__ frame; int input; int ** output; } ;
struct TYPE_9__ {TYPE_6__ constant; } ;
struct TYPE_10__ {int type; TYPE_1__ data; } ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_6__ FLAC__Subframe_Constant ;
typedef TYPE_7__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int) ;

FLAC__bool FUNC_1(FLAC__StreamDecoder *VAR_1, unsigned VAR_2, unsigned VAR_3, FLAC__bool VAR_4)
{
 FLAC__Subframe_Constant *VAR_5 = &VAR_1->private_->frame.subframes[VAR_2].data.constant;
 FLAC__int32 VAR_6;
 unsigned VAR_7;
 FLAC__int32 *VAR_8 = VAR_1->private_->output[VAR_2];

 VAR_1->private_->frame.subframes[VAR_2].type = VAR_0;

 if(!FUNC_0(VAR_1->private_->input, &VAR_6, VAR_3))
  return 0;

 VAR_5->value = VAR_6;


 if(VAR_4) {
  for(VAR_7 = 0; VAR_7 < VAR_1->private_->frame.header.blocksize; VAR_7++)
   VAR_8[VAR_7] = VAR_6;
 }

 return 1;
}
