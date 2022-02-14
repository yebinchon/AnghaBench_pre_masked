
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ num_rows; } ;
struct TYPE_15__ {scalar_t__ table; } ;
struct TYPE_14__ {int num_rows; void** xbits; } ;
struct TYPE_13__ {int tab_sel; TYPE_3__* tab; TYPE_3__ cust_tab; TYPE_4__ cust_desc; } ;
typedef TYPE_1__ IVIHuffTab ;
typedef TYPE_2__ IVIHuffDesc ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (int *,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 TYPE_3__* VAR_3 ;

int FUNC_6(GetBitContext *VAR_4, int VAR_5, int VAR_6,
                         IVIHuffTab *VAR_7, AVCodecContext *VAR_8)
{
    int VAR_9, VAR_10;
    IVIHuffDesc VAR_11;

    if (!VAR_5) {

        VAR_7->tab = (VAR_6) ? &VAR_2[7]
                                    : &VAR_3 [7];
        return 0;
    }

    VAR_7->tab_sel = FUNC_2(VAR_4, 3);
    if (VAR_7->tab_sel == 7) {

        VAR_11.num_rows = FUNC_2(VAR_4, 4);
        if (!VAR_11.num_rows) {
            FUNC_0(VAR_8, VAR_1, "Empty custom Huffman table!\n");
            return VAR_0;
        }

        for (VAR_9 = 0; VAR_9 < VAR_11.num_rows; VAR_9++)
            VAR_11.xbits[VAR_9] = FUNC_2(VAR_4, 4);


        if (FUNC_4(&VAR_11, &VAR_7->cust_desc) || !VAR_7->cust_tab.table) {
            FUNC_5(&VAR_7->cust_desc, &VAR_11);

            if (VAR_7->cust_tab.table)
                FUNC_1(&VAR_7->cust_tab);
            VAR_10 = FUNC_3(&VAR_7->cust_desc,
                    &VAR_7->cust_tab, 0);
            if (VAR_10) {

                VAR_7->cust_desc.num_rows = 0;
                FUNC_0(VAR_8, VAR_1,
                       "Error while initializing custom vlc table!\n");
                return VAR_10;
            }
        }
        VAR_7->tab = &VAR_7->cust_tab;
    } else {

        VAR_7->tab = (VAR_6) ? &VAR_2[VAR_7->tab_sel]
            : &VAR_3 [VAR_7->tab_sel];
    }

    return 0;
}
