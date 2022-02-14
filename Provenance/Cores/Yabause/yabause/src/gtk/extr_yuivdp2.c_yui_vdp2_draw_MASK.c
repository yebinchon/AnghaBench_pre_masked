
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int guchar ;
struct TYPE_3__ {int image; } ;
typedef TYPE_1__ YuiVdp2 ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int ,int ,int,int,int,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int,int) ;

__attribute__((used)) static void FUNC_4(YuiVdp2 * VAR_3, u32 * VAR_4, int VAR_5, int VAR_6) {
 GdkPixbuf * VAR_7;
 int VAR_8;

 if ((VAR_4 != ((void*)0)) && (VAR_5 > 0) && (VAR_6 > 0)) {
  VAR_8 = VAR_5 * 4;
  VAR_8 += (VAR_8 % 4)? (4 - (VAR_8 % 4)): 0;
  VAR_7 = FUNC_2((const guchar *) VAR_4, VAR_0, VAR_1, 8,
   VAR_5, VAR_6, VAR_8, VAR_2, ((void*)0));

  FUNC_3(FUNC_0(VAR_3->image), VAR_7, VAR_5, VAR_6);

  FUNC_1(VAR_7);
 }
}
