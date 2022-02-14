
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static esp_err_t FUNC_11(httpd_req_t *VAR_9)
{
    FUNC_7(VAR_9, VAR_7);
    int VAR_10;
    char *VAR_11;

    VAR_10 = FUNC_3(VAR_9, "Header1");
    if (VAR_10 > 0) {
        VAR_11 = FUNC_8(++VAR_10);
        if (!VAR_11) {
            FUNC_0(VAR_8, "Failed to allocate memory of %d bytes!", VAR_10);
            FUNC_6(VAR_9, VAR_6, "Memory allocation failed");
            return VAR_2;
        }

        if (FUNC_4(VAR_9, "Header1", VAR_11, VAR_10) == VAR_4) {
            FUNC_1(VAR_8, "Header1 content: %s", VAR_11);
            if (FUNC_9("Value1", VAR_11) != 0) {
                FUNC_6(VAR_9, VAR_5, "Wrong value of Header1 received");
                FUNC_2(VAR_11);
                return VAR_0;
            } else {
                FUNC_1(VAR_8, "Expected value and received value matched for Header1");
            }
        } else {
            FUNC_0(VAR_8, "Error in getting value of Header1");
            FUNC_6(VAR_9, VAR_5, "Error in getting value of Header1");
            FUNC_2(VAR_11);
            return VAR_3;
        }
        FUNC_2(VAR_11);
    } else {
        FUNC_0(VAR_8, "Header1 not found");
        FUNC_6(VAR_9, VAR_5, "Header1 not found");
        return VAR_1;
    }

    VAR_10 = FUNC_3(VAR_9, "Header3");
    if (VAR_10 > 0) {
        VAR_11 = FUNC_8(++VAR_10);
        if (!VAR_11) {
            FUNC_0(VAR_8, "Failed to allocate memory of %d bytes!", VAR_10);
            FUNC_6(VAR_9, VAR_6, "Memory allocation failed");
            return VAR_2;
        }

        if (FUNC_4(VAR_9, "Header3", VAR_11, VAR_10) == VAR_4) {
            FUNC_1(VAR_8, "Header3 content: %s", VAR_11);
            if (FUNC_9("Value3", VAR_11) != 0) {
                FUNC_6(VAR_9, VAR_5, "Wrong value of Header3 received");
                FUNC_2(VAR_11);
                return VAR_0;
            } else {
                FUNC_1(VAR_8, "Expected value and received value matched for Header3");
            }
        } else {
            FUNC_0(VAR_8, "Error in getting value of Header3");
            FUNC_6(VAR_9, VAR_5, "Error in getting value of Header3");
            FUNC_2(VAR_11);
            return VAR_3;
        }
        FUNC_2(VAR_11);
    } else {
        FUNC_0(VAR_8, "Header3 not found");
        FUNC_6(VAR_9, VAR_5, "Header3 not found");
        return VAR_1;
    }

    VAR_10 = FUNC_3(VAR_9, "Header2");
    VAR_11 = FUNC_8(++VAR_10);
    if (!VAR_11) {
        FUNC_0(VAR_8, "Failed to allocate memory of %d bytes!", VAR_10);
        FUNC_6(VAR_9, VAR_6, "Memory allocation failed");
        return VAR_2;
    }
    if (FUNC_4(VAR_9, "Header2", VAR_11, VAR_10) == VAR_4) {
        FUNC_1(VAR_8, "Header2 content: %s", VAR_11);
        FUNC_5(VAR_9, VAR_11, FUNC_10(VAR_11));
    } else {
        FUNC_0(VAR_8, "Header2 not found");
        FUNC_6(VAR_9, VAR_5, "Header2 not found");
        return VAR_3;
    }

    return VAR_4;
}
