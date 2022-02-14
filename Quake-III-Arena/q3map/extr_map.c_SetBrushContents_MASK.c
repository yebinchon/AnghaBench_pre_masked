
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contents; int surfaceFlags; int shaderInfo; } ;
typedef TYPE_1__ side_t ;
typedef void* qboolean ;
struct TYPE_5__ {int numsides; int contents; void* opaque; void* detail; int brushnum; int entitynum; TYPE_1__* sides; int contentShader; } ;
typedef TYPE_2__ bspbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*,int ,int ) ;
 void* VAR_11 ;

void FUNC_2( bspbrush_t *VAR_12 ) {
 int VAR_13, VAR_14;
 side_t *VAR_15;
 int VAR_16;
 qboolean VAR_17;
 int VAR_18;

 VAR_15 = &VAR_12->sides[0];
 VAR_13 = VAR_15->contents;
 VAR_12->contentShader = VAR_15->shaderInfo;
 VAR_17 = VAR_10;

 VAR_18 = 0;

 for ( VAR_16=1 ; VAR_16<VAR_12->numsides ; VAR_16++, VAR_15++ ) {
  VAR_15 = &VAR_12->sides[VAR_16];

  if ( !VAR_15->shaderInfo ) {
   continue;
  }

  VAR_14 = VAR_15->contents;
  if (VAR_14 != VAR_13) {
   VAR_17 = VAR_11;
  }

  VAR_18 |= VAR_15->surfaceFlags;
 }

 if ( VAR_17 ) {
  FUNC_1 ("Entity %i, Brush %i: mixed face contents\n"
   , VAR_12->entitynum, VAR_12->brushnum);
 }

 if ( ( VAR_13 & VAR_1 ) && ( VAR_13 & VAR_2 ) ) {
  FUNC_0 ("Entity %i, Brush %i: mixed CONTENTS_DETAIL and CONTENTS_STRUCTURAL\n"
   , VAR_9-1, VAR_7 );
  VAR_13 &= ~VAR_1;
 }



 if ( VAR_8 ) {
  VAR_13 &= ~VAR_1;
 }



 if ( ( VAR_13 & VAR_3 ) && !( VAR_13 & VAR_2 ) ) {
  VAR_13 |= VAR_1;
 }

 if ( VAR_13 & VAR_1 ) {
  VAR_5++;
  VAR_12->detail = VAR_11;
 } else {
  VAR_6++;
  VAR_12->detail = VAR_10;
 }

 if ( VAR_13 & VAR_3 ) {
  VAR_12->opaque = VAR_10;
 } else {
  VAR_12->opaque = VAR_11;
 }

 if ( VAR_13 & VAR_0 ) {
  VAR_4++;
 }

 VAR_12->contents = VAR_13;
}
