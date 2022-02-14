
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
typedef int ULONG ;
struct TYPE_11__ {scalar_t__ OperStatus; struct TYPE_11__* Next; TYPE_3__* FirstUnicastAddress; int FriendlyName; } ;
struct TYPE_9__ {TYPE_1__* lpSockaddr; } ;
struct TYPE_10__ {struct TYPE_10__* Next; TYPE_2__ Address; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
typedef TYPE_3__* PIP_ADAPTER_UNICAST_ADDRESS ;
typedef TYPE_4__* PIP_ADAPTER_ADDRESSES ;
typedef char* LPVOID ;
typedef int LPTSTR ;
typedef int IP_ADAPTER_DNS_SERVER_ADDRESS ;
typedef TYPE_4__ IP_ADAPTER_ADDRESSES ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int *,int,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int *,TYPE_4__*,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__,int *,char*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char* const,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,char*) ;

int FUNC_11(char *const VAR_11) {
    PIP_ADAPTER_ADDRESSES VAR_12 = 0;
    IP_ADAPTER_DNS_SERVER_ADDRESS *VAR_13 = 0;
    ULONG VAR_14 = 0;
    DWORD VAR_15 = 0;
    char VAR_16[100];
    DWORD VAR_17 = 100;
    int VAR_18;
    int VAR_19 = -1;

    FUNC_9();
    FUNC_1(VAR_2, 0, ((void*)0), VAR_12, &VAR_14);
    VAR_12 = (IP_ADAPTER_ADDRESSES *)FUNC_6(VAR_14);
    if ((VAR_15 = FUNC_1(VAR_0, VAR_6, ((void*)0), VAR_12, &VAR_14)) == VAR_9) {
        while (VAR_12) {
            if (FUNC_10(VAR_12->FriendlyName, L"Loopback") != 0) {
                VAR_12 = VAR_12->Next;
                continue;
            }
            if (VAR_12->OperStatus == VAR_7) {

            }
            else {

                VAR_12 = VAR_12->Next;
                continue;
            }

            PIP_ADAPTER_UNICAST_ADDRESS VAR_20 = VAR_12->FirstUnicastAddress;
            for (VAR_18 = 0; VAR_20 != ((void*)0); VAR_18++) {
                if (VAR_20->Address.lpSockaddr->sa_family == VAR_0) {
                    struct sockaddr_in *VAR_21 = (struct sockaddr_in *)VAR_20->Address.lpSockaddr;
                    FUNC_8(VAR_11, FUNC_5(VAR_0, &(VAR_21->sin_addr), VAR_16, VAR_17));
                    VAR_19 = 0;

                }
                else if (VAR_20->Address.lpSockaddr->sa_family == VAR_1) {
                    struct sockaddr_in6 *VAR_22 = (struct sockaddr_in6 *)VAR_20->Address.lpSockaddr;
                    FUNC_8(VAR_11, FUNC_5(VAR_1, &(VAR_22->sin6_addr), VAR_16, VAR_17));
                    VAR_19 = 0;

                }
                else {
                }
                VAR_20 = VAR_20->Next;
            }
            VAR_12 = VAR_12->Next;
        }
    }
    else {
        LPVOID VAR_23;
        FUNC_7("Call to GetAdaptersAddresses failed.\n");
        if (FUNC_0(
          VAR_3 |
          VAR_4 |
          VAR_5,
          ((void*)0),
          VAR_15,
          FUNC_3(VAR_8, VAR_10),
          (LPTSTR) & VAR_23,
          0,
          ((void*)0))) {
            FUNC_7("\tError: %s", VAR_23);
        }
        FUNC_2(VAR_23);
    }
    FUNC_4(VAR_12);
    return VAR_19;
}
