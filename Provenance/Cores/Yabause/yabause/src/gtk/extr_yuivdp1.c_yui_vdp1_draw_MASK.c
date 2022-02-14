
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guchar ;
struct TYPE_3__ {int w; scalar_t__ h; int image; int * texture; } ;
typedef TYPE_1__ YuiVdp1 ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int ,int ,int,int,scalar_t__,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(YuiVdp1 * VAR_3) {
 GdkPixbuf * VAR_4;
  int VAR_5;

  if ((VAR_3->texture != ((void*)0)) && (VAR_3->w > 0) && (VAR_3->h > 0)) {
   VAR_5 = VAR_3->w * 4;
   VAR_5 += (VAR_5 % 4)? (4 - (VAR_5 % 4)): 0;
   VAR_4 = FUNC_2((const guchar *) VAR_3->texture, VAR_0, VAR_1, 8,
   VAR_3->w, VAR_3->h, VAR_5, VAR_2, ((void*)0));

   FUNC_3(FUNC_0(VAR_3->image), VAR_4, VAR_3->w, VAR_3->h);

   FUNC_1(VAR_4);
  }
}
