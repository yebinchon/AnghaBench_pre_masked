
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_authenticator {int const* addr; } ;
struct l2_ethhdr {char* h_dest; char* h_source; int h_proto; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int const*,size_t) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,void*) ;

__attribute__((used)) static inline int
FUNC_6(struct wpa_authenticator *VAR_3, const u8 *VAR_4,
            const u8 *VAR_5, size_t VAR_6, int VAR_7)
{
    void *VAR_8 = FUNC_4(256);
    struct l2_ethhdr *VAR_9 = VAR_8;

    if (!VAR_8){
        FUNC_5( VAR_2, "send_eapol, buffer=%p\n", VAR_8);
        return -1;
    }

    FUNC_2(VAR_9->h_dest, VAR_4, VAR_0);
    FUNC_2(VAR_9->h_source, VAR_3->addr, VAR_0);
    VAR_9->h_proto = FUNC_1(VAR_1);

    FUNC_2((char *)VAR_8 + sizeof(struct l2_ethhdr), VAR_5, VAR_6);
    FUNC_0(1, VAR_8, sizeof(struct l2_ethhdr) + VAR_6);
    FUNC_3(VAR_8);
    return 0;
}
