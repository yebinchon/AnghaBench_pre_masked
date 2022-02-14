
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2_ethhdr {int h_proto; int h_source; int h_dest; } ;
struct eap_sm {int const* ownaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static inline int FUNC_4(struct eap_sm *VAR_4, const u8 *VAR_5, u16 VAR_6,
                                     const u8 *VAR_7, size_t VAR_8)
{
    void *VAR_9 = (void *)(VAR_7 - sizeof(struct l2_ethhdr));
    struct l2_ethhdr *VAR_10 = ((void*)0);

    if (!VAR_9) {
        FUNC_3(VAR_3, "wpa2: invalid data");
        return VAR_0;
    } else {
        VAR_10 = (struct l2_ethhdr *)VAR_9;
        FUNC_1(VAR_10->h_dest, VAR_5, VAR_2);
        FUNC_1(VAR_10->h_source, VAR_4->ownaddr, VAR_2);
        VAR_10->h_proto = FUNC_0(VAR_6);
        FUNC_2(VAR_9, sizeof(struct l2_ethhdr) + VAR_8);
    }

    return VAR_1;
}
