
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tv ;
struct timeval {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; } ;
struct TYPE_5__ {int error_handle; } ;
typedef TYPE_1__ esp_tls_t ;
struct TYPE_6__ {scalar_t__ timeout_ms; scalar_t__ non_block; } ;
typedef TYPE_2__ esp_tls_cfg_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,void*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct addrinfo*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,struct timeval*) ;
 scalar_t__ FUNC_8 (char const*,int,struct addrinfo**) ;
 int FUNC_9 (int,int ,int ,struct timeval*,int) ;
 int FUNC_10 (scalar_t__,int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_11(const char *VAR_16, int VAR_17, int VAR_18, int *VAR_19, const esp_tls_t *VAR_20, const esp_tls_cfg_t *VAR_21)
{
    esp_err_t VAR_22;
    struct addrinfo *VAR_23;
    if ((VAR_22 = FUNC_8(VAR_16, VAR_17, &VAR_23)) != VAR_7) {
        return VAR_22;
    }

    int VAR_24 = FUNC_10(VAR_23->ai_family, VAR_23->ai_socktype, VAR_23->ai_protocol);
    if (VAR_24 < 0) {
        FUNC_1(VAR_14, "Failed to create socket (family %d socktype %d protocol %d)", VAR_23->ai_family, VAR_23->ai_socktype, VAR_23->ai_protocol);
        FUNC_0(VAR_20->error_handle, VAR_3, VAR_15);
        VAR_22 = VAR_4;
        goto err_freeaddr;
    }

    void *VAR_25;
    if (VAR_23->ai_family == VAR_0) {
        struct sockaddr_in *VAR_26 = (struct sockaddr_in *)VAR_23->ai_addr;
        VAR_26->sin_port = FUNC_6(VAR_18);
        VAR_25 = VAR_26;
    } else if (VAR_23->ai_family == VAR_1) {
        struct sockaddr_in6 *VAR_27 = (struct sockaddr_in6 *)VAR_23->ai_addr;
        VAR_27->sin6_port = FUNC_6(VAR_18);
        VAR_27->sin6_family = VAR_1;
        VAR_25 = VAR_27;
    } else {
        FUNC_1(VAR_14, "Unsupported protocol family %d", VAR_23->ai_family);
        VAR_22 = VAR_6;
        goto err_freesocket;
    }

    if (VAR_21) {
        if (VAR_21->timeout_ms >= 0) {
            struct timeval VAR_28;
            FUNC_7(VAR_21->timeout_ms, &VAR_28);
            FUNC_9(VAR_24, VAR_11, VAR_12, &VAR_28, sizeof(VAR_28));
            FUNC_9(VAR_24, VAR_11, VAR_13, &VAR_28, sizeof(VAR_28));
        }
        if (VAR_21->non_block) {
            int VAR_29 = FUNC_4(VAR_24, VAR_8, 0);
            FUNC_4(VAR_24, VAR_9, VAR_29 | VAR_10);
        }
    }

    VAR_22 = FUNC_3(VAR_24, VAR_25, VAR_23->ai_addrlen);
    if (VAR_22 < 0 && !(VAR_15 == VAR_2 && VAR_21 && VAR_21->non_block)) {

        FUNC_1(VAR_14, "Failed to connnect to host (errno %d)", VAR_15);
        FUNC_0(VAR_20->error_handle, VAR_3, VAR_15);
        VAR_22 = VAR_5;
        goto err_freesocket;
    }

    *VAR_19 = VAR_24;
    FUNC_5(VAR_23);
    return VAR_7;

err_freesocket:
    FUNC_2(VAR_24);
err_freeaddr:
    FUNC_5(VAR_23);
    return VAR_22;
}
