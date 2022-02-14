
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_2__ {int lock; scalar_t__ speed_map; scalar_t__ topology_map; } ;
struct hpsb_host {TYPE_1__ csr; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hpsb_host *VAR_4, int VAR_5, quadlet_t *VAR_6,
                     u64 VAR_7, size_t VAR_8, u16 VAR_9)
{
 unsigned long VAR_10;
        int VAR_11 = VAR_7 - VAR_0;
        const char *VAR_12;

        FUNC_1(&VAR_4->csr.lock, VAR_10);

 if (VAR_11 < VAR_1) {
                VAR_12 = ((char *)VAR_4->csr.topology_map) + VAR_11
                        - VAR_2;
        } else {
                VAR_12 = ((char *)VAR_4->csr.speed_map) + VAR_11 - VAR_1;
        }

        FUNC_0(VAR_6, VAR_12, VAR_8);
        FUNC_2(&VAR_4->csr.lock, VAR_10);
        return VAR_3;
}
