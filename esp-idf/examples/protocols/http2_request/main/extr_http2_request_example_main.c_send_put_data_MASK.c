
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sh2lib_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct sh2lib_handle *VAR_2, char *VAR_3, size_t VAR_4, uint32_t *VAR_5)
{

    int VAR_6 = FUNC_2("Hello World");
    if (VAR_6 < VAR_4) {
        FUNC_1("[data-prvd] Sending %d bytes\n", VAR_6);
        FUNC_0(VAR_3, "Hello World", VAR_6);
    } else {
        VAR_6 = 0;
    }

    (*VAR_5) |= VAR_1;
    return VAR_6;
}
