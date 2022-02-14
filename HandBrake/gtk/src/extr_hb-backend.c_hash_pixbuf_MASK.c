
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint8 ;
typedef scalar_t__ gint ;
typedef int GdkPixbuf ;


 int FUNC_0 (int *,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
    GdkPixbuf * VAR_0,
    gint VAR_1,
    gint VAR_2,
    gint VAR_3,
    gint VAR_4,
    gint VAR_5,
    gint VAR_6)
{
    gint VAR_7, VAR_8;
    gint VAR_9 = 8;
    struct
    {
        guint8 r;
        guint8 g;
        guint8 b;
    } VAR_10[4] =
    {{0x80, 0x80, 0x80},{0xC0, 0x80, 0x70},{0x80, 0xA0, 0x80},{0x70, 0x80, 0xA0}};

    if (!VAR_6)
    {

        for (VAR_7 = VAR_1, VAR_8 = 0; VAR_7+VAR_9 < VAR_1+VAR_3; VAR_7 += VAR_5, VAR_8++)
        {
            FUNC_1(VAR_0, VAR_10[VAR_8&3].r, VAR_10[VAR_8&3].g, VAR_10[VAR_8&3].b, VAR_7, VAR_2, VAR_4, VAR_9);
        }
    }
    else
    {

        for (VAR_7 = VAR_2, VAR_8 = 0; VAR_7+VAR_9 < VAR_2+VAR_4; VAR_7 += VAR_5, VAR_8++)
        {
            FUNC_0(VAR_0, VAR_10[VAR_8&3].r, VAR_10[VAR_8&3].g, VAR_10[VAR_8&3].b, VAR_1, VAR_7, VAR_3, VAR_9);
        }
    }
}
