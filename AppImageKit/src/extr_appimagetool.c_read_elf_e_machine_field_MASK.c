
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int gchar ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int const*,char*) ;
 int FUNC_3 (int *,int,int ) ;

int16_t FUNC_4(const gchar* VAR_1) {
    int16_t VAR_2 = 0x00;
    FILE* VAR_3 = 0;
    VAR_3 = FUNC_2(VAR_1, "rb");
    if (VAR_3) {
        FUNC_3(VAR_3, 0x12, VAR_0);
        FUNC_1((char*) (&VAR_2), 0x02, VAR_3);
        FUNC_0(VAR_3);
    }

    return VAR_2;
}
