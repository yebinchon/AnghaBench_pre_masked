
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_8__ {int pixels_width; int pixels_height; int pixels_rowstride; int * pixels; } ;
typedef TYPE_2__ YuiGl ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_10__ {TYPE_1__ allocation; } ;
struct TYPE_9__ {int (* GetGlSize ) (int*,int*) ;} ;
typedef int GLubyte ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int*,int*) ;

void FUNC_5(YuiGl * VAR_4) {
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 u8 * VAR_11;
 u8 * VAR_12;

 VAR_2->GetGlSize( &VAR_5, &VAR_6 );
 VAR_9 = VAR_5 * VAR_6 * 3;

 VAR_4->pixels_width = VAR_5;
 VAR_4->pixels_height = VAR_6;
 VAR_4->pixels_rowstride = VAR_4->pixels_width * 3;
 VAR_4->pixels_rowstride += (VAR_4->pixels_rowstride % 4)? (4 - (VAR_4->pixels_rowstride % 4)): 0;

 if (! VAR_4->pixels) VAR_4->pixels = FUNC_3(sizeof(u8) * VAR_9);

 VAR_11 = (u8 *)VAR_4->pixels;
 VAR_11 += VAR_9 - (VAR_5 * 3);
 VAR_12 = (u8 *)VAR_3;

 for(VAR_7 = 0;VAR_7 < VAR_6;VAR_7++) {
  for(VAR_8 = 0;VAR_8 < VAR_5;VAR_8++) {
   *VAR_11++ = VAR_12[VAR_10];
   *VAR_11++ = VAR_12[VAR_10 + 1];
   *VAR_11++ = VAR_12[VAR_10 + 2];
   VAR_10 += 4;
  }
  VAR_11 -= VAR_5 * 6;
 }

}
