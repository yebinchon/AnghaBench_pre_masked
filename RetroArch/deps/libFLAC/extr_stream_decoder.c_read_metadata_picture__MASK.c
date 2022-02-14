
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* private_; TYPE_1__* protected_; } ;
struct TYPE_9__ {char* mime_type; char* description; size_t width; size_t height; size_t depth; size_t colors; size_t data_length; char* data; scalar_t__ type; } ;
struct TYPE_8__ {int input; } ;
struct TYPE_7__ {void* state; } ;
typedef size_t FLAC__uint32 ;
typedef char FLAC__byte ;
typedef int FLAC__bool ;
typedef scalar_t__ FLAC__StreamMetadata_Picture_Type ;
typedef TYPE_3__ FLAC__StreamMetadata_Picture ;
typedef TYPE_4__ FLAC__StreamDecoder ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,size_t*,int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t,int) ;

FLAC__bool FUNC_6(FLAC__StreamDecoder *VAR_9, FLAC__StreamMetadata_Picture *VAR_10)
{
 FLAC__uint32 VAR_11;

 FUNC_0(FUNC_1(VAR_9->private_->input));


 if(!FUNC_3(VAR_9->private_->input, &VAR_11, VAR_7))
  return 0;
 VAR_10->type = (FLAC__StreamMetadata_Picture_Type)VAR_11;


 if(!FUNC_3(VAR_9->private_->input, &VAR_11, VAR_6))
  return 0;
 if(0 == (VAR_10->mime_type = (char*)FUNC_5(VAR_11, 1))) {
  VAR_9->protected_->state = VAR_0;
  return 0;
 }
 if(VAR_11 > 0) {
  if(!FUNC_2(VAR_9->private_->input, (FLAC__byte*)VAR_10->mime_type, VAR_11))
   return 0;
 }
 VAR_10->mime_type[VAR_11] = '\0';


 if(!FUNC_3(VAR_9->private_->input, &VAR_11, VAR_4))
  return 0;
 if(0 == (VAR_10->description = (FLAC__byte*)FUNC_5(VAR_11, 1))) {
  VAR_9->protected_->state = VAR_0;
  return 0;
 }
 if(VAR_11 > 0) {
  if(!FUNC_2(VAR_9->private_->input, VAR_10->description, VAR_11))
   return 0;
 }
 VAR_10->description[VAR_11] = '\0';


 if(!FUNC_3(VAR_9->private_->input, &VAR_10->width, VAR_8))
  return 0;


 if(!FUNC_3(VAR_9->private_->input, &VAR_10->height, VAR_5))
  return 0;


 if(!FUNC_3(VAR_9->private_->input, &VAR_10->depth, VAR_3))
  return 0;


 if(!FUNC_3(VAR_9->private_->input, &VAR_10->colors, VAR_1))
  return 0;


 if(!FUNC_3(VAR_9->private_->input, &(VAR_10->data_length), VAR_2))
  return 0;
 if(0 == (VAR_10->data = (FLAC__byte*)FUNC_4(VAR_10->data_length))) {
  VAR_9->protected_->state = VAR_0;
  return 0;
 }
 if(VAR_10->data_length > 0) {
  if(!FUNC_2(VAR_9->private_->input, VAR_10->data, VAR_10->data_length))
   return 0;
 }

 return 1;
}
