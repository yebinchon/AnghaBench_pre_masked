
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reference; int pic_id; int frame_num; } ;
typedef int H264Ref ;
typedef TYPE_1__ H264Picture ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__* const,int,int) ;

__attribute__((used)) static int FUNC_2(H264Ref *VAR_0, int VAR_1,
                          H264Picture * const *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6[2] = { 0 };
    int VAR_7 = 0;

    while (VAR_6[0] < VAR_3 || VAR_6[1] < VAR_3) {
        while (VAR_6[0] < VAR_3 && !(VAR_2[VAR_6[0]] && (VAR_2[VAR_6[0]]->reference & VAR_5)))
            VAR_6[0]++;
        while (VAR_6[1] < VAR_3 && !(VAR_2[VAR_6[1]] && (VAR_2[VAR_6[1]]->reference & (VAR_5 ^ 3))))
            VAR_6[1]++;
        if (VAR_6[0] < VAR_3) {
            FUNC_0(VAR_7 < VAR_1);
            VAR_2[VAR_6[0]]->pic_id = VAR_4 ? VAR_6[0] : VAR_2[VAR_6[0]]->frame_num;
            FUNC_1(&VAR_0[VAR_7++], VAR_2[VAR_6[0]++], VAR_5, 1);
        }
        if (VAR_6[1] < VAR_3) {
            FUNC_0(VAR_7 < VAR_1);
            VAR_2[VAR_6[1]]->pic_id = VAR_4 ? VAR_6[1] : VAR_2[VAR_6[1]]->frame_num;
            FUNC_1(&VAR_0[VAR_7++], VAR_2[VAR_6[1]++], VAR_5 ^ 3, 0);
        }
    }

    return VAR_7;
}
