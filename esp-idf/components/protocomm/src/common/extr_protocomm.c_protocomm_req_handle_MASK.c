
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
typedef char const* ssize_t ;
struct TYPE_8__ {int sec_inst; TYPE_1__* sec; } ;
typedef TYPE_2__ protocomm_t ;
struct TYPE_9__ {int flag; int priv_data; scalar_t__ (* req_handler ) (int ,int const*,char const*,int const**,char const**,int ) ;} ;
typedef TYPE_3__ protocomm_ep_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_7__ {scalar_t__ (* encrypt ) (int ,int ,int const*,char const*,int const*,char const**) ;scalar_t__ (* decrypt ) (int ,int ,int const*,char const*,int const*,char const**) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_5 (int ,int const*,char const*,int const**,char const**,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int const*,char const*,int const*,char const**) ;
 scalar_t__ FUNC_7 (int ,int const*,char const*,int const**,char const**,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int const*,char const*,int const*,char const**) ;
 scalar_t__ FUNC_9 (int ,int const*,char const*,int const**,char const**,int ) ;
 scalar_t__ FUNC_10 (int ,int const*,char const*,int const**,char const**,int ) ;

esp_err_t FUNC_11(protocomm_t *VAR_9, const char *VAR_10, uint32_t VAR_11,
                               const uint8_t *VAR_12, ssize_t VAR_13,
                               uint8_t **VAR_14, ssize_t *VAR_15)
{
    if (!VAR_9 || !VAR_10 || !VAR_14 || !VAR_15) {
        FUNC_1(VAR_7, "Invalid params %p %p", VAR_9, VAR_10);
        return VAR_0;
    }

    *VAR_14 = ((void*)0);
    *VAR_15 = 0;

    protocomm_ep_t *VAR_16 = FUNC_4(VAR_9, VAR_10);
    if (!VAR_16) {
        FUNC_1(VAR_7, "No registered endpoint for %s", VAR_10);
        return VAR_1;
    }

    esp_err_t VAR_17 = VAR_3;
    if (VAR_16->flag & VAR_6) {

        VAR_17 = VAR_16->req_handler(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16->priv_data);
        FUNC_0(VAR_7, "SEC_EP Req handler returned %d", VAR_17);
    } else if (VAR_16->flag & VAR_5) {
        if (VAR_9->sec && VAR_9->sec->decrypt) {

            uint8_t *VAR_18 = (uint8_t *) FUNC_3(VAR_13);
            if (!VAR_18) {
                FUNC_1(VAR_7, "Failed to allocate decrypt buf len %d", VAR_13);
                return VAR_2;
            }

            ssize_t VAR_19 = VAR_13;
            VAR_17 = VAR_9->sec->decrypt(VAR_9->sec_inst, VAR_11, VAR_12, VAR_13, VAR_18, &VAR_19);
            if (VAR_17 != VAR_4) {
                FUNC_1(VAR_7, "Decryption of response failed for endpoint %s", VAR_10);
                FUNC_2(VAR_18);
                return VAR_17;
            }


            uint8_t *VAR_20 = ((void*)0);
            ssize_t VAR_21 = 0;
            VAR_17 = VAR_16->req_handler(VAR_11,
                                  VAR_18, VAR_19,
                                  &VAR_20, &VAR_21,
                                  VAR_16->priv_data);
            if (VAR_17 != VAR_4) {
                FUNC_1(VAR_7, "Request handler for %s failed", VAR_10);
                FUNC_2(VAR_20);
                FUNC_2(VAR_18);
                return VAR_17;
            }

            FUNC_2(VAR_18);


            uint8_t *VAR_22 = (uint8_t *) FUNC_3(VAR_21);
            if (!VAR_22) {
                FUNC_1(VAR_7, "Failed to allocate decrypt buf len %d", VAR_13);
                FUNC_2(VAR_20);
                return VAR_2;
            }

            ssize_t VAR_23 = VAR_21;
            VAR_17 = VAR_9->sec->encrypt(VAR_9->sec_inst, VAR_11, VAR_20, VAR_21,
                                   VAR_22, &VAR_23);

            if (VAR_17 != VAR_4) {
                FUNC_1(VAR_7, "Encryption of response failed for endpoint %s", VAR_10);
                FUNC_2(VAR_22);
                FUNC_2(VAR_20);
                return VAR_17;
            }


            FUNC_2(VAR_20);


            *VAR_14 = VAR_22;
            *VAR_15 = VAR_23;
        } else {

            VAR_17 = VAR_16->req_handler(VAR_11,
                                  VAR_12, VAR_13,
                                  VAR_14, VAR_15,
                                  VAR_16->priv_data);
            FUNC_0(VAR_7, "No encrypt ret %d", VAR_17);
        }
    } else if (VAR_16->flag & VAR_8) {
        VAR_17 = VAR_16->req_handler(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16->priv_data);
        FUNC_0(VAR_7, "VER_EP Req handler returned %d", VAR_17);
    }
    return VAR_17;
}
