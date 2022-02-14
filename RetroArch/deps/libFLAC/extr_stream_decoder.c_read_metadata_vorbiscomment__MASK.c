
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


struct TYPE_15__ {TYPE_3__* private_; TYPE_2__* protected_; } ;
struct TYPE_10__ {int length; char* entry; } ;
struct TYPE_14__ {int num_comments; TYPE_4__* comments; TYPE_1__ vendor_string; } ;
struct TYPE_13__ {int length; char* entry; } ;
struct TYPE_12__ {int input; } ;
struct TYPE_11__ {void* state; } ;
typedef size_t FLAC__uint32 ;
typedef char FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_4__ FLAC__StreamMetadata_VorbisComment_Entry ;
typedef TYPE_5__ FLAC__StreamMetadata_VorbisComment ;
typedef TYPE_6__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;
 scalar_t__ FUNC_8 (int,int) ;

FLAC__bool FUNC_9(FLAC__StreamDecoder *VAR_3, FLAC__StreamMetadata_VorbisComment *VAR_4, unsigned VAR_5)
{
 FLAC__uint32 VAR_6;

 FUNC_0(FUNC_1(VAR_3->private_->input));


 if (VAR_5 >= 8) {
  VAR_5 -= 8;
  FUNC_0(VAR_1 == 32);
  if (!FUNC_3(VAR_3->private_->input, &VAR_4->vendor_string.length))
   return 0;
  if (VAR_4->vendor_string.length > 0) {
   if (VAR_5 < VAR_4->vendor_string.length) {
    VAR_4->vendor_string.length = 0;
    VAR_4->vendor_string.entry = 0;
    goto skip;
   }
   else
    VAR_5 -= VAR_4->vendor_string.length;
   if (0 == (VAR_4->vendor_string.entry = (FLAC__byte*)FUNC_7(VAR_4->vendor_string.length, 1))) {
    VAR_3->protected_->state = VAR_0;
    return 0;
   }
   if (!FUNC_2(VAR_3->private_->input, VAR_4->vendor_string.entry, VAR_4->vendor_string.length))
    return 0;
   VAR_4->vendor_string.entry[VAR_4->vendor_string.length] = '\0';
  }
  else
   VAR_4->vendor_string.entry = 0;


  FUNC_0(VAR_2 == 32);
  if (!FUNC_3(VAR_3->private_->input, &VAR_4->num_comments))
   return 0;


  if (VAR_4->num_comments > 100000) {

   VAR_4->num_comments = 0;
   return 0;
  }
  if (VAR_4->num_comments > 0) {
   if (0 == (VAR_4->comments = (FLAC__StreamMetadata_VorbisComment_Entry*)FUNC_8(VAR_4->num_comments, sizeof(FLAC__StreamMetadata_VorbisComment_Entry)))) {
    VAR_4->num_comments = 0;
    VAR_3->protected_->state = VAR_0;
    return 0;
   }
   for (VAR_6 = 0; VAR_6 < VAR_4->num_comments; VAR_6++) {

    VAR_4->comments[VAR_6].length = 0;
    VAR_4->comments[VAR_6].entry = 0;

    FUNC_0(VAR_1 == 32);
    if (VAR_5 < 4) {
     VAR_4->num_comments = VAR_6;
     goto skip;
    }
    else
     VAR_5 -= 4;
    if (!FUNC_3(VAR_3->private_->input, &VAR_4->comments[VAR_6].length)) {
     VAR_4->num_comments = VAR_6;
     return 0;
    }
    if (VAR_4->comments[VAR_6].length > 0) {
     if (VAR_5 < VAR_4->comments[VAR_6].length) {
      VAR_4->num_comments = VAR_6;
      goto skip;
     }
     else
      VAR_5 -= VAR_4->comments[VAR_6].length;
     if (0 == (VAR_4->comments[VAR_6].entry = (FLAC__byte*)FUNC_7(VAR_4->comments[VAR_6].length, 1))) {
      VAR_3->protected_->state = VAR_0;
      VAR_4->num_comments = VAR_6;
      return 0;
     }
     FUNC_6 (VAR_4->comments[VAR_6].entry, 0, VAR_4->comments[VAR_6].length) ;
     if (!FUNC_2(VAR_3->private_->input, VAR_4->comments[VAR_6].entry, VAR_4->comments[VAR_6].length)) {
      VAR_4->num_comments = VAR_6;
      goto skip;
     }
     VAR_4->comments[VAR_6].entry[VAR_4->comments[VAR_6].length] = '\0';
    }
    else
     VAR_4->comments[VAR_6].entry = 0;
   }
  }
 }

  skip:
 if (VAR_5 > 0) {

  if(VAR_4->num_comments < 1) {
   FUNC_5(VAR_4->comments);
   VAR_4->comments = ((void*)0);
  }
  if(!FUNC_4(VAR_3->private_->input, VAR_5))
   return 0;
 }

 return 1;
}
