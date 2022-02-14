
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (void const*,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 != 0) {
        for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            FUNC_0(VAR_0, "%02x", ((unsigned char *) VAR_1)[VAR_5]);
        }
        FUNC_0(VAR_0, "\n");
        for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            FUNC_0(VAR_0, "%02x", ((unsigned char *) VAR_2)[VAR_6]);
        }
        FUNC_0(VAR_0, "\n");
    }
    return VAR_4;
}
