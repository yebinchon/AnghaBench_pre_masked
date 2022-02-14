
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_sm {int (* sendto ) (void*,int) ;int const* own_addr; } ;
struct l2_ethhdr {int h_proto; int h_source; int h_dest; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static inline int FUNC_3( struct wpa_sm *VAR_1, const u8 *VAR_2, u16 VAR_3,
        const u8 *VAR_4, size_t VAR_5)
{
    void *VAR_6 = (void *)(VAR_4 - sizeof(struct l2_ethhdr));
    struct l2_ethhdr *VAR_7 = (struct l2_ethhdr *)VAR_6;

    FUNC_1(VAR_7->h_dest, VAR_2, VAR_0);
    FUNC_1(VAR_7->h_source, VAR_1->own_addr, VAR_0);
    VAR_7->h_proto = FUNC_0(VAR_3);
    VAR_1->sendto(VAR_6, sizeof(struct l2_ethhdr) + VAR_5);

    return 0;
}
