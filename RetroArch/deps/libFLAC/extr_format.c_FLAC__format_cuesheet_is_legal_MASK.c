
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lead_in; int num_tracks; TYPE_2__* tracks; } ;
struct TYPE_6__ {int number; int offset; unsigned int num_indices; TYPE_1__* indices; } ;
struct TYPE_5__ {int number; int offset; } ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamMetadata_CueSheet ;



FLAC__bool FUNC_0(const FLAC__StreamMetadata_CueSheet *VAR_0, FLAC__bool VAR_1, const char **VAR_2)
{
 unsigned VAR_3, VAR_4;

 if(VAR_1) {
  if(VAR_0->lead_in < 2 * 44100) {
   if(VAR_2) *VAR_2 = "CD-DA cue sheet must have a lead-in length of at least 2 seconds";
   return 0;
  }
  if(VAR_0->lead_in % 588 != 0) {
   if(VAR_2) *VAR_2 = "CD-DA cue sheet lead-in length must be evenly divisible by 588 samples";
   return 0;
  }
 }

 if(VAR_0->num_tracks == 0) {
  if(VAR_2) *VAR_2 = "cue sheet must have at least one track (the lead-out)";
  return 0;
 }

 if(VAR_1 && VAR_0->tracks[VAR_0->num_tracks-1].number != 170) {
  if(VAR_2) *VAR_2 = "CD-DA cue sheet must have a lead-out track number 170 (0xAA)";
  return 0;
 }

 for(VAR_3 = 0; VAR_3 < VAR_0->num_tracks; VAR_3++) {
  if(VAR_0->tracks[VAR_3].number == 0) {
   if(VAR_2) *VAR_2 = "cue sheet may not have a track number 0";
   return 0;
  }

  if(VAR_1) {
   if(!((VAR_0->tracks[VAR_3].number >= 1 && VAR_0->tracks[VAR_3].number <= 99) || VAR_0->tracks[VAR_3].number == 170)) {
    if(VAR_2) *VAR_2 = "CD-DA cue sheet track number must be 1-99 or 170";
    return 0;
   }
  }

  if(VAR_1 && VAR_0->tracks[VAR_3].offset % 588 != 0) {
   if(VAR_2) {
    if(VAR_3 == VAR_0->num_tracks-1)
     *VAR_2 = "CD-DA cue sheet lead-out offset must be evenly divisible by 588 samples";
    else
     *VAR_2 = "CD-DA cue sheet track offset must be evenly divisible by 588 samples";
   }
   return 0;
  }

  if(VAR_3 < VAR_0->num_tracks - 1) {
   if(VAR_0->tracks[VAR_3].num_indices == 0) {
    if(VAR_2) *VAR_2 = "cue sheet track must have at least one index point";
    return 0;
   }

   if(VAR_0->tracks[VAR_3].indices[0].number > 1) {
    if(VAR_2) *VAR_2 = "cue sheet track's first index number must be 0 or 1";
    return 0;
   }
  }

  for(VAR_4 = 0; VAR_4 < VAR_0->tracks[VAR_3].num_indices; VAR_4++) {
   if(VAR_1 && VAR_0->tracks[VAR_3].indices[VAR_4].offset % 588 != 0) {
    if(VAR_2) *VAR_2 = "CD-DA cue sheet track index offset must be evenly divisible by 588 samples";
    return 0;
   }

   if(VAR_4 > 0) {
    if(VAR_0->tracks[VAR_3].indices[VAR_4].number != VAR_0->tracks[VAR_3].indices[VAR_4-1].number + 1) {
     if(VAR_2) *VAR_2 = "cue sheet track index numbers must increase by 1";
     return 0;
    }
   }
  }
 }

 return 1;
}
