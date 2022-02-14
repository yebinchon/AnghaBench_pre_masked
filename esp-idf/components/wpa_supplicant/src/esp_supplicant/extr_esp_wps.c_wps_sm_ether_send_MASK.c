
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_sm {int const* ownaddr; } ;
struct l2_ethhdr {int h_proto; int h_source; int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static inline int FUNC_3(struct wps_sm *VAR_2, const u8 *VAR_3, u16 VAR_4,
                                    const u8 *VAR_5, size_t VAR_6)
{
    void *VAR_7 = (void *)(VAR_5 - sizeof(struct l2_ethhdr));
    struct l2_ethhdr *VAR_8 = (struct l2_ethhdr *)VAR_7;

    FUNC_1(VAR_8->h_dest, VAR_3, VAR_1);
    FUNC_1(VAR_8->h_source, VAR_2->ownaddr, VAR_1);
    VAR_8->h_proto = FUNC_0(VAR_4);

    FUNC_2(VAR_7, sizeof(struct l2_ethhdr) + VAR_6);

    return VAR_0;
}
