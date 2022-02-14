
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


struct TYPE_15__ {TYPE_2__* private_; TYPE_1__* protected_; } ;
struct TYPE_14__ {int is_cd; size_t num_tracks; TYPE_3__* tracks; int lead_in; scalar_t__ media_catalog_number; } ;
struct TYPE_13__ {void* number; int offset; } ;
struct TYPE_12__ {size_t type; size_t pre_emphasis; scalar_t__ num_indices; TYPE_4__* indices; scalar_t__ isrc; void* number; int offset; } ;
struct TYPE_11__ {int input; } ;
struct TYPE_10__ {void* state; } ;
typedef size_t FLAC__uint32 ;
typedef void* FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamMetadata_CueSheet_Track ;
typedef TYPE_4__ FLAC__StreamMetadata_CueSheet_Index ;
typedef TYPE_5__ FLAC__StreamMetadata_CueSheet ;
typedef TYPE_6__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void**,int) ;
 int FUNC_3 (int ,size_t*,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;

FLAC__bool FUNC_8(FLAC__StreamDecoder *VAR_16, FLAC__StreamMetadata_CueSheet *VAR_17)
{
 FLAC__uint32 VAR_18, VAR_19, VAR_20;

 FUNC_0(FUNC_1(VAR_16->private_->input));

 FUNC_6(VAR_17, 0, sizeof(FLAC__StreamMetadata_CueSheet));

 FUNC_0(VAR_6 % 8 == 0);
 if(!FUNC_2(VAR_16->private_->input, (FLAC__byte*)VAR_17->media_catalog_number, VAR_6/8))
  return 0;

 if(!FUNC_4(VAR_16->private_->input, &VAR_17->lead_in, VAR_5))
  return 0;

 if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_4))
  return 0;
 VAR_17->is_cd = VAR_20? 1 : 0;

 if(!FUNC_5(VAR_16->private_->input, VAR_8))
  return 0;

 if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_7))
  return 0;
 VAR_17->num_tracks = VAR_20;

 if(VAR_17->num_tracks > 0) {
  if(0 == (VAR_17->tracks = (FLAC__StreamMetadata_CueSheet_Track*)FUNC_7(VAR_17->num_tracks, sizeof(FLAC__StreamMetadata_CueSheet_Track)))) {
   VAR_16->protected_->state = VAR_0;
   return 0;
  }
  for(VAR_18 = 0; VAR_18 < VAR_17->num_tracks; VAR_18++) {
   FLAC__StreamMetadata_CueSheet_Track *VAR_21 = &VAR_17->tracks[VAR_18];
   if(!FUNC_4(VAR_16->private_->input, &VAR_21->offset, VAR_12))
    return 0;

   if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_10))
    return 0;
   VAR_21->number = (FLAC__byte)VAR_20;

   FUNC_0(VAR_9 % 8 == 0);
   if(!FUNC_2(VAR_16->private_->input, (FLAC__byte*)VAR_21->isrc, VAR_9/8))
    return 0;

   if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_15))
    return 0;
   VAR_21->type = VAR_20;

   if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_13))
    return 0;
   VAR_21->pre_emphasis = VAR_20;

   if(!FUNC_5(VAR_16->private_->input, VAR_14))
    return 0;

   if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_11))
    return 0;
   VAR_21->num_indices = (FLAC__byte)VAR_20;

   if(VAR_21->num_indices > 0) {
    if(0 == (VAR_21->indices = (FLAC__StreamMetadata_CueSheet_Index*)FUNC_7(VAR_21->num_indices, sizeof(FLAC__StreamMetadata_CueSheet_Index)))) {
     VAR_16->protected_->state = VAR_0;
     return 0;
    }
    for(VAR_19 = 0; VAR_19 < VAR_21->num_indices; VAR_19++) {
     FLAC__StreamMetadata_CueSheet_Index *VAR_22 = &VAR_21->indices[VAR_19];
     if(!FUNC_4(VAR_16->private_->input, &VAR_22->offset, VAR_2))
      return 0;

     if(!FUNC_3(VAR_16->private_->input, &VAR_20, VAR_1))
      return 0;
     VAR_22->number = (FLAC__byte)VAR_20;

     if(!FUNC_5(VAR_16->private_->input, VAR_3))
      return 0;
    }
   }
  }
 }

 return 1;
}
