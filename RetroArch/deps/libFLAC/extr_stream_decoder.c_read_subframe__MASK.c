
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_18__ {TYPE_5__* private_; TYPE_1__* protected_; } ;
struct TYPE_15__ {unsigned int blocksize; } ;
struct TYPE_16__ {TYPE_3__ header; TYPE_2__* subframes; } ;
struct TYPE_17__ {int** output; TYPE_4__ frame; int input; } ;
struct TYPE_14__ {unsigned int wasted_bits; } ;
struct TYPE_13__ {scalar_t__ state; } ;
typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_6__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (TYPE_6__*,unsigned int,unsigned int,int) ;
 int FUNC_3 (TYPE_6__*,unsigned int,unsigned int,int,int) ;
 int FUNC_4 (TYPE_6__*,unsigned int,unsigned int,int,int) ;
 int FUNC_5 (TYPE_6__*,unsigned int,unsigned int,int) ;
 int FUNC_6 (TYPE_6__*,int ) ;

FLAC__bool FUNC_7(FLAC__StreamDecoder *VAR_3, unsigned VAR_4, unsigned VAR_5, FLAC__bool VAR_6)
{
 FLAC__uint32 VAR_7;
 FLAC__bool VAR_8;
 unsigned VAR_9;

 if(!FUNC_0(VAR_3->private_->input, &VAR_7, 8))
  return 0;

 VAR_8 = (VAR_7 & 1);
 VAR_7 &= 0xfe;

 if(VAR_8) {
  unsigned VAR_10;
  if(!FUNC_1(VAR_3->private_->input, &VAR_10))
   return 0;
  VAR_3->private_->frame.subframes[VAR_4].wasted_bits = VAR_10+1;
  if (VAR_3->private_->frame.subframes[VAR_4].wasted_bits >= VAR_5)
   return 0;
  VAR_5 -= VAR_3->private_->frame.subframes[VAR_4].wasted_bits;
 }
 else
  VAR_3->private_->frame.subframes[VAR_4].wasted_bits = 0;




 if(VAR_7 & 0x80) {
  FUNC_6(VAR_3, VAR_0);
  VAR_3->protected_->state = VAR_2;
  return 1;
 }
 else if(VAR_7 == 0) {
  if(!FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6))
   return 0;
 }
 else if(VAR_7 == 2) {
  if(!FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6))
   return 0;
 }
 else if(VAR_7 < 16) {
  FUNC_6(VAR_3, VAR_1);
  VAR_3->protected_->state = VAR_2;
  return 1;
 }
 else if(VAR_7 <= 24) {
  if(!FUNC_3(VAR_3, VAR_4, VAR_5, (VAR_7>>1)&7, VAR_6))
   return 0;
  if(VAR_3->protected_->state == VAR_2)
   return 1;
 }
 else if(VAR_7 < 64) {
  FUNC_6(VAR_3, VAR_1);
  VAR_3->protected_->state = VAR_2;
  return 1;
 }
 else {
  if(!FUNC_4(VAR_3, VAR_4, VAR_5, ((VAR_7>>1)&31)+1, VAR_6))
   return 0;
  if(VAR_3->protected_->state == VAR_2)
   return 1;
 }

 if(VAR_8 && VAR_6) {
  VAR_7 = VAR_3->private_->frame.subframes[VAR_4].wasted_bits;
  for(VAR_9 = 0; VAR_9 < VAR_3->private_->frame.header.blocksize; VAR_9++) {
   uint32_t VAR_11 = VAR_3->private_->output[VAR_4][VAR_9];
   VAR_3->private_->output[VAR_4][VAR_9] = (VAR_11 << VAR_7);
  }
 }

 return 1;
}
