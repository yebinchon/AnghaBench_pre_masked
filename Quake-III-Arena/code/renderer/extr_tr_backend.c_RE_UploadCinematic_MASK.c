
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_4__ {int width; int height; int uploadWidth; int uploadHeight; } ;
struct TYPE_3__ {TYPE_2__** scratchImage; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,int,int,int ,int ,int ,int const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,int ,int ,int const*) ;
 TYPE_1__ VAR_10 ;

void FUNC_4 (int VAR_11, int VAR_12, int VAR_13, int VAR_14, const byte *VAR_15, int VAR_16, qboolean VAR_17) {

 FUNC_0( VAR_10.scratchImage[VAR_16] );


 if ( VAR_13 != VAR_10.scratchImage[VAR_16]->width || VAR_14 != VAR_10.scratchImage[VAR_16]->height ) {
  VAR_10.scratchImage[VAR_16]->width = VAR_10.scratchImage[VAR_16]->uploadWidth = VAR_13;
  VAR_10.scratchImage[VAR_16]->height = VAR_10.scratchImage[VAR_16]->uploadHeight = VAR_14;
  FUNC_1( VAR_4, 0, VAR_2, VAR_13, VAR_14, 0, VAR_3, VAR_9, VAR_15 );
  FUNC_2( VAR_4, VAR_6, VAR_1 );
  FUNC_2( VAR_4, VAR_5, VAR_1 );
  FUNC_2( VAR_4, VAR_7, VAR_0 );
  FUNC_2( VAR_4, VAR_8, VAR_0 );
 } else {
  if (VAR_17) {


   FUNC_3( VAR_4, 0, 0, 0, VAR_13, VAR_14, VAR_3, VAR_9, VAR_15 );
  }
 }
}
