
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpsb_host*,int,int,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct hpsb_host *VAR_3, int VAR_4, int VAR_5,
       quadlet_t *VAR_6, u64 VAR_7, size_t VAR_8, u16 VAR_9)
{
        int VAR_10 = VAR_7 - VAR_0;

        if (VAR_8 > 512)
                return VAR_2;

        switch (VAR_10) {
        case 129:
                FUNC_0(VAR_3, VAR_4, 0, (u8 *)VAR_6, VAR_8);
                break;
        case 128:
                FUNC_0(VAR_3, VAR_4, 1, (u8 *)VAR_6, VAR_8);
                break;
        default:
                return VAR_2;
        }

        return VAR_1;
}
