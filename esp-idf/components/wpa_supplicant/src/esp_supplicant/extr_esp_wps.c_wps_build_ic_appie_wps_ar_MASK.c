
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpabuf {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    struct wpabuf *VAR_3 = (struct wpabuf *)FUNC_4(VAR_2);

    FUNC_1(VAR_0, "wps build: wps ar");

    if (VAR_3) {
        FUNC_0(VAR_1, (uint8_t *)FUNC_3(VAR_3), VAR_3->used, 0);
        FUNC_2(VAR_3);
    }
}
