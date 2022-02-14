
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct TYPE_4__ {int namelen; scalar_t__ dwBufferCount; struct TYPE_4__* lpBuffers; scalar_t__ name; } ;
typedef TYPE_1__ WSAMSG ;
typedef int WSABUF ;
typedef TYPE_1__* LPWSABUF ;
typedef scalar_t__ LPSOCKADDR ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(void **VAR_0, void *VAR_1, int VAR_2) {
    WSAMSG *VAR_3 = (WSAMSG *)FUNC_0(sizeof(WSAMSG));
    FUNC_1(VAR_3, 0, sizeof(WSAMSG));
    *VAR_0 = VAR_3;



    VAR_3->name = (LPSOCKADDR)VAR_1;
    VAR_3->namelen = sizeof(struct sockaddr_in);
    int VAR_4 = sizeof(WSABUF) * VAR_2;
    VAR_3->lpBuffers = (LPWSABUF)FUNC_0(VAR_4);
    FUNC_1(VAR_3->lpBuffers, 0, VAR_4);
    VAR_3->dwBufferCount = 0;
}
