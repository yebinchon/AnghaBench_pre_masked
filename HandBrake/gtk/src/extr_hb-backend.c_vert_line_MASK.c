
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint8 ;
typedef int gint ;
typedef int GdkPixbuf ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(
    GdkPixbuf * VAR_0,
    guint8 VAR_1,
    guint8 VAR_2,
    guint8 VAR_3,
    gint VAR_4,
    gint VAR_5,
    gint VAR_6,
    gint VAR_7)
{
    guint8 *VAR_8 = FUNC_1 (VAR_0);
    guint8 *VAR_9;
    gint VAR_10, VAR_11;
    gint VAR_12 = FUNC_0 (VAR_0);
    gint VAR_13 = FUNC_2 (VAR_0);

    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
        VAR_9 = VAR_8 + VAR_5 * VAR_13 + (VAR_4+VAR_11) * VAR_12;
        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
        {
            VAR_9[0] = VAR_1;
            VAR_9[1] = VAR_2;
            VAR_9[2] = VAR_3;
            VAR_9 += VAR_13;
        }
    }
}
