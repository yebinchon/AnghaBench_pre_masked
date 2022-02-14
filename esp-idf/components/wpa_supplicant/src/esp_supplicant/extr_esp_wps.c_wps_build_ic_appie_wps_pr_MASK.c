
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wps_sm {int uuid; int dev; } ;
struct wpabuf {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 struct wps_sm* VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf**,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void)
{
    struct wpabuf *VAR_7 = ((void*)0);
    struct wpabuf *VAR_8;
    struct wps_sm *VAR_9 = VAR_6;

    FUNC_1(VAR_2, "wps build: wps pr");

    if (FUNC_8() == VAR_5) {
        VAR_8 = (struct wpabuf *)FUNC_7(VAR_1,
                 VAR_9->dev,
                 VAR_9->uuid, VAR_4,
                 0, ((void*)0));
    } else {
        VAR_8 = (struct wpabuf *)FUNC_7(VAR_0,
                 VAR_9->dev,
                 VAR_9->uuid, VAR_4,
                 0, ((void*)0));
    }

    if (VAR_8) {
        if (FUNC_6(&VAR_7, FUNC_4(VAR_8)) == 0) {
            FUNC_5(VAR_7, VAR_8);
        } else {
            FUNC_2(VAR_8);
            return;
        }
        FUNC_2(VAR_8);
    }

    FUNC_0(VAR_3, (uint8_t *)FUNC_3(VAR_7), VAR_7->used, 0);
    FUNC_2(VAR_7);
}
