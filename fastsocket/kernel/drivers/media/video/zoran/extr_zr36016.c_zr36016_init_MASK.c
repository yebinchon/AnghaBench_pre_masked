
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36016 {scalar_t__ mode; int width; int height; int xoff; int yoff; scalar_t__ ydec; scalar_t__ xdec; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct zr36016*,int ,int) ;
 int FUNC_1 (struct zr36016*,int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct zr36016 *VAR_22)
{

 FUNC_0(VAR_22, VAR_15, 0);


 FUNC_0(VAR_22, VAR_18,
        VAR_20 | VAR_21 |
        (VAR_22->mode == VAR_0 ?
         VAR_13 : VAR_14));


 FUNC_1(VAR_22, VAR_9,
         (VAR_22->xdec ? (VAR_17 | VAR_16) : 0) |
         (VAR_22->ydec ? VAR_19 : 0) | VAR_12);
 FUNC_1(VAR_22, VAR_10, VAR_11);



 FUNC_1(VAR_22, VAR_5, VAR_22->width >> 8);
 FUNC_1(VAR_22, VAR_6, VAR_22->width & 0xFF);
 FUNC_1(VAR_22, VAR_7, VAR_22->height >> 8);
 FUNC_1(VAR_22, VAR_8, VAR_22->height & 0xFF);
 FUNC_1(VAR_22, VAR_1, VAR_22->xoff >> 8);
 FUNC_1(VAR_22, VAR_2, VAR_22->xoff & 0xFF);
 FUNC_1(VAR_22, VAR_3, VAR_22->yoff >> 8);
 FUNC_1(VAR_22, VAR_4, VAR_22->yoff & 0xFF);


 FUNC_0(VAR_22, VAR_15, 1);
}
