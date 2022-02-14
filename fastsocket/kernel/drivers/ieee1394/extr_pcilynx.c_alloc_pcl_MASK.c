
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_lynx {int* pcl_bmap; int lock; } ;
typedef int pcl_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static pcl_t FUNC_2(struct ti_lynx *VAR_1)
{
        u8 VAR_2;
        int VAR_3, VAR_4;

        FUNC_0(&VAR_1->lock);

        for (VAR_3 = 0; VAR_3 < (VAR_0 / 1024); VAR_3++) {
                VAR_2 = VAR_1->pcl_bmap[VAR_3];
                for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
                        if (VAR_2 & 1<<VAR_4) {
                                continue;
                        }
                        VAR_2 |= 1<<VAR_4;
                        VAR_1->pcl_bmap[VAR_3] = VAR_2;
                        FUNC_1(&VAR_1->lock);
                        return 8 * VAR_3 + VAR_4;
                }
        }
        FUNC_1(&VAR_1->lock);

        return -1;
}
