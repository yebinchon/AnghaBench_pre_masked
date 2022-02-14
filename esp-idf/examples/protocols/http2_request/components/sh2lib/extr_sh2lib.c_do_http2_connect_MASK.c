
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {int http2_sess; } ;
typedef int nghttp2_session_callbacks ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,struct sh2lib_handle*) ;
 int FUNC_11 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct sh2lib_handle *VAR_9)
{
    int VAR_10;
    nghttp2_session_callbacks *VAR_11;
    FUNC_2(&VAR_11);
    FUNC_9(VAR_11, VAR_8);
    FUNC_8(VAR_11, VAR_7);
    FUNC_5(VAR_11, VAR_4);
    FUNC_4(VAR_11, VAR_3);
    FUNC_7(VAR_11, VAR_6);
    FUNC_3(VAR_11, VAR_2);
    FUNC_6(VAR_11, VAR_5);
    VAR_10 = FUNC_10(&VAR_9->http2_sess, VAR_11, VAR_9);
    if (VAR_10 != 0) {
        FUNC_0(VAR_1, "[sh2-connect] New http2 session failed");
        FUNC_1(VAR_11);
        return -1;
    }
    FUNC_1(VAR_11);


    VAR_10 = FUNC_11(VAR_9->http2_sess, VAR_0, ((void*)0), 0);
    if (VAR_10 != 0) {
        FUNC_0(VAR_1, "[sh2-connect] Submit settings failed");
        return -1;
    }
    return 0;
}
