
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xstuff {int (* pXFreePixmap ) (int *,int ) ;int (* pXCreatePixmapCursor ) (int *,int ,int ,int *,int *,int ,int ) ;int (* pXCreateBitmapFromData ) (int *,int ,char*,int,int) ;} ;
typedef int dummy ;
typedef int XColor ;
typedef int Window ;
typedef int Pixmap ;
typedef int Display ;
typedef int Cursor ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,char*,int,int) ;
 int FUNC_2 (int *,int ,int ,int *,int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static Cursor FUNC_4(struct xstuff *VAR_0, Display *VAR_1, Window VAR_2)
{
 Cursor VAR_3;
 Pixmap VAR_4;
 XColor VAR_5;
 char VAR_6 = 0;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_4 = VAR_0->pXCreateBitmapFromData(VAR_1, VAR_2, &VAR_6, 1, 1);
 VAR_3 = VAR_0->pXCreatePixmapCursor(VAR_1, VAR_4, VAR_4,
   &VAR_5, &VAR_5, 0, 0);
 VAR_0->pXFreePixmap(VAR_1, VAR_4);
 return VAR_3;
}
